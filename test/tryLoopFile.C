#include "../interface/GammaJetTreeIterator.h"

void tryLoopFile(int isMC=0) {
  TString inpPath="/media/spektras/gammaJetData/test-data-20140903/";
  GJTIterator_t GJFile(_ak5FastCalo,inpPath,isMC);
  if (!GJFile.isOpen()) {
    std::cout << "failed to open the file\n";
    return;
  }

  std::cout << "there are " << GJFile.getEntriesFast() << " entries\n";

  if (!GJFile.getEntry(3)) {
    std::cout << "failed to get entry\n";
    return;
  }
  GJFile.Show(3);
  return;
}
