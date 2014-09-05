#include "../interface/GammaJetTreeIterator.h"


// -------------------------------------------------
// -------------------------------------------------

TString getJetName(TJetType_t jet) {
  TString name;
  switch(jet) {
  case _ak5FastCalo: name="ak5FastCalo"; break;
  case _ak5FastPF: name="ak5FastPF"; break;
  case _ak5CHSPF: name="ak5CHSPF"; break;
  case _ak7FastCalo: name="ak7FastCalo"; break;
  case _ak7FastPF: name="ak7FastPF"; break;
  case _ak7CHSPF: name="ak7CHSPF"; break;
  default:
    name="getJetName_Unknown";
  }
  return name;
}

// -------------------------------------------------
// -------------------------------------------------

int GammaJetTreeIterator_t::initTree() {
  const char *fncName="GammaJetTreeIterator_t::initTree";
  //if (fGJTree) {
  //  std::cout << fncName << ": closing old tree\n";
  //  delete fGJTree;
  //}
  if (fFile) {
    std::cout << fncName << ": closing old file\n";
    delete fFile;
  }
  fFileName= fFilePath + TString((fIsData) ? "data_" : "MC_");
  fFileName.Append(getJetName(fJetType) + TString(".root"));
  fFile = new TFile(fFileName,"read");
  if (!fFile || !fFile->IsOpen()) {
    std::cout << fncName << ": failed to open the file <"
	      << fFile->GetName() << ">\n";
    return 0;
  }
  TTree *tree=NULL;
  fFile->GetObject("GammaJetTree",tree);
  if (!tree) {
    std::cout << fncName << ": failed to get the tree from a file <"
	      << fFile->GetName() << ">\n";
    return 0;
  }
  /*
  fGJTree = new GammaJetTree(tree);
  if (!fGJTree) {
    std::cout << fncname << ": failed to create GammaJetTree object\n";
    return 0;
  }
  */
  GammaJetTree::Init(tree);
  return 1;
}

// -------------------------------------------------

int GammaJetTreeIterator_t::initTree(TJetType_t jet, TString path,
				     int readMC) {
  fJetType = jet;
  if (path.Length()) fFilePath = path;
  fIsData = (readMC) ? 0:1;
  if (!initTree()) {
    std::cout << "called from initTree(jet,path,readMC)\n";
    return 0;
  }
  return 1;
}

// -------------------------------------------------

// -------------------------------------------------


// -------------------------------------------------
// -------------------------------------------------
