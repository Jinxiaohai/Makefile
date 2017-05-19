/********************************************************/
/*                 Created  by  xiaohai                 */
/*                 Telphone : 18501781924               */
/*            E-mail : jinxiaohai@sinap.ac.cn           */
/*            E-mail : xiaohaijin@outlook.com           */
/*   Address : Shanghai Institute of Applied Physics    */
/********************************************************/
//root
#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ class PlotFile;
#endif
#ifndef __CINT__
#include "TH3D.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TTree.h"
#include "TNtuple.h"
#include "TRandom.h"
#include "TMath.h"
#include "TSystem.h"
#include "TUnixSystem.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "TROOT.h"
#include "TFile.h"
#include "TChain.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TGaxis.h"
#include "TPaveStats.h"
#include "TObject.h"
#include "TClonesArray.h"
#include "TRefArray.h"
#include "TRef.h"
#include "TBits.h"
#endif

//c++
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstddef>
#include <vector>
#include <fstream>
#include <sstream>
#include "head.h"
using namespace std;

int main(int argc, char *argv[])
{
  output();
  TFile *file = new TFile("./output/file.root", "RECREATE");
  file->cd();
  TH1D *hist = new TH1D("hist", "hist", 100, -6, 6);
  hist->FillRandom("gaus", 100000);
  file->Write();
  return 0;
}
