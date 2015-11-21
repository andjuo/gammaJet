import FWCore.ParameterSet.Config as cms
process = cms.Process('ANALYSIS')

# The purpose of this macro is to check gammaJetAnalysis_cfg.py output
# reading the input files directly, not through GammaJetSelector.
# It is for convenience of use.

process.load('Configuration.StandardSequences.Services_cff')
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')

process.load('FWCore.MessageService.MessageLogger_cfi')
process.MessageLogger.categories+=cms.untracked.vstring('GammaJetAnalysis')
#process.MessageLogger.cerr.FwkReport.reportEvery=cms.untracked.int32(1000)

# Specify IdealMagneticField ESSource (needed for CMSSW 730)
process.load("Configuration.Geometry.GeometryIdeal_cff")
process.load("MagneticField.Engine.autoMagneticFieldProducer_cfi")
from Configuration.AlCa.autoCond import autoCond
#process.GlobalTag.globaltag=autoCond['startup']
process.GlobalTag.globaltag = 'PHYS14_25_V1::All'

# get the official photonID producer
#process.load("RecoEgamma/PhotonIdentification/PhotonIDValueMapProducer_cfi")
#process.load("RecoEgamma/PhotonIdentification/egmPhotonIDs_cff")

#from PhysicsTools.SelectorUtils.tools.vid_id_tools import *
# turn on VID producer, indicate data format  to be
# DataFormat.AOD or DataFormat.MiniAOD, as appropriate
#if useAOD == True :
#dataFormat = DataFormat.AOD
#else :
#dataFormat = DataFormat.MiniAOD

#switchOnVIDPhotonIdProducer(process, dataFormat)

# define which IDs we want to produce
#my_id_modules = ['RecoEgamma.PhotonIdentification.Identification.cutBasedPhotonID_PHYS14_PU20bx25_V2_cff']

#add them to the VID producer
#for idmod in my_id_modules:
#          setupAllVIDIdsInModule(process,idmod,setupVIDPhotonSelection)


#load the response corrections calculator
process.load('Calibration.HcalCalibAlgos.gammaJetAnalysis_cfi')
#  needed for nonCHS
#process.load('JetMETCorrections.Configuration.JetCorrectors_cff')
process.load('JetMETCorrections.Configuration.JetCorrectionProducers_cff')

# run over files
process.GammaJetAnalysis.rootHistFilename = cms.string('diJet_tree_CHS_noGJetSel.root')
process.GammaJetAnalysis.doPFJets = cms.bool(True)
process.GammaJetAnalysis.doGenJets = cms.bool(True)

# trigger names should not end with '_'
process.GammaJetAnalysis.photonTriggers = cms.vstring(
    'HLT_Photon20_CaloIdVL_IsoL','HLT_Photon30_CaloIdVL_IsoL',
    'HLT_Photon50_CaloIdVL_IsoL','HLT_Photon75_CaloIdVL_IsoL',
    'HLT_Photon90_CaloIdVL_IsoL','HLT_Photon135',
    'HLT_Photon150','HLT_Photon160')
# triggers for CMSSW 730
process.GammaJetAnalysis.photonTriggers += cms.vstring(
    'HLT_Photon22', 'HLT_Photon30', 'HLT_Photon36',
    'HLT_Photon50', 'HLT_Photon75',
    'HLT_Photon90', 'HLT_Photon120', 'HLT_Photon175',
    'HLT_Photon250_NoHE', 'HLT_Photon300_NoHE'
)
# to disable photonTriggers assign an empty vstring

##  ELIMINATE PHOTON

process.GammaJetAnalysis.photonTriggers = cms.vstring()
process.GammaJetAnalysis.jetTriggers = cms.vstring()

process.GammaJetAnalysis.allowNoPhoton = cms.bool(True)
process.GammaJetAnalysis.photonJetDPhiMin = cms.double(2.6)
process.GammaJetAnalysis.photonPtMin = cms.double(0.)
process.GammaJetAnalysis.jet2EtMax = cms.double(1e16)
process.GammaJetAnalysis.jet3EtMax = cms.double(30.) # keep


