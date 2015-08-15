import FWCore.ParameterSet.Config as cms

# producer for HcalAlCaGammaJet
GammaJetProd = cms.EDProducer("AlCaGammaJetProducer",
                              PhoInput = cms.InputTag("gedPhotons"),
                              PFjetInput = cms.InputTag("ak4PFJetsCHS"),
                              HBHEInput = cms.InputTag("hbhereco"),
                              HFInput = cms.InputTag("hfreco"),
                              HOInput = cms.InputTag("horeco"),
                              ReducedEcalRecHitsEBInput = cms.InputTag("reducedEcalRecHitsEB"),
                              ReducedEcalRecHitsEEInput = cms.InputTag("reducedEcalRecHitsEE"),
                              ReducedEcalRecHitsESInput = cms.InputTag("reducedEcalRecHitsES"),
                              PhotonParticleBasedIsoInput = cms.InputTag("particleBasedIsolation","gedPhotons"),
                              # 5 ids are not allowed for collection InputTag
                              # define a simple output tag
                              PhotonParticleBasedIsoOutput = cms.InputTag("particleBasedIsolationForGedPhotons"),
                              METInput = cms.InputTag("pfMet"),
                              TriggerResults = cms.InputTag("TriggerResults::HLT"),
                              gsfeleInput = cms.InputTag("gedGsfElectrons"),
                              particleFlowInput = cms.InputTag("particleFlow"),
                              VertexInput = cms.InputTag("offlinePrimaryVertices"),
                              ConversionsInput = cms.InputTag("allConversions"),
                              rhoInput = cms.InputTag("fixedGridRhoFastjetAll"),
                              BeamSpotInput = cms.InputTag("offlineBeamSpot"),
                              PhoLoose = cms.InputTag("PhotonIDProdGED", "PhotonCutBasedIDLoose"),
                              PhoTight = cms.InputTag("PhotonIDProdGED", "PhotonCutBasedIDTight"),
                              MinPtJet = cms.double(10.0),
                              MinPtPhoton = cms.double(10.0)
                              )


# filter for HcalAlCaGammaJet
# based on (int goodEvent) flag from GammaJetProd
GammaJetProdFilter = cms.EDFilter("AlCaGammaJetFilter")

# selector for HcalAlCaGammaJet
GammaJetSelector = cms.EDFilter("AlCaGammaJetSelector",
                                PhoInput = cms.InputTag("gedPhotons"),
                                PFjetInput = cms.InputTag("ak4PFJetsCHS"),
                                MinPtPhoton = cms.double(10.0),
                                MinPtJet = cms.double(10.0)
                                )
