import FWCore.ParameterSet.Config as cms

# selector for HcalAlCaGammaJet
GammaJetSelector = cms.EDFilter("AlCaGammaJetSelector",
                                PhoInput = cms.InputTag("gedPhotons"),
                                PFjetInput = cms.InputTag("ak4PFJetsCHS"),
                                MinPtPhoton = cms.double(10.0),
                                MinPtJet = cms.double(10.0)
                                )
