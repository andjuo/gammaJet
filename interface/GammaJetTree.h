//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Sep  3 19:09:42 2014 by ROOT version 5.34/09
// from TTree GammaJetTree/
// found on file: MC_ak5FastCalo.root
//////////////////////////////////////////////////////////

#ifndef GammaJetTree_h
#define GammaJetTree_h

#define GenJetTree_checkBounds

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <iostream>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class GammaJetTree {
protected: // manually introduced constants
  typedef enum {
    __NobjTowMax=1500, __NobjTrackMax=10, __NobjJetMax=50,
    __NobjGenJetMax=50, __NobjPhotonMax=20, __NobjGenPhotonMax=20 }
                  GammaJetTreeSizes_t;
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          RunNumber;
   UInt_t          LumiBlockNumber;
   UInt_t          EventNumber;
   Bool_t          HltPhysicsDelcared;
   Bool_t          HltL1Jet6U;
   Bool_t          HltDiJetAve15U;
   Bool_t          HltDiJetAve30U;
   Bool_t          HltDiJetAve50U;
   Bool_t          HltDiJetAve70U;
   Bool_t          HltDiJetAve100U;
   Bool_t          HltDiJetAve140U;
   Bool_t          HltDiJetAve180U;
   Bool_t          HltDiJetAve300U;
   Bool_t          HltDiJetAve30;
   Bool_t          HltDiJetAve60;
   Bool_t          HltDiJetAve80;
   Bool_t          HltDiJetAve110;
   Bool_t          HltDiJetAve150;
   Bool_t          HltDiJetAve190;
   Bool_t          HltDiJetAve240;
   Bool_t          HltDiJetAve300;
   Bool_t          HltDiJetAve370;
   Bool_t          HltJet30;
   Bool_t          HltJet60;
   Bool_t          HltJet80;
   Bool_t          HltJet110;
   Bool_t          HltJet150;
   Bool_t          HltJet190;
   Bool_t          HltJet240;
   Bool_t          HltJet300;
   Bool_t          HltJet370;
   Bool_t          HltDiPFJetAve40;
   Int_t           PS_HltDiPFJetAve40;
   Bool_t          HltDiPFJetAve80;
   Int_t           PS_HltDiPFJetAve80;
   Bool_t          HltDiPFJetAve140;
   Int_t           PS_HltDiPFJetAve140;
   Bool_t          HltDiPFJetAve200;
   Int_t           PS_HltDiPFJetAve200;
   Bool_t          HltDiPFJetAve260;
   Int_t           PS_HltDiPFJetAve260;
   Bool_t          HltDiPFJetAve320;
   Int_t           PS_HltDiPFJetAve320;
   Bool_t          HltDiPFJetAve400;
   Int_t           PS_HltDiPFJetAve400;
   Bool_t          HltPFJet40;
   Int_t           PS_HltPFJet40;
   Bool_t          HltPFJet80;
   Int_t           PS_HltPFJet80;
   Bool_t          HltPFJet140;
   Int_t           PS_HltPFJet140;
   Bool_t          HltPFJet200;
   Int_t           PS_HltPFJet200;
   Bool_t          HltPFJet260;
   Int_t           PS_HltPFJet260;
   Bool_t          HltPFJet320;
   Int_t           PS_HltPFJet320;
   Bool_t          HltPFJet400;
   Int_t           PS_HltPFJet400;
   Bool_t          HltQuadJet40;
   Bool_t          HltQuadJet45DiJet40;
   Bool_t          HltQuadJet50DiJet40;
   Bool_t          HltQuadJet50DiJet40L1;
   Bool_t          HltSixJet45;
   Bool_t          HltSixJet45L1;
   Bool_t          HltQuadJet50;
   Bool_t          HltQuadJet60DiJet20;
   Bool_t          HltIsoMu24Eta2p1;
   Bool_t          HltIsoMu24;
   Bool_t          HltMu40Eta2p1;
   Bool_t          HltMu40;
   Bool_t          HltMu15Eta2p1TriCentralJet402020;
   Bool_t          HltMu17Eta2p1TriCentralPFNoPUJet453525;
   Bool_t          HltMu17Eta2p1TriCentralPFNoPUJet30;
   Bool_t          HltMu17Eta2p1TriCentralPFNoPUJet303020;
   Bool_t          HltMu24DiCentralPFJet3025;
   Bool_t          HltMu24Eta2p1;
   Bool_t          HltMu24;
   Bool_t          HltMu30Eta2p1;
   Bool_t          HltMu30;
   Bool_t          HltIsoMu17Eta2p1TriCentralPFNoPUJet303020;
   Bool_t          HltIsoMu17Eta2p1TriCentralPFNoPUJet30;
   UChar_t         EcalDeadCellBoundaryEnergyFilter;
   UChar_t         EcalDeadCellTriggerPrimitiveFilter;
   Int_t           VtxN;
   Int_t           VtxNTracks;
   Float_t         VtxPosX;
   Float_t         VtxPosY;
   Float_t         VtxPosZ;
   Float_t         VtxNormalizedChi2;
   Float_t         VtxNDof;
   Bool_t          VtxIsFake;
   Int_t           PUMCNumVtx;
   Int_t           PUMCNumVtxOOT;
   Float_t         PUMCNumTruth;
   Float_t         PUMCHighestSumPt;
   Float_t         Rho;
   Float_t         Rho25;

   Int_t           NobjTow;
   Int_t           TowId[__NobjTowMax];   //[NobjTow]
   Int_t           TowId_phi[__NobjTowMax];   //[NobjTow]
   Int_t           TowId_eta[__NobjTowMax];   //[NobjTow]
   Float_t         TowEt[__NobjTowMax];   //[NobjTow]
   Float_t         TowEta[__NobjTowMax];   //[NobjTow]
   Float_t         TowPhi[__NobjTowMax];   //[NobjTow]
   Float_t         TowE[__NobjTowMax];   //[NobjTow]
   Float_t         TowEm[__NobjTowMax];   //[NobjTow]
   Float_t         TowHad[__NobjTowMax];   //[NobjTow]
   Float_t         TowOE[__NobjTowMax];   //[NobjTow]
   Int_t           Tow_jetidx[__NobjTowMax];   //[NobjTow]
   UInt_t          TowNumBadEcalCells[__NobjTowMax];   //[NobjTow]
   UInt_t          TowNumBadHcalCells[__NobjTowMax];   //[NobjTow]
   UInt_t          TowNumProblematicEcalCells[__NobjTowMax];   //[NobjTow]
   UInt_t          TowNumProblematicHcalCells[__NobjTowMax];   //[NobjTow]
   UInt_t          TowNumRecoveredEcalCells[__NobjTowMax];   //[NobjTow]
   UInt_t          TowNumRecoveredHcalCells[__NobjTowMax];   //[NobjTow]

   Int_t           NobjTrack;
   Int_t           TrackTowId[__NobjTrackMax];   //[NobjTrack]
   Int_t           TrackTowIdPhi[__NobjTrackMax];   //[NobjTrack]
   Int_t           TrackTowIdEta[__NobjTrackMax];   //[NobjTrack]
   Int_t           TrackId[__NobjTrackMax];   //[NobjTrack]
   Int_t           TrackNHits[__NobjTrackMax];   //[NobjTrack]
   Bool_t          TrackQualityL[__NobjTrackMax];   //[NobjTrack]
   Bool_t          TrackQualityT[__NobjTrackMax];   //[NobjTrack]
   Bool_t          TrackQualityHP[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackChi2[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackPt[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackEta[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackPhi[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackP[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackDR[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackPhiOut[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackEtaOut[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackDROut[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackEMC1[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackEMC3[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackEMC5[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackHAC1[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackHAC3[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackHAC5[__NobjTrackMax];   //[NobjTrack]
   Int_t           Track_jetidx[__NobjTrackMax];   //[NobjTrack]
   Float_t         MuDR[__NobjTrackMax];   //[NobjTrack]
   Float_t         MuDE[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackD0[__NobjTrackMax];   //[NobjTrack]
   Float_t         TrackZ0[__NobjTrackMax];   //[NobjTrack]

   Int_t           NobjJet;
   Float_t         JetPt[__NobjJetMax];   //[NobjJet]
   Float_t         JetMt[__NobjJetMax];   //[NobjJet]
   Float_t         JetPhi[__NobjJetMax];   //[NobjJet]
   Float_t         JetEta[__NobjJetMax];   //[NobjJet]
   Float_t         JetEt[__NobjJetMax];   //[NobjJet]
   Float_t         JetE[__NobjJetMax];   //[NobjJet]
   Int_t           JetN90Hits[__NobjJetMax];   //[NobjJet]
   Float_t         JetHad[__NobjJetMax];   //[NobjJet]
   Float_t         JetEMF[__NobjJetMax];   //[NobjJet]
   Float_t         JetFHPD[__NobjJetMax];   //[NobjJet]
   Float_t         JetFRBX[__NobjJetMax];   //[NobjJet]
   Float_t         JetFChargedHadrons[__NobjJetMax];   //[NobjJet]
   Float_t         JetFNeutralHadrons[__NobjJetMax];   //[NobjJet]
   Float_t         JetFPhotons[__NobjJetMax];   //[NobjJet]
   Float_t         JetFElectrons[__NobjJetMax];   //[NobjJet]
   Float_t         JetFMuons[__NobjJetMax];   //[NobjJet]
   Float_t         JetFHFEm[__NobjJetMax];   //[NobjJet]
   Float_t         JetFHFHad[__NobjJetMax];   //[NobjJet]
   Float_t         JetHOEfrac[__NobjJetMax];   //[NobjJet]
   Float_t         JetLeadingChargedConstPt[__NobjJetMax];   //[NobjJet]
   Bool_t          JetIDLoose[__NobjJetMax];   //[NobjJet]
   Bool_t          JetIDTight[__NobjJetMax];   //[NobjJet]
   Float_t         JetEtWeightedSigmaPhi[__NobjJetMax];   //[NobjJet]
   Float_t         JetEtWeightedSigmaEta[__NobjJetMax];   //[NobjJet]
   Float_t         JetArea[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrZSP[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrL1[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrL2[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrL3[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrJPT[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrL2L3[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrL2L3JPT[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrL4JW[__NobjJetMax];   //[NobjJet]
   Float_t         JetCorrUncert[__NobjJetMax];   //[NobjJet]
   Int_t           JetIEta[__NobjJetMax];   //[NobjJet]
   Int_t           JetIPhi[__NobjJetMax];   //[NobjJet]
   Int_t           JetNChargedHadrons[__NobjJetMax];   //[NobjJet]
   Int_t           JetNNeutralHadrons[__NobjJetMax];   //[NobjJet]
   Int_t           JetNChargedPFConstituents[__NobjJetMax];   //[NobjJet]
   Int_t           JetNPFConstituents[__NobjJetMax];   //[NobjJet]
   Float_t         JetBtag[__NobjJetMax];   //[NobjJet]
   Float_t         JetGenJetDeltaR[__NobjJetMax];   //[NobjJet]
   Float_t         GenJetPt[__NobjJetMax];   //[NobjJet]
   Float_t         GenJetPhi[__NobjJetMax];   //[NobjJet]
   Float_t         GenJetEta[__NobjJetMax];   //[NobjJet]
   Float_t         GenJetEt[__NobjJetMax];   //[NobjJet]
   Float_t         GenJetE[__NobjJetMax];   //[NobjJet]
   Int_t           NobjGenJet;
   Float_t         GenJetColPt[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColPhi[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColEta[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColEt[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColE[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColEmE[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColHadE[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColInvE[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColAuxE[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenJetColJetDeltaR[__NobjGenJetMax];   //[NobjGenJet]
   Int_t           GenJetColJetIdx[__NobjGenJetMax];   //[NobjGenJet]
   Float_t         GenPartPt_algo[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartPhi_algo[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartEta_algo[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartEt_algo[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartE_algo[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartM_algo[__NobjJetMax];   //[NobjJet]
   Int_t           GenPartId_algo[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartPt_phys[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartPhi_phys[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartEta_phys[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartEt_phys[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartE_phys[__NobjJetMax];   //[NobjJet]
   Float_t         GenPartM_phys[__NobjJetMax];   //[NobjJet]
   Int_t           GenPartId_phys[__NobjJetMax];   //[NobjJet]
   Float_t         GenEvtScale;
   Float_t         Met;
   Float_t         MetPhi;
   Float_t         MetSum;
   Float_t         Met_T1;
   Float_t         MetPhi_T1;
   Float_t         MetSum_T1;
   Float_t         Met_T2;
   Float_t         MetPhi_T2;
   Float_t         MetSum_T2;
   Float_t         Met_T1R;
   Float_t         MetPhi_T1R;
   Float_t         MetSum_T1R;
   Float_t         Met_T2R;
   Float_t         MetPhi_T2R;
   Float_t         MetSum_T2R;
   Float_t         Weight;
   Float_t         CrossSection;
   Bool_t          HltPhoton20iso;
   Bool_t          HltPhoton20calo;
   Bool_t          HltPhoton30iso;
   Bool_t          HltPhoton30calo;
   Bool_t          HltPhoton30R9;
   Bool_t          HltPhoton30;
   Bool_t          HltPhoton50iso;
   Bool_t          HltPhoton50calo;
   Bool_t          HltPhoton75iso;
   Bool_t          HltPhoton75calo;
   Bool_t          HltPhoton90iso;
   Bool_t          HltPhoton90calo;
   Bool_t          HltPhoton135;
   Bool_t          HltPhoton150;
   Bool_t          HltPhoton160;
   Int_t           NobjPhoton;
   Float_t         PhotonPt[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonPhi[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonEta[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonE[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonIsoECAL04[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonIsoHCAL04[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonIsoTrk04[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonSigmaIetaIeta[__NobjPhotonMax];   //[NobjPhoton]
   Float_t         PhotonHadronicOverEM[__NobjPhotonMax];   //[NobjPhoton]
   Bool_t          PhotonHasPixelSeed[__NobjPhotonMax];   //[NobjPhoton]
   Bool_t          PhotonIDLoose[__NobjPhotonMax];   //[NobjPhoton]
   Bool_t          PhotonIDTight[__NobjPhotonMax];   //[NobjPhoton]
   Int_t           NobjGenPhoton;
   Float_t         GenPhotonPt[__NobjGenPhotonMax];   //[NobjGenPhoton]
   Float_t         GenPhotonPhi[__NobjGenPhotonMax];   //[NobjGenPhoton]
   Float_t         GenPhotonEta[__NobjGenPhotonMax];   //[NobjGenPhoton]
   Float_t         GenPhotonE[__NobjGenPhotonMax];   //[NobjGenPhoton]

   // List of branches
   TBranch        *b_RunNumber;   //!
   TBranch        *b_LumiBlockNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_HltPhysicsDelcared;   //!
   TBranch        *b_HltL1Jet6U;   //!
   TBranch        *b_HltDiJetAve15U;   //!
   TBranch        *b_HltDiJetAve30U;   //!
   TBranch        *b_HltDiJetAve50U;   //!
   TBranch        *b_HltDiJetAve70U;   //!
   TBranch        *b_HltDiJetAve100U;   //!
   TBranch        *b_HltDiJetAve140U;   //!
   TBranch        *b_HltDiJetAve180U;   //!
   TBranch        *b_HltDiJetAve300U;   //!
   TBranch        *b_HltDiJetAve30;   //!
   TBranch        *b_HltDiJetAve60;   //!
   TBranch        *b_HltDiJetAve80;   //!
   TBranch        *b_HltDiJetAve110;   //!
   TBranch        *b_HltDiJetAve150;   //!
   TBranch        *b_HltDiJetAve190;   //!
   TBranch        *b_HltDiJetAve240;   //!
   TBranch        *b_HltDiJetAve300;   //!
   TBranch        *b_HltDiJetAve370;   //!
   TBranch        *b_HltJet30;   //!
   TBranch        *b_HltJet60;   //!
   TBranch        *b_HltJet80;   //!
   TBranch        *b_HltJet110;   //!
   TBranch        *b_HltJet150;   //!
   TBranch        *b_HltJet190;   //!
   TBranch        *b_HltJet240;   //!
   TBranch        *b_HltJet300;   //!
   TBranch        *b_HltJet370;   //!
   TBranch        *b_HltDiPFJetAve40;   //!
   TBranch        *b_PS_HltDiPFJetAve40;   //!
   TBranch        *b_HltDiPFJetAve80;   //!
   TBranch        *b_PS_HltDiPFJetAve80;   //!
   TBranch        *b_HltDiPFJetAve140;   //!
   TBranch        *b_PS_HltDiPFJetAve140;   //!
   TBranch        *b_HltDiPFJetAve200;   //!
   TBranch        *b_PS_HltDiPFJetAve200;   //!
   TBranch        *b_HltDiPFJetAve260;   //!
   TBranch        *b_PS_HltDiPFJetAve260;   //!
   TBranch        *b_HltDiPFJetAve320;   //!
   TBranch        *b_PS_HltDiPFJetAve320;   //!
   TBranch        *b_HltDiPFJetAve400;   //!
   TBranch        *b_PS_HltDiPFJetAve400;   //!
   TBranch        *b_HltPFJet40;   //!
   TBranch        *b_PS_HltPFJet40;   //!
   TBranch        *b_HltPFJet80;   //!
   TBranch        *b_PS_HltPFJet80;   //!
   TBranch        *b_HltPFJet140;   //!
   TBranch        *b_PS_HltPFJet140;   //!
   TBranch        *b_HltPFJet200;   //!
   TBranch        *b_PS_HltPFJet200;   //!
   TBranch        *b_HltPFJet260;   //!
   TBranch        *b_PS_HltPFJet260;   //!
   TBranch        *b_HltPFJet320;   //!
   TBranch        *b_PS_HltPFJet320;   //!
   TBranch        *b_HltPFJet400;   //!
   TBranch        *b_PS_HltPFJet400;   //!
   TBranch        *b_HltQuadJet40;   //!
   TBranch        *b_HltQuadJet45DiJet40;   //!
   TBranch        *b_HltQuadJet50DiJet40;   //!
   TBranch        *b_HltQuadJet50DiJet40L1;   //!
   TBranch        *b_HltSixJet45;   //!
   TBranch        *b_HltSixJet45L1;   //!
   TBranch        *b_HltQuadJet50;   //!
   TBranch        *b_HltQuadJet60DiJet20;   //!
   TBranch        *b_HltIsoMu24Eta2p1;   //!
   TBranch        *b_HltIsoMu24;   //!
   TBranch        *b_HltMu40Eta2p1;   //!
   TBranch        *b_HltMu40;   //!
   TBranch        *b_HltMu15Eta2p1TriCentralJet402020;   //!
   TBranch        *b_HltMu17Eta2p1TriCentralPFNoPUJet453525;   //!
   TBranch        *b_HltMu17Eta2p1TriCentralPFNoPUJet30;   //!
   TBranch        *b_HltMu17Eta2p1TriCentralPFNoPUJet303020;   //!
   TBranch        *b_HltMu24DiCentralPFJet3025;   //!
   TBranch        *b_HltMu24Eta2p1;   //!
   TBranch        *b_HltMu24;   //!
   TBranch        *b_HltMu30Eta2p1;   //!
   TBranch        *b_HltMu30;   //!
   TBranch        *b_HltIsoMu17Eta2p1TriCentralPFNoPUJet303020;   //!
   TBranch        *b_HltIsoMu17Eta2p1TriCentralPFNoPUJet30;   //!
   TBranch        *b_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_VtxN;   //!
   TBranch        *b_VtxNTracks;   //!
   TBranch        *b_VtxPosX;   //!
   TBranch        *b_VtxPosY;   //!
   TBranch        *b_VtxPosZ;   //!
   TBranch        *b_VtxNormalizedChi2;   //!
   TBranch        *b_VtxNDof;   //!
   TBranch        *b_VtxIsFake;   //!
   TBranch        *b_PUMCNumVtx;   //!
   TBranch        *b_PUMCNumVtxOOT;   //!
   TBranch        *b_PUMCNumTruth;   //!
   TBranch        *b_PUMCHighestSumPt;   //!
   TBranch        *b_Rho;   //!
   TBranch        *b_Rho25;   //!
   TBranch        *b_NobjTow;   //!
   TBranch        *b_TowId;   //!
   TBranch        *b_TowId_phi;   //!
   TBranch        *b_TowId_eta;   //!
   TBranch        *b_TowEt;   //!
   TBranch        *b_TowEta;   //!
   TBranch        *b_TowPhi;   //!
   TBranch        *b_TowE;   //!
   TBranch        *b_TowEm;   //!
   TBranch        *b_TowHad;   //!
   TBranch        *b_TowOE;   //!
   TBranch        *b_Tow_jetidx;   //!
   TBranch        *b_TowNumBadEcalCells;   //!
   TBranch        *b_TowNumBadHcalCells;   //!
   TBranch        *b_TowNumProblematicEcalCells;   //!
   TBranch        *b_TowNumProblematicHcalCells;   //!
   TBranch        *b_TowNumRecoveredEcalCells;   //!
   TBranch        *b_TowNumRecoveredHcalCells;   //!
   TBranch        *b_NobjTrack;   //!
   TBranch        *b_TrackTowId;   //!
   TBranch        *b_TrackTowIdPhi;   //!
   TBranch        *b_TrackTowIdEta;   //!
   TBranch        *b_TrackId;   //!
   TBranch        *b_TrackNHits;   //!
   TBranch        *b_TrackQualityL;   //!
   TBranch        *b_TrackQualityT;   //!
   TBranch        *b_TrackQualityHP;   //!
   TBranch        *b_TrackChi2;   //!
   TBranch        *b_TrackPt;   //!
   TBranch        *b_TrackEta;   //!
   TBranch        *b_TrackPhi;   //!
   TBranch        *b_TrackP;   //!
   TBranch        *b_TrackDR;   //!
   TBranch        *b_TrackPhiOut;   //!
   TBranch        *b_TrackEtaOut;   //!
   TBranch        *b_TrackDROut;   //!
   TBranch        *b_TrackEMC1;   //!
   TBranch        *b_TrackEMC3;   //!
   TBranch        *b_TrackEMC5;   //!
   TBranch        *b_TrackHAC1;   //!
   TBranch        *b_TrackHAC3;   //!
   TBranch        *b_TrackHAC5;   //!
   TBranch        *b_Track_jetidx;   //!
   TBranch        *b_MuDR;   //!
   TBranch        *b_MuDE;   //!
   TBranch        *b_TrackD0;   //!
   TBranch        *b_TrackZ0;   //!
   TBranch        *b_NobjJet;   //!
   TBranch        *b_JetPt;   //!
   TBranch        *b_JetMt;   //!
   TBranch        *b_JetPhi;   //!
   TBranch        *b_JetEta;   //!
   TBranch        *b_JetEt;   //!
   TBranch        *b_JetE;   //!
   TBranch        *b_JetN90Hits;   //!
   TBranch        *b_JetHad;   //!
   TBranch        *b_JetEMF;   //!
   TBranch        *b_JetFHPD;   //!
   TBranch        *b_JetFRBX;   //!
   TBranch        *b_JetFChargedHadrons;   //!
   TBranch        *b_JetFNeutralHadrons;   //!
   TBranch        *b_JetFPhotons;   //!
   TBranch        *b_JetFElectrons;   //!
   TBranch        *b_JetFMuons;   //!
   TBranch        *b_JetFHFEm;   //!
   TBranch        *b_JetFHFHad;   //!
   TBranch        *b_JetHOEfrac;   //!
   TBranch        *b_JetLeadingChargedConstPt;   //!
   TBranch        *b_JetIDLoose;   //!
   TBranch        *b_JetIDTight;   //!
   TBranch        *b_JetEtWeightedSigmaPhi;   //!
   TBranch        *b_JetEtWeightedSigmaEta;   //!
   TBranch        *b_JetArea;   //!
   TBranch        *b_JetCorrZSP;   //!
   TBranch        *b_JetCorrL1;   //!
   TBranch        *b_JetCorrL2;   //!
   TBranch        *b_JetCorrL3;   //!
   TBranch        *b_JetCorrJPT;   //!
   TBranch        *b_JetCorrL2L3;   //!
   TBranch        *b_JetCorrL2L3JPT;   //!
   TBranch        *b_JetCorrL4JW;   //!
   TBranch        *b_JetCorrUncert;   //!
   TBranch        *b_JetIEta;   //!
   TBranch        *b_JetIPhi;   //!
   TBranch        *b_JetNChargedHadrons;   //!
   TBranch        *b_JetNNeutralHadrons;   //!
   TBranch        *b_JetNChargedPFConstituents;   //!
   TBranch        *b_JetNPFConstituents;   //!
   TBranch        *b_JetBtag;   //!
   TBranch        *b_JetGenJetDeltaR;   //!
   TBranch        *b_GenJetPt;   //!
   TBranch        *b_GenJetPhi;   //!
   TBranch        *b_GenJetEta;   //!
   TBranch        *b_GenJetEt;   //!
   TBranch        *b_GenJetE;   //!
   TBranch        *b_NobjGenJet;   //!
   TBranch        *b_GenJetColPt;   //!
   TBranch        *b_GenJetColPhi;   //!
   TBranch        *b_GenJetColEta;   //!
   TBranch        *b_GenJetColEt;   //!
   TBranch        *b_GenJetColE;   //!
   TBranch        *b_GenJetColEmE;   //!
   TBranch        *b_GenJetColHadE;   //!
   TBranch        *b_GenJetColInvE;   //!
   TBranch        *b_GenJetColAuxE;   //!
   TBranch        *b_GenJetColJetDeltaR;   //!
   TBranch        *b_GenJetColJetIdx;   //!
   TBranch        *b_GenPartPt_algo;   //!
   TBranch        *b_GenPartPhi_algo;   //!
   TBranch        *b_GenPartEta_algo;   //!
   TBranch        *b_GenPartEt_algo;   //!
   TBranch        *b_GenPartE_algo;   //!
   TBranch        *b_GenPartM_algo;   //!
   TBranch        *b_GenPartId_algo;   //!
   TBranch        *b_GenPartPt_phys;   //!
   TBranch        *b_GenPartPhi_phys;   //!
   TBranch        *b_GenPartEta_phys;   //!
   TBranch        *b_GenPartEt_phys;   //!
   TBranch        *b_GenPartE_phys;   //!
   TBranch        *b_GenPartM_phys;   //!
   TBranch        *b_GenPartId_phys;   //!
   TBranch        *b_GenEvtScale;   //!
   TBranch        *b_Met;   //!
   TBranch        *b_MetPhi;   //!
   TBranch        *b_MetSum;   //!
   TBranch        *b_Met_T1;   //!
   TBranch        *b_MetPhi_T1;   //!
   TBranch        *b_MetSum_T1;   //!
   TBranch        *b_Met_T2;   //!
   TBranch        *b_MetPhi_T2;   //!
   TBranch        *b_MetSum_T2;   //!
   TBranch        *b_Met_T1R;   //!
   TBranch        *b_MetPhi_T1R;   //!
   TBranch        *b_MetSum_T1R;   //!
   TBranch        *b_Met_T2R;   //!
   TBranch        *b_MetPhi_T2R;   //!
   TBranch        *b_MetSum_T2R;   //!
   TBranch        *b_Weight;   //!
   TBranch        *b_CrossSection;   //!
   TBranch        *b_HltPhoton20iso;   //!
   TBranch        *b_HltPhoton20calo;   //!
   TBranch        *b_HltPhoton30iso;   //!
   TBranch        *b_HltPhoton30calo;   //!
   TBranch        *b_HltPhoton30R9;   //!
   TBranch        *b_HltPhoton30;   //!
   TBranch        *b_HltPhoton50iso;   //!
   TBranch        *b_HltPhoton50calo;   //!
   TBranch        *b_HltPhoton75iso;   //!
   TBranch        *b_HltPhoton75calo;   //!
   TBranch        *b_HltPhoton90iso;   //!
   TBranch        *b_HltPhoton90calo;   //!
   TBranch        *b_HltPhoton135;   //!
   TBranch        *b_HltPhoton150;   //!
   TBranch        *b_HltPhoton160;   //!
   TBranch        *b_NobjPhoton;   //!
   TBranch        *b_PhotonPt;   //!
   TBranch        *b_PhotonPhi;   //!
   TBranch        *b_PhotonEta;   //!
   TBranch        *b_PhotonE;   //!
   TBranch        *b_PhotonIsoECAL04;   //!
   TBranch        *b_PhotonIsoHCAL04;   //!
   TBranch        *b_PhotonIsoTrk04;   //!
   TBranch        *b_PhotonSigmaIetaIeta;   //!
   TBranch        *b_PhotonHadronicOverEM;   //!
   TBranch        *b_PhotonHasPixelSeed;   //!
   TBranch        *b_PhotonIDLoose;   //!
   TBranch        *b_PhotonIDTight;   //!
   TBranch        *b_NobjGenPhoton;   //!
   TBranch        *b_GenPhotonPt;   //!
   TBranch        *b_GenPhotonPhi;   //!
   TBranch        *b_GenPhotonEta;   //!
   TBranch        *b_GenPhotonE;   //!

   GammaJetTree(TTree *tree=0);
   virtual ~GammaJetTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef GammaJetTree_cxx
GammaJetTree::GammaJetTree(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
  if (tree) ;
/* // manually commented out
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("MC_ak5FastCalo.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("MC_ak5FastCalo.root");
      }
      f->GetObject("GammaJetTree",tree);

   }
   Init(tree);
*/
}

GammaJetTree::~GammaJetTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t GammaJetTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   Int_t count= fChain->GetEntry(entry);
#ifdef GenJetTree_checkBounds
   if (count) {
     if (NobjTow > __NobjTowMax) {
       std::cout << "entry=" << entry << ", NobjTow=" << NobjTow
		 << ", allowed=" << __NobjTowMax << std::endl;
       count=0;
     }
     if (NobjTrack > __NobjTrackMax) {
       std::cout << "entry=" << entry << ", NobjTrack=" << NobjTrack
		 << ", allowed=" << __NobjTrackMax << std::endl;
       count=0;
     }
     if (NobjJet > __NobjJetMax) {
       std::cout << "entry=" << entry << ", NobjJet=" << NobjJet
		 << ", allowed=" << __NobjJetMax << std::endl;
       count=0;
     }
     if (NobjGenJet > __NobjGenJetMax) {
       std::cout << "entry=" << entry << ", NobjGenJet=" << NobjGenJet
		 << ", allowed=" << __NobjGenJetMax << std::endl;
       count=0;
     }
     if (NobjPhoton > __NobjPhotonMax) {
       std::cout << "entry=" << entry << ", NobjPhoton=" << NobjPhoton
		 << ", allowed=" << __NobjPhotonMax << std::endl;
       count=0;
     }
     if (NobjGenPhoton > __NobjGenPhotonMax) {
       std::cout << "entry=" << entry << ", NobjGenPhoton=" << NobjGenPhoton
		 << ", allowed=" << __NobjGenPhotonMax << std::endl;
       count=0;
     }
     if (!count) std::cout << "\n\tBound error detected" << std::endl;
   }
#endif
   return count;
}

Long64_t GammaJetTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void GammaJetTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
  fChain = NULL; // manually added
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("LumiBlockNumber", &LumiBlockNumber, &b_LumiBlockNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("HltPhysicsDelcared", &HltPhysicsDelcared, &b_HltPhysicsDelcared);
   fChain->SetBranchAddress("HltL1Jet6U", &HltL1Jet6U, &b_HltL1Jet6U);
   fChain->SetBranchAddress("HltDiJetAve15U", &HltDiJetAve15U, &b_HltDiJetAve15U);
   fChain->SetBranchAddress("HltDiJetAve30U", &HltDiJetAve30U, &b_HltDiJetAve30U);
   fChain->SetBranchAddress("HltDiJetAve50U", &HltDiJetAve50U, &b_HltDiJetAve50U);
   fChain->SetBranchAddress("HltDiJetAve70U", &HltDiJetAve70U, &b_HltDiJetAve70U);
   fChain->SetBranchAddress("HltDiJetAve100U", &HltDiJetAve100U, &b_HltDiJetAve100U);
   fChain->SetBranchAddress("HltDiJetAve140U", &HltDiJetAve140U, &b_HltDiJetAve140U);
   fChain->SetBranchAddress("HltDiJetAve180U", &HltDiJetAve180U, &b_HltDiJetAve180U);
   fChain->SetBranchAddress("HltDiJetAve300U", &HltDiJetAve300U, &b_HltDiJetAve300U);
   fChain->SetBranchAddress("HltDiJetAve30", &HltDiJetAve30, &b_HltDiJetAve30);
   fChain->SetBranchAddress("HltDiJetAve60", &HltDiJetAve60, &b_HltDiJetAve60);
   fChain->SetBranchAddress("HltDiJetAve80", &HltDiJetAve80, &b_HltDiJetAve80);
   fChain->SetBranchAddress("HltDiJetAve110", &HltDiJetAve110, &b_HltDiJetAve110);
   fChain->SetBranchAddress("HltDiJetAve150", &HltDiJetAve150, &b_HltDiJetAve150);
   fChain->SetBranchAddress("HltDiJetAve190", &HltDiJetAve190, &b_HltDiJetAve190);
   fChain->SetBranchAddress("HltDiJetAve240", &HltDiJetAve240, &b_HltDiJetAve240);
   fChain->SetBranchAddress("HltDiJetAve300", &HltDiJetAve300, &b_HltDiJetAve300);
   fChain->SetBranchAddress("HltDiJetAve370", &HltDiJetAve370, &b_HltDiJetAve370);
   fChain->SetBranchAddress("HltJet30", &HltJet30, &b_HltJet30);
   fChain->SetBranchAddress("HltJet60", &HltJet60, &b_HltJet60);
   fChain->SetBranchAddress("HltJet80", &HltJet80, &b_HltJet80);
   fChain->SetBranchAddress("HltJet110", &HltJet110, &b_HltJet110);
   fChain->SetBranchAddress("HltJet150", &HltJet150, &b_HltJet150);
   fChain->SetBranchAddress("HltJet190", &HltJet190, &b_HltJet190);
   fChain->SetBranchAddress("HltJet240", &HltJet240, &b_HltJet240);
   fChain->SetBranchAddress("HltJet300", &HltJet300, &b_HltJet300);
   fChain->SetBranchAddress("HltJet370", &HltJet370, &b_HltJet370);
   fChain->SetBranchAddress("HltDiPFJetAve40", &HltDiPFJetAve40, &b_HltDiPFJetAve40);
   fChain->SetBranchAddress("PS_HltDiPFJetAve40", &PS_HltDiPFJetAve40, &b_PS_HltDiPFJetAve40);
   fChain->SetBranchAddress("HltDiPFJetAve80", &HltDiPFJetAve80, &b_HltDiPFJetAve80);
   fChain->SetBranchAddress("PS_HltDiPFJetAve80", &PS_HltDiPFJetAve80, &b_PS_HltDiPFJetAve80);
   fChain->SetBranchAddress("HltDiPFJetAve140", &HltDiPFJetAve140, &b_HltDiPFJetAve140);
   fChain->SetBranchAddress("PS_HltDiPFJetAve140", &PS_HltDiPFJetAve140, &b_PS_HltDiPFJetAve140);
   fChain->SetBranchAddress("HltDiPFJetAve200", &HltDiPFJetAve200, &b_HltDiPFJetAve200);
   fChain->SetBranchAddress("PS_HltDiPFJetAve200", &PS_HltDiPFJetAve200, &b_PS_HltDiPFJetAve200);
   fChain->SetBranchAddress("HltDiPFJetAve260", &HltDiPFJetAve260, &b_HltDiPFJetAve260);
   fChain->SetBranchAddress("PS_HltDiPFJetAve260", &PS_HltDiPFJetAve260, &b_PS_HltDiPFJetAve260);
   fChain->SetBranchAddress("HltDiPFJetAve320", &HltDiPFJetAve320, &b_HltDiPFJetAve320);
   fChain->SetBranchAddress("PS_HltDiPFJetAve320", &PS_HltDiPFJetAve320, &b_PS_HltDiPFJetAve320);
   fChain->SetBranchAddress("HltDiPFJetAve400", &HltDiPFJetAve400, &b_HltDiPFJetAve400);
   fChain->SetBranchAddress("PS_HltDiPFJetAve400", &PS_HltDiPFJetAve400, &b_PS_HltDiPFJetAve400);
   fChain->SetBranchAddress("HltPFJet40", &HltPFJet40, &b_HltPFJet40);
   fChain->SetBranchAddress("PS_HltPFJet40", &PS_HltPFJet40, &b_PS_HltPFJet40);
   fChain->SetBranchAddress("HltPFJet80", &HltPFJet80, &b_HltPFJet80);
   fChain->SetBranchAddress("PS_HltPFJet80", &PS_HltPFJet80, &b_PS_HltPFJet80);
   fChain->SetBranchAddress("HltPFJet140", &HltPFJet140, &b_HltPFJet140);
   fChain->SetBranchAddress("PS_HltPFJet140", &PS_HltPFJet140, &b_PS_HltPFJet140);
   fChain->SetBranchAddress("HltPFJet200", &HltPFJet200, &b_HltPFJet200);
   fChain->SetBranchAddress("PS_HltPFJet200", &PS_HltPFJet200, &b_PS_HltPFJet200);
   fChain->SetBranchAddress("HltPFJet260", &HltPFJet260, &b_HltPFJet260);
   fChain->SetBranchAddress("PS_HltPFJet260", &PS_HltPFJet260, &b_PS_HltPFJet260);
   fChain->SetBranchAddress("HltPFJet320", &HltPFJet320, &b_HltPFJet320);
   fChain->SetBranchAddress("PS_HltPFJet320", &PS_HltPFJet320, &b_PS_HltPFJet320);
   fChain->SetBranchAddress("HltPFJet400", &HltPFJet400, &b_HltPFJet400);
   fChain->SetBranchAddress("PS_HltPFJet400", &PS_HltPFJet400, &b_PS_HltPFJet400);
   fChain->SetBranchAddress("HltQuadJet40", &HltQuadJet40, &b_HltQuadJet40);
   fChain->SetBranchAddress("HltQuadJet45DiJet40", &HltQuadJet45DiJet40, &b_HltQuadJet45DiJet40);
   fChain->SetBranchAddress("HltQuadJet50DiJet40", &HltQuadJet50DiJet40, &b_HltQuadJet50DiJet40);
   fChain->SetBranchAddress("HltQuadJet50DiJet40L1", &HltQuadJet50DiJet40L1, &b_HltQuadJet50DiJet40L1);
   fChain->SetBranchAddress("HltSixJet45", &HltSixJet45, &b_HltSixJet45);
   fChain->SetBranchAddress("HltSixJet45L1", &HltSixJet45L1, &b_HltSixJet45L1);
   fChain->SetBranchAddress("HltQuadJet50", &HltQuadJet50, &b_HltQuadJet50);
//    fChain->SetBranchAddress("HltSixJet45", &HltSixJet45, &b_HltSixJet45);
   fChain->SetBranchAddress("HltQuadJet60DiJet20", &HltQuadJet60DiJet20, &b_HltQuadJet60DiJet20);
   fChain->SetBranchAddress("HltIsoMu24Eta2p1", &HltIsoMu24Eta2p1, &b_HltIsoMu24Eta2p1);
   fChain->SetBranchAddress("HltIsoMu24", &HltIsoMu24, &b_HltIsoMu24);
   fChain->SetBranchAddress("HltMu40Eta2p1", &HltMu40Eta2p1, &b_HltMu40Eta2p1);
   fChain->SetBranchAddress("HltMu40", &HltMu40, &b_HltMu40);
   fChain->SetBranchAddress("HltMu15Eta2p1TriCentralJet402020", &HltMu15Eta2p1TriCentralJet402020, &b_HltMu15Eta2p1TriCentralJet402020);
   fChain->SetBranchAddress("HltMu17Eta2p1TriCentralPFNoPUJet453525", &HltMu17Eta2p1TriCentralPFNoPUJet453525, &b_HltMu17Eta2p1TriCentralPFNoPUJet453525);
   fChain->SetBranchAddress("HltMu17Eta2p1TriCentralPFNoPUJet30", &HltMu17Eta2p1TriCentralPFNoPUJet30, &b_HltMu17Eta2p1TriCentralPFNoPUJet30);
   fChain->SetBranchAddress("HltMu17Eta2p1TriCentralPFNoPUJet303020", &HltMu17Eta2p1TriCentralPFNoPUJet303020, &b_HltMu17Eta2p1TriCentralPFNoPUJet303020);
   fChain->SetBranchAddress("HltMu24DiCentralPFJet3025", &HltMu24DiCentralPFJet3025, &b_HltMu24DiCentralPFJet3025);
   fChain->SetBranchAddress("HltMu24Eta2p1", &HltMu24Eta2p1, &b_HltMu24Eta2p1);
   fChain->SetBranchAddress("HltMu24", &HltMu24, &b_HltMu24);
   fChain->SetBranchAddress("HltMu30Eta2p1", &HltMu30Eta2p1, &b_HltMu30Eta2p1);
   fChain->SetBranchAddress("HltMu30", &HltMu30, &b_HltMu30);
   fChain->SetBranchAddress("HltIsoMu17Eta2p1TriCentralPFNoPUJet303020", &HltIsoMu17Eta2p1TriCentralPFNoPUJet303020, &b_HltIsoMu17Eta2p1TriCentralPFNoPUJet303020);
   fChain->SetBranchAddress("HltIsoMu17Eta2p1TriCentralPFNoPUJet30", &HltIsoMu17Eta2p1TriCentralPFNoPUJet30, &b_HltIsoMu17Eta2p1TriCentralPFNoPUJet30);
   fChain->SetBranchAddress("EcalDeadCellBoundaryEnergyFilter", &EcalDeadCellBoundaryEnergyFilter, &b_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("EcalDeadCellTriggerPrimitiveFilter", &EcalDeadCellTriggerPrimitiveFilter, &b_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("VtxN", &VtxN, &b_VtxN);
   fChain->SetBranchAddress("VtxNTracks", &VtxNTracks, &b_VtxNTracks);
   fChain->SetBranchAddress("VtxPosX", &VtxPosX, &b_VtxPosX);
   fChain->SetBranchAddress("VtxPosY", &VtxPosY, &b_VtxPosY);
   fChain->SetBranchAddress("VtxPosZ", &VtxPosZ, &b_VtxPosZ);
   fChain->SetBranchAddress("VtxNormalizedChi2", &VtxNormalizedChi2, &b_VtxNormalizedChi2);
   fChain->SetBranchAddress("VtxNDof", &VtxNDof, &b_VtxNDof);
   fChain->SetBranchAddress("VtxIsFake", &VtxIsFake, &b_VtxIsFake);
   fChain->SetBranchAddress("PUMCNumVtx", &PUMCNumVtx, &b_PUMCNumVtx);
   fChain->SetBranchAddress("PUMCNumVtxOOT", &PUMCNumVtxOOT, &b_PUMCNumVtxOOT);
   fChain->SetBranchAddress("PUMCNumTruth", &PUMCNumTruth, &b_PUMCNumTruth);
   fChain->SetBranchAddress("PUMCHighestSumPt", &PUMCHighestSumPt, &b_PUMCHighestSumPt);
   fChain->SetBranchAddress("Rho", &Rho, &b_Rho);
   fChain->SetBranchAddress("Rho25", &Rho25, &b_Rho25);
   fChain->SetBranchAddress("NobjTow", &NobjTow, &b_NobjTow);
   fChain->SetBranchAddress("TowId", TowId, &b_TowId);
   fChain->SetBranchAddress("TowId_phi", TowId_phi, &b_TowId_phi);
   fChain->SetBranchAddress("TowId_eta", TowId_eta, &b_TowId_eta);
   fChain->SetBranchAddress("TowEt", TowEt, &b_TowEt);
   fChain->SetBranchAddress("TowEta", TowEta, &b_TowEta);
   fChain->SetBranchAddress("TowPhi", TowPhi, &b_TowPhi);
   fChain->SetBranchAddress("TowE", TowE, &b_TowE);
   fChain->SetBranchAddress("TowEm", TowEm, &b_TowEm);
   fChain->SetBranchAddress("TowHad", TowHad, &b_TowHad);
   fChain->SetBranchAddress("TowOE", TowOE, &b_TowOE);
   fChain->SetBranchAddress("Tow_jetidx", Tow_jetidx, &b_Tow_jetidx);
   fChain->SetBranchAddress("TowNumBadEcalCells", TowNumBadEcalCells, &b_TowNumBadEcalCells);
   fChain->SetBranchAddress("TowNumBadHcalCells", TowNumBadHcalCells, &b_TowNumBadHcalCells);
   fChain->SetBranchAddress("TowNumProblematicEcalCells", TowNumProblematicEcalCells, &b_TowNumProblematicEcalCells);
   fChain->SetBranchAddress("TowNumProblematicHcalCells", TowNumProblematicHcalCells, &b_TowNumProblematicHcalCells);
   fChain->SetBranchAddress("TowNumRecoveredEcalCells", TowNumRecoveredEcalCells, &b_TowNumRecoveredEcalCells);
   fChain->SetBranchAddress("TowNumRecoveredHcalCells", TowNumRecoveredHcalCells, &b_TowNumRecoveredHcalCells);
   fChain->SetBranchAddress("NobjTrack", &NobjTrack, &b_NobjTrack);
   fChain->SetBranchAddress("TrackTowId", &TrackTowId, &b_TrackTowId);
   fChain->SetBranchAddress("TrackTowIdPhi", &TrackTowIdPhi, &b_TrackTowIdPhi);
   fChain->SetBranchAddress("TrackTowIdEta", &TrackTowIdEta, &b_TrackTowIdEta);
   fChain->SetBranchAddress("TrackId", &TrackId, &b_TrackId);
   fChain->SetBranchAddress("TrackNHits", &TrackNHits, &b_TrackNHits);
   fChain->SetBranchAddress("TrackQualityL", &TrackQualityL, &b_TrackQualityL);
   fChain->SetBranchAddress("TrackQualityT", &TrackQualityT, &b_TrackQualityT);
   fChain->SetBranchAddress("TrackQualityHP", &TrackQualityHP, &b_TrackQualityHP);
   fChain->SetBranchAddress("TrackChi2", &TrackChi2, &b_TrackChi2);
   fChain->SetBranchAddress("TrackPt", &TrackPt, &b_TrackPt);
   fChain->SetBranchAddress("TrackEta", &TrackEta, &b_TrackEta);
   fChain->SetBranchAddress("TrackPhi", &TrackPhi, &b_TrackPhi);
   fChain->SetBranchAddress("TrackP", &TrackP, &b_TrackP);
   fChain->SetBranchAddress("TrackDR", &TrackDR, &b_TrackDR);
   fChain->SetBranchAddress("TrackPhiOut", &TrackPhiOut, &b_TrackPhiOut);
   fChain->SetBranchAddress("TrackEtaOut", &TrackEtaOut, &b_TrackEtaOut);
   fChain->SetBranchAddress("TrackDROut", &TrackDROut, &b_TrackDROut);
   fChain->SetBranchAddress("TrackEMC1", &TrackEMC1, &b_TrackEMC1);
   fChain->SetBranchAddress("TrackEMC3", &TrackEMC3, &b_TrackEMC3);
   fChain->SetBranchAddress("TrackEMC5", &TrackEMC5, &b_TrackEMC5);
   fChain->SetBranchAddress("TrackHAC1", &TrackHAC1, &b_TrackHAC1);
   fChain->SetBranchAddress("TrackHAC3", &TrackHAC3, &b_TrackHAC3);
   fChain->SetBranchAddress("TrackHAC5", &TrackHAC5, &b_TrackHAC5);
   fChain->SetBranchAddress("Track_jetidx", &Track_jetidx, &b_Track_jetidx);
   fChain->SetBranchAddress("MuDR", &MuDR, &b_MuDR);
   fChain->SetBranchAddress("MuDE", &MuDE, &b_MuDE);
   fChain->SetBranchAddress("TrackD0", &TrackD0, &b_TrackD0);
   fChain->SetBranchAddress("TrackZ0", &TrackZ0, &b_TrackZ0);
   fChain->SetBranchAddress("NobjJet", &NobjJet, &b_NobjJet);
   fChain->SetBranchAddress("JetPt", JetPt, &b_JetPt);
   fChain->SetBranchAddress("JetMt", JetMt, &b_JetMt);
   fChain->SetBranchAddress("JetPhi", JetPhi, &b_JetPhi);
   fChain->SetBranchAddress("JetEta", JetEta, &b_JetEta);
   fChain->SetBranchAddress("JetEt", JetEt, &b_JetEt);
   fChain->SetBranchAddress("JetE", JetE, &b_JetE);
   fChain->SetBranchAddress("JetN90Hits", JetN90Hits, &b_JetN90Hits);
   fChain->SetBranchAddress("JetHad", JetHad, &b_JetHad);
   fChain->SetBranchAddress("JetEMF", JetEMF, &b_JetEMF);
   fChain->SetBranchAddress("JetFHPD", JetFHPD, &b_JetFHPD);
   fChain->SetBranchAddress("JetFRBX", JetFRBX, &b_JetFRBX);
   fChain->SetBranchAddress("JetFChargedHadrons", JetFChargedHadrons, &b_JetFChargedHadrons);
   fChain->SetBranchAddress("JetFNeutralHadrons", JetFNeutralHadrons, &b_JetFNeutralHadrons);
   fChain->SetBranchAddress("JetFPhotons", JetFPhotons, &b_JetFPhotons);
   fChain->SetBranchAddress("JetFElectrons", JetFElectrons, &b_JetFElectrons);
   fChain->SetBranchAddress("JetFMuons", JetFMuons, &b_JetFMuons);
   fChain->SetBranchAddress("JetFHFEm", JetFHFEm, &b_JetFHFEm);
   fChain->SetBranchAddress("JetFHFHad", JetFHFHad, &b_JetFHFHad);
   fChain->SetBranchAddress("JetHOEfrac", JetHOEfrac, &b_JetHOEfrac);
   fChain->SetBranchAddress("JetLeadingChargedConstPt", JetLeadingChargedConstPt, &b_JetLeadingChargedConstPt);
   fChain->SetBranchAddress("JetIDLoose", JetIDLoose, &b_JetIDLoose);
   fChain->SetBranchAddress("JetIDTight", JetIDTight, &b_JetIDTight);
   fChain->SetBranchAddress("JetEtWeightedSigmaPhi", JetEtWeightedSigmaPhi, &b_JetEtWeightedSigmaPhi);
   fChain->SetBranchAddress("JetEtWeightedSigmaEta", JetEtWeightedSigmaEta, &b_JetEtWeightedSigmaEta);
   fChain->SetBranchAddress("JetArea", JetArea, &b_JetArea);
   fChain->SetBranchAddress("JetCorrZSP", JetCorrZSP, &b_JetCorrZSP);
   fChain->SetBranchAddress("JetCorrL1", JetCorrL1, &b_JetCorrL1);
   fChain->SetBranchAddress("JetCorrL2", JetCorrL2, &b_JetCorrL2);
   fChain->SetBranchAddress("JetCorrL3", JetCorrL3, &b_JetCorrL3);
   fChain->SetBranchAddress("JetCorrJPT", JetCorrJPT, &b_JetCorrJPT);
   fChain->SetBranchAddress("JetCorrL2L3", JetCorrL2L3, &b_JetCorrL2L3);
   fChain->SetBranchAddress("JetCorrL2L3JPT", JetCorrL2L3JPT, &b_JetCorrL2L3JPT);
   fChain->SetBranchAddress("JetCorrL4JW", JetCorrL4JW, &b_JetCorrL4JW);
   fChain->SetBranchAddress("JetCorrUncert", JetCorrUncert, &b_JetCorrUncert);
   fChain->SetBranchAddress("JetIEta", JetIEta, &b_JetIEta);
   fChain->SetBranchAddress("JetIPhi", JetIPhi, &b_JetIPhi);
   fChain->SetBranchAddress("JetNChargedHadrons", JetNChargedHadrons, &b_JetNChargedHadrons);
   fChain->SetBranchAddress("JetNNeutralHadrons", JetNNeutralHadrons, &b_JetNNeutralHadrons);
   fChain->SetBranchAddress("JetNChargedPFConstituents", JetNChargedPFConstituents, &b_JetNChargedPFConstituents);
   fChain->SetBranchAddress("JetNPFConstituents", JetNPFConstituents, &b_JetNPFConstituents);
   fChain->SetBranchAddress("JetBtag", JetBtag, &b_JetBtag);
   fChain->SetBranchAddress("JetGenJetDeltaR", JetGenJetDeltaR, &b_JetGenJetDeltaR);
   fChain->SetBranchAddress("GenJetPt", GenJetPt, &b_GenJetPt);
   fChain->SetBranchAddress("GenJetPhi", GenJetPhi, &b_GenJetPhi);
   fChain->SetBranchAddress("GenJetEta", GenJetEta, &b_GenJetEta);
   fChain->SetBranchAddress("GenJetEt", GenJetEt, &b_GenJetEt);
   fChain->SetBranchAddress("GenJetE", GenJetE, &b_GenJetE);
   fChain->SetBranchAddress("NobjGenJet", &NobjGenJet, &b_NobjGenJet);
   fChain->SetBranchAddress("GenJetColPt", &GenJetColPt, &b_GenJetColPt);
   fChain->SetBranchAddress("GenJetColPhi", &GenJetColPhi, &b_GenJetColPhi);
   fChain->SetBranchAddress("GenJetColEta", &GenJetColEta, &b_GenJetColEta);
   fChain->SetBranchAddress("GenJetColEt", &GenJetColEt, &b_GenJetColEt);
   fChain->SetBranchAddress("GenJetColE", &GenJetColE, &b_GenJetColE);
   fChain->SetBranchAddress("GenJetColEmE", &GenJetColEmE, &b_GenJetColEmE);
   fChain->SetBranchAddress("GenJetColHadE", &GenJetColHadE, &b_GenJetColHadE);
   fChain->SetBranchAddress("GenJetColInvE", &GenJetColInvE, &b_GenJetColInvE);
   fChain->SetBranchAddress("GenJetColAuxE", &GenJetColAuxE, &b_GenJetColAuxE);
   fChain->SetBranchAddress("GenJetColJetDeltaR", &GenJetColJetDeltaR, &b_GenJetColJetDeltaR);
   fChain->SetBranchAddress("GenJetColJetIdx", &GenJetColJetIdx, &b_GenJetColJetIdx);
   fChain->SetBranchAddress("GenPartPt_algo", GenPartPt_algo, &b_GenPartPt_algo);
   fChain->SetBranchAddress("GenPartPhi_algo", GenPartPhi_algo, &b_GenPartPhi_algo);
   fChain->SetBranchAddress("GenPartEta_algo", GenPartEta_algo, &b_GenPartEta_algo);
   fChain->SetBranchAddress("GenPartEt_algo", GenPartEt_algo, &b_GenPartEt_algo);
   fChain->SetBranchAddress("GenPartE_algo", GenPartE_algo, &b_GenPartE_algo);
   fChain->SetBranchAddress("GenPartM_algo", GenPartM_algo, &b_GenPartM_algo);
   fChain->SetBranchAddress("GenPartId_algo", GenPartId_algo, &b_GenPartId_algo);
   fChain->SetBranchAddress("GenPartPt_phys", GenPartPt_phys, &b_GenPartPt_phys);
   fChain->SetBranchAddress("GenPartPhi_phys", GenPartPhi_phys, &b_GenPartPhi_phys);
   fChain->SetBranchAddress("GenPartEta_phys", GenPartEta_phys, &b_GenPartEta_phys);
   fChain->SetBranchAddress("GenPartEt_phys", GenPartEt_phys, &b_GenPartEt_phys);
   fChain->SetBranchAddress("GenPartE_phys", GenPartE_phys, &b_GenPartE_phys);
   fChain->SetBranchAddress("GenPartM_phys", GenPartM_phys, &b_GenPartM_phys);
   fChain->SetBranchAddress("GenPartId_phys", GenPartId_phys, &b_GenPartId_phys);
   fChain->SetBranchAddress("GenEvtScale", &GenEvtScale, &b_GenEvtScale);
   fChain->SetBranchAddress("Met", &Met, &b_Met);
   fChain->SetBranchAddress("MetPhi", &MetPhi, &b_MetPhi);
   fChain->SetBranchAddress("MetSum", &MetSum, &b_MetSum);
   fChain->SetBranchAddress("Met_T1", &Met_T1, &b_Met_T1);
   fChain->SetBranchAddress("MetPhi_T1", &MetPhi_T1, &b_MetPhi_T1);
   fChain->SetBranchAddress("MetSum_T1", &MetSum_T1, &b_MetSum_T1);
   fChain->SetBranchAddress("Met_T2", &Met_T2, &b_Met_T2);
   fChain->SetBranchAddress("MetPhi_T2", &MetPhi_T2, &b_MetPhi_T2);
   fChain->SetBranchAddress("MetSum_T2", &MetSum_T2, &b_MetSum_T2);
   fChain->SetBranchAddress("Met_T1R", &Met_T1R, &b_Met_T1R);
   fChain->SetBranchAddress("MetPhi_T1R", &MetPhi_T1R, &b_MetPhi_T1R);
   fChain->SetBranchAddress("MetSum_T1R", &MetSum_T1R, &b_MetSum_T1R);
   fChain->SetBranchAddress("Met_T2R", &Met_T2R, &b_Met_T2R);
   fChain->SetBranchAddress("MetPhi_T2R", &MetPhi_T2R, &b_MetPhi_T2R);
   fChain->SetBranchAddress("MetSum_T2R", &MetSum_T2R, &b_MetSum_T2R);
   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
   fChain->SetBranchAddress("CrossSection", &CrossSection, &b_CrossSection);
   fChain->SetBranchAddress("HltPhoton20iso", &HltPhoton20iso, &b_HltPhoton20iso);
   fChain->SetBranchAddress("HltPhoton20calo", &HltPhoton20calo, &b_HltPhoton20calo);
   fChain->SetBranchAddress("HltPhoton30iso", &HltPhoton30iso, &b_HltPhoton30iso);
   fChain->SetBranchAddress("HltPhoton30calo", &HltPhoton30calo, &b_HltPhoton30calo);
   fChain->SetBranchAddress("HltPhoton30R9", &HltPhoton30R9, &b_HltPhoton30R9);
   fChain->SetBranchAddress("HltPhoton30", &HltPhoton30, &b_HltPhoton30);
   fChain->SetBranchAddress("HltPhoton50iso", &HltPhoton50iso, &b_HltPhoton50iso);
   fChain->SetBranchAddress("HltPhoton50calo", &HltPhoton50calo, &b_HltPhoton50calo);
   fChain->SetBranchAddress("HltPhoton75iso", &HltPhoton75iso, &b_HltPhoton75iso);
   fChain->SetBranchAddress("HltPhoton75calo", &HltPhoton75calo, &b_HltPhoton75calo);
   fChain->SetBranchAddress("HltPhoton90iso", &HltPhoton90iso, &b_HltPhoton90iso);
   fChain->SetBranchAddress("HltPhoton90calo", &HltPhoton90calo, &b_HltPhoton90calo);
   fChain->SetBranchAddress("HltPhoton135", &HltPhoton135, &b_HltPhoton135);
   fChain->SetBranchAddress("HltPhoton150", &HltPhoton150, &b_HltPhoton150);
   fChain->SetBranchAddress("HltPhoton160", &HltPhoton160, &b_HltPhoton160);
   fChain->SetBranchAddress("NobjPhoton", &NobjPhoton, &b_NobjPhoton);
   fChain->SetBranchAddress("PhotonPt", PhotonPt, &b_PhotonPt);
   fChain->SetBranchAddress("PhotonPhi", PhotonPhi, &b_PhotonPhi);
   fChain->SetBranchAddress("PhotonEta", PhotonEta, &b_PhotonEta);
   fChain->SetBranchAddress("PhotonE", PhotonE, &b_PhotonE);
   fChain->SetBranchAddress("PhotonIsoECAL04", PhotonIsoECAL04, &b_PhotonIsoECAL04);
   fChain->SetBranchAddress("PhotonIsoHCAL04", PhotonIsoHCAL04, &b_PhotonIsoHCAL04);
   fChain->SetBranchAddress("PhotonIsoTrk04", PhotonIsoTrk04, &b_PhotonIsoTrk04);
   fChain->SetBranchAddress("PhotonSigmaIetaIeta", PhotonSigmaIetaIeta, &b_PhotonSigmaIetaIeta);
   fChain->SetBranchAddress("PhotonHadronicOverEM", PhotonHadronicOverEM, &b_PhotonHadronicOverEM);
   fChain->SetBranchAddress("PhotonHasPixelSeed", PhotonHasPixelSeed, &b_PhotonHasPixelSeed);
   fChain->SetBranchAddress("PhotonIDLoose", PhotonIDLoose, &b_PhotonIDLoose);
   fChain->SetBranchAddress("PhotonIDTight", PhotonIDTight, &b_PhotonIDTight);
   fChain->SetBranchAddress("NobjGenPhoton", &NobjGenPhoton, &b_NobjGenPhoton);
   fChain->SetBranchAddress("GenPhotonPt", GenPhotonPt, &b_GenPhotonPt);
   fChain->SetBranchAddress("GenPhotonPhi", GenPhotonPhi, &b_GenPhotonPhi);
   fChain->SetBranchAddress("GenPhotonEta", GenPhotonEta, &b_GenPhotonEta);
   fChain->SetBranchAddress("GenPhotonE", GenPhotonE, &b_GenPhotonE);
   Notify();
}

Bool_t GammaJetTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void GammaJetTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t GammaJetTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
  if (entry==-1) return -1; // manually added
   return 1;
}
#endif // #ifdef GammaJetTree_cxx
