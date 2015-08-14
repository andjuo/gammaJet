// -*- C++ -*-
//
// Package:    Calibration/HcalAlCaRecoProducers/AlCaGammaJetFilter
// Class:      AlCaGammaJetFilter
// 
/**\class AlCaGammaJetFilter AlCaGammaJetFilter.cc Calibration/HcalAlCaRecoProducers/AlCaGammaJetFilter/src/AlCaGammaJetFilter.cc

 Description: Enable filtering of good events based on the AlCaGammaJetProducer info

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Andrius Juodagalvis
//         Created:  Fri, 14 Aug 2015 07:09:55 GMT
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

//
// class declaration
//

class AlCaGammaJetFilter : public edm::EDFilter {
   public:
      explicit AlCaGammaJetFilter(const edm::ParameterSet&);
      ~AlCaGammaJetFilter();

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
  edm::EDGetTokenT<int> tok_goodEvent;
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
AlCaGammaJetFilter::AlCaGammaJetFilter(const edm::ParameterSet& iConfig)
{
  nProcessed_ = 0;
  nSelected_ = 0;

  tok_goodEvent = consumes<int>(edm::InputTag("GammaJetProd","goodEvent"));

}


AlCaGammaJetFilter::~AlCaGammaJetFilter()
{
 
   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called on each new Event  ------------
bool
AlCaGammaJetFilter::filter(edm::Event& iEvent, const edm::EventSetup& iSetup)
{
  nProcessed_++;

  edm::Handle<int> h_goodEvent;
  iEvent.getByToken(tok_goodEvent, h_goodEvent);
  if (!h_goodEvent.isValid()) {
    // unexpected problem? Do not filter
    edm::LogWarning("AlCaGammaJet")
      //throw cms::Exception("AlCaGammaJetFilter error")
      << "failed to get access to goodEvent flag";
    return true;
  }

  if ( *h_goodEvent.product() == 0 ) {
    //std::cout << "bad event\n";
    return false;
  }

  //std::cout << "good event\n";
  nSelected_++;
  return true;

}

// ------------ method called once each job just before starting event loop  ------------
void 
AlCaGammaJetFilter::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void 
AlCaGammaJetFilter::endJob() {
  edm::LogWarning("AlCaGammaJet")
    << "AlCaGammaJetFilter: nProcessed=" << nProcessed_
    << ", nSelected=" << nSelected_;
}

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
AlCaGammaJetFilter::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.setAllowAnything();
  descriptions.addDefault(desc);
}
//define this as a plug-in
DEFINE_FWK_MODULE(AlCaGammaJetFilter);
