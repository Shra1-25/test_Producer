#include "StuffProducer/MyStuff/interface/trial1.h"
//#include "Analysis/MyStuff/interface/MyOtherStuff.h"
//#include "StuffProd/DataFormats/MyStuff/interface/SampleProd.h"
#include <vector>
#include "DataFormats/Common/interface/Wrapper.h"
//using namespace std;

namespace { namespace {
  //say which template classes should have dictionaries
  edm::Wrapper<trial1> trial1_template;
  edm::Wrapper<std::vector<trial1> > trial1_vec_template;
  //edm::Wrapper<std::vector<MyOtherStuff> > dummy2;
} }
