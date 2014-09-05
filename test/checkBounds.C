#include "../interface/GammaJetTreeIterator.h"

void checkBounds(int isMC=0, int jetType=0) {

#ifndef GenJetTree_checkBounds
  std::cout << "macro checkBounds is intended to be used when\n";
  std::cout << "GenJetTree_checkBounds is defined. Please recompile\n";
  return;
#endif

  TString inpPath="/media/spektras/gammaJetData/test-data-20140903/";
  GJTIterator_t GJFile(TJetType_t(jetType),inpPath,isMC);
  if (!GJFile.isOpen()) {
    std::cout << "failed to open the file\n";
    return;
  }

  std::cout << "there are " << GJFile.getEntriesFast() << " entries\n";

  for (Long64_t i=0; i<GJFile.getEntriesFast(); ++i) {
    if (!GJFile.getEntry(i)) {
      std::cout << "failed to get entry #" << i <<"\n";
      return;
    }
  }

  std::cout << "checked ok\n";
  return;
}
