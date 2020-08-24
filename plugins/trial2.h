#ifndef MyStuff_interface_trial2_h
#define MyStuff_interface_trial2_h
#include <vector>
// -*- C++ -*-
//
// Package:     MyStuff/interface
// Class  :     MyStuff
// 
/**\class MyStuff MyStuff.h "MyStuff.h"
 Description: [one line class summary]
 Usage:
    <usage>
*/
//
// Original Author:  Shravan Sunil Chaudhary
//         Created:  Sun, 12 Jul 2020 21:59:03 GMT
//

// system include files

// user include files

// forward declarations

class trial2
{

   public:
      explicit trial1(int v):value_(v) { }
      trial2():value_(0) { }
      int value_;
      virtual ~trial2();
      
      // ---------- const member functions ---------------------

      // ---------- static member functions --------------------

      // ---------- member functions ---------------------------

   private:
      //MyStuff(const MyStuff&); // stop default
      //const MyStuff& operator=(const MyStuff&); // stop default

      // ---------- member data --------------------------------

};

// this is our new product, it is simply a 
// collection of SampleProd held in an std::vector
typedef std::vector<trial2> SampleCollection;

#endif
