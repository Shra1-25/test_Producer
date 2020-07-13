import FWCore.ParameterSet.Config as cms
import FWCore.ParameterSet.VarParsing as VarParsing

process = cms.Process("FramesProducer")

process.source = {
    //just a dummy source to give us some empty events
   source = EmptySource {
      untracked int32 maxEvents=2
   }

   //load our module
   module stuff = MyStuffProducer {}

   //make sure our module is called every event
   path p = { stuff }

    //just to see that something is happening
   service = Tracer {}
}
