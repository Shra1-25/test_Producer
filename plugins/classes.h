#include "StuffProducer/MyStuff/interface/trial2.h"
//#include "Analysis/MyStuff/interface/MyOtherStuff.h"
//#include "StuffProd/DataFormats/MyStuff/interface/SampleProd.h"
#include <vector>
#include "DataFormats/Common/interface/Wrapper.h"
//using namespace std;

namespace { namespace {
  //say which template classes should have dictionaries
  edm::Wrapper<trial2> trial2_template;
  edm::Wrapper<std::vector<trial2> > trial2_vec_template;
  //edm::Wrapper<std::vector<MyOtherStuff> > dummy2;
} }
