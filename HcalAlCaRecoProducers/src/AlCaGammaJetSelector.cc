// -*- C++ -*-
//
// Package:    Calibration/HcalAlCaRecoProducers/AlCaGammaJetSelector
// Class:      AlCaGammaJetSelector
//
/**\class AlCaGammaJetSelector AlCaGammaJetSelector.cc Calibration/HcalAlCaRecoProducers/AlCaGammaJetSelector/src/AlCaGammaJetSelector.cc

 Description: Enable filtering of good events based on the AlCaGammaJetProducer info

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Andrius Juodagalvis
//         Created:  Fri, 15 Aug 2015 12:09:55 GMT
//
//


// system include files
#include <memory>
#include <iostream>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDFilter.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "DataFormats/EgammaCandidates/interface/Photon.h"
#include "DataFormats/EgammaCandidates/interface/PhotonFwd.h"
#include "DataFormats/JetReco/interface/PFJetCollection.h"
//#include "DataFormats/ParticleFlowCandidate/interface/PFCandidate.h"

//
// class declaration
//

class AlCaGammaJetSelector : public edm::EDFilter {
   public:
      explicit AlCaGammaJetSelector(const edm::ParameterSet&);
      ~AlCaGammaJetSelector();

      static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);

   private:
      virtual void beginJob() override;
      virtual bool filter(edm::Event&, const edm::EventSetup&) override;
      virtual void endJob() override;

      //virtual void beginRun(edm::Run const&, edm::EventSetup const&) override;
      //virtual void endRun(edm::Run const&, edm::EventSetup const&) override;
      //virtual void beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) override;
      //virtual void endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) override;

      // ----------member data ---------------------------

  ULong_t nProcessed_, nSelected_;

  edm::InputTag labelPhoton_, labelPFJet_;
  double minPtJet_, minPtPhoton_;
  edm::EDGetTokenT<reco::PhotonCollection> tok_Photon_;
  edm::EDGetTokenT<reco::PFJetCollection> tok_PFJet_;

};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
AlCaGammaJetSelector::AlCaGammaJetSelector(const edm::ParameterSet& iConfig)
{
  nProcessed_ = 0;
  nSelected_ = 0;

  // get input
  labelPhoton_     = iConfig.getParameter<edm::InputTag>("PhoInput");
  labelPFJet_      = iConfig.getParameter<edm::InputTag>("PFjetInput");
  minPtJet_        = iConfig.getParameter<double>("MinPtJet");
  minPtPhoton_     = iConfig.getParameter<double>("MinPtPhoton");

  // Register consumption
  tok_Photon_ = consumes<reco::PhotonCollection>(labelPhoton_);
  tok_PFJet_  = consumes<reco::PFJetCollection>(labelPFJet_);

}


AlCaGammaJetSelector::~AlCaGammaJetSelector()
{

   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called on each new Event  ------------
bool
AlCaGammaJetSelector::filter(edm::Event& iEvent, const edm::EventSetup& iSetup)
{
  nProcessed_++;

  // Access the collections from iEvent
  edm::Handle<reco::PhotonCollection> phoHandle;
  iEvent.getByToken(tok_Photon_,phoHandle);
  if (!phoHandle.isValid()) {
    edm::LogWarning("AlCaGammaJet") << "AlCaGammaJetProducer: Error! can't get the product " << labelPhoton_;
    return true; // do not filter
  }
  const reco::PhotonCollection photons = *(phoHandle.product());

  edm::Handle<reco::PFJetCollection> pfjetHandle;
  iEvent.getByToken(tok_PFJet_,pfjetHandle);
  if (!pfjetHandle.isValid()) {
    edm::LogWarning("AlCaGammaJet") << "AlCaGammaJetProducer: Error! can't get product " << labelPFJet_;
    return true; // do not filter
  }
  const reco::PFJetCollection pfjets = *(pfjetHandle.product());

  // Check the conditions for a good event
  if (photons.size()<1) return false;
  if (pfjets.size()<1) return false;

  // Check the requirement for minimum pT
  // Assume ordered collections, but make no assumption about the direction

  if ((photons.begin()->pt() < minPtPhoton_) &&
      (photons.back().pt() < minPtPhoton_)) {
    int found=0;
    for (reco::PhotonCollection::const_iterator it= photons.begin()+1;
	 !found && (it!=photons.end()); it++) {
      if (it->pt() >= minPtPhoton_) found=1;
    }
    if (!found) return false;
  }

  if ((pfjets.begin()->pt() < minPtJet_) && (pfjets.back().pt() < minPtJet_)) {
    int found=0;
    for (reco::PFJetCollection::const_iterator it= pfjets.begin()+1;
	 !found && (it!=pfjets.end()); it++) {
      if (it->pt() >= minPtJet_) found=1;
    }
    if (!found) return false;
  }

  //std::cout << "good event\n";
  nSelected_++;
  return true;

}

// ------------ method called once each job just before starting event loop  ------------
void AlCaGammaJetSelector::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void AlCaGammaJetSelector::endJob() {
  edm::LogWarning("AlCaGammaJet")
    << "AlCaGammaJetSelector: nProcessed=" << nProcessed_
    << ", nSelected=" << nSelected_;
}

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
AlCaGammaJetSelector::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.add<edm::InputTag>("PhoInput", edm::InputTag("gedPhotons"));
  desc.add<edm::InputTag>("PFjetInput", edm::InputTag("ak4PFJetsCHS"));
  desc.add<double>("MinPtJet", 10.0);
  desc.add<double>("MinPtPhoton", 10.0);
  descriptions.addDefault(desc);
}
//define this as a plug-in
DEFINE_FWK_MODULE(AlCaGammaJetSelector);
