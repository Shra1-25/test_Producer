import FWCore.ParameterSet.Config as cms
import FWCore.ParameterSet.VarParsing as VarParsing

process = cms.Process("FramesProducer")

process.source = cms.source("EmptySource", maxEvents=cms.untracked.uint32(2))

  #load our module
   #module stuff = MyStuffProducer {}
  process.stuff=cms.EDProducer("MyStuffProducer") 
  
   #make sure our module is called every event
   process.p = cms.Path(process.stuff)

    #just to see that something is happening
   service = Tracer {}
}
