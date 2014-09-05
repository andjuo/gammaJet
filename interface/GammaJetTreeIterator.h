#ifndef GammaJetTreeIterator_H
#define GammaJetTreeIterator_H

// A class to loop over interesting events in the gamma-jet selected files

// -------------------------------------------------

#include "../interface/GammaJetTree.h"
#include <TString.h>
#include <iostream>

// -------------------------------------------------

class GammaJetTreeIterator_t;
typedef GammaJetTreeIterator_t GJTIterator_t;

typedef enum { _ak5FastCalo=0, _ak5FastPF, _ak5CHSPF,
	       _ak7FastCalo, _ak7FastPF, _ak7CHSPF,
	       _jet_last } TJetType_t;

// -------------------------------------------------

TString getJetName(TJetType_t jet);
inline TString getJetName(int a) { return getJetName(TJetType_t(a)); }

// -------------------------------------------------

inline
TJetType_t& operator++(TJetType_t &a) {
  if (a < _jet_last) a=TJetType_t(int(a)+1);
  return a;
}

// -------------------------------------------------
// -------------------------------------------------

class GammaJetTreeIterator_t : public GammaJetTree {
  TJetType_t fJetType;
  TString fFilePath;
  TString fFileName;
  int fIsData;
  //GammaJetTree *fGJTree;
  TFile *fFile;
 public:
  GammaJetTreeIterator_t(TJetType_t jet, TString path, int readMC) :
    GammaJetTree(NULL),
    fJetType(jet),
    fFilePath(path),
    fIsData((readMC) ? 0:1),
    //fGJTree(NULL),
    fFile(NULL)
      {
	this->initTree();
      }

    ~GammaJetTreeIterator_t() {
      //if (fGJTree) delete fGJTree;
      if (fFile) delete fFile;
    }

    TJetType_t jetType() const { return fJetType; }
    TString jetName() const { return getJetName(fJetType); }
    TString filePath() const { return fFilePath; }
    TString fileName() const { return fFileName; }
    int isData() const { return fIsData; }
    int isOpen() const { return (fChain!=NULL) ? 1:0; }
    //int isOpen() const { return (fGJTree!=NULL) ? 1:0; }
    //GammaJetTree *getTree() { return fGJTree; }

    int initTree();
    int initTree(TJetType_t jet, TString path, int readMC);

    Long64_t getEntriesFast()
      { return (fChain) ? fChain->GetEntriesFast() : 0; }

    int getEntry(int ientry) {
      if (GammaJetTree::LoadTree(ientry) < 0) return 0;
      return GammaJetTree::GetEntry(ientry);
    }
};

// -------------------------------------------------
// -------------------------------------------------


#endif