# for 5_3_X
process.GammaJetAnalysis.photonCollName=cms.string('photons')
process.GammaJetAnalysis.electronCollName= cms.string("gsfElectrons")
process.GammaJetAnalysis.photonIdLooseName= cms.InputTag("PhotonIDProd","PhotonCutBasedIDLoose")
process.GammaJetAnalysis.photonIdTightName= cms.InputTag("PhotonIDProd","PhotonCutBasedIDTight")
process.GammaJetAnalysis.pfJetCollName= cms.string('ak5PFJetsCHS')
process.GammaJetAnalysis.pfJetCorrName= cms.string('ak5PFchsL2L3')
process.GammaJetAnalysis.genJetCollName= cms.string('ak5GenJets')


# a clone without CHS
#process.GammaJetAnalysis_noCHS= process.GammaJetAnalysis.clone()
#process.GammaJetAnalysis_noCHS.rootHistFilename = cms.string('diJet_tree_nonCHS_noGJetSel.root')
# for 7XY use ak4* instead of ak5
#process.GammaJetAnalysis_noCHS.pfJetCollName = cms.string('ak4PFJets')
#process.GammaJetAnalysis_noCHS.pfJetCorrName = cms.string('ak4PFL2L3')


import FWCore.Utilities.FileUtils as FileUtils
listFileName='relval_qcd.txt'
mylist = FileUtils.loadListFromFile(listFileName)

process.source = cms.Source("PoolSource",
    #fileNames = cms.untracked.vstring( *mylist )
                            fileNames=cms.untracked.vstring('file:/tmp/andriusj/file.root')
)


#To have the same number of histograms, do not run over GenJets
#process.GammaJetAnalysis.doGenJets = cms.bool(False)

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(20) )
process.MessageLogger.cerr.FwkReport.reportEvery=cms.untracked.int32(1000)
process.options = cms.untracked.PSet( wantSummary = cms.untracked.bool(True) )

# specify 'workOnAOD=1' if the input file is AOD, otherwise put 0
process.GammaJetAnalysis.workOnAOD = cms.int32(0)
process.GammaJetAnalysis.doGenJets = cms.bool(True)
process.GammaJetAnalysis.debug     = cms.untracked.int32(0)

#process.egmPhotonIDSequence.remove('photonMVAValueMapProducer')


process.ak5PFchsL2Relative = cms.ESProducer(
    'LXXXCorrectionESProducer',
    level     = cms.string('L2Relative'),
    algorithm = cms.string('AK5PFchs')
)
process.ak5PFchsL3Absolute = cms.ESProducer(
     'LXXXCorrectionESProducer',
     level     = cms.string('L3Absolute'),
     algorithm = cms.string('AK5PFchs')
)

process.ak5PFchsL2L3 = cms.ESProducer(
    'JetCorrectionESChain',
    correctors = cms.vstring('ak5PFchsL2Relative', 'ak5PFchsL3Absolute')
    )


process.load('RecoJets.Configuration.RecoPFJets_cff')
process.load('CommonTools.ParticleFlow.PF2PAT_cff')
process.load("CommonTools.ParticleFlow.pfNoPileUp_cff")

process.seq_ak5PFCHS= cms.Sequence( process.particleFlowPtrs *
                                    process.pfNoPileUpJMESequence *
                                    process.ak5PFJetsCHS
                                    )

process.p = cms.Path(
#    process.photonIDValueMapProducer *
#    process.egmPhotonIDs *
    process.seq_ak5PFCHS *
    process.GammaJetAnalysis
)

# To check what collections are present, define the output module
#process.Output = cms.OutputModule("PoolOutputModule",
#    outputCommands = cms.untracked.vstring('keep *'),
#    fileName = cms.untracked.string('gjetOut.root')
#)

#process.e = cms.EndPath(process.Output)
