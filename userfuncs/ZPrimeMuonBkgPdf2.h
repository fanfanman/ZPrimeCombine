/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
o *****************************************************************************/

#ifndef ZPRIMEMUONBKGPDF2
#define ZPRIMEMUONBKGPDF2

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class ZPrimeMuonBkgPdf2 : public RooAbsPdf {
public:
  ZPrimeMuonBkgPdf2() {} ; 
  ZPrimeMuonBkgPdf2(const char *name, const char *title,
              RooAbsReal& _mass,
              RooAbsReal& _bkg_a,
              RooAbsReal& _bkg_b,
              RooAbsReal& _bkg_c,
              RooAbsReal& _bkg_d,
              RooAbsReal& _bkg_e,
              RooAbsReal& _bkg_a2,
              RooAbsReal& _bkg_b2,
              RooAbsReal& _bkg_c2,
              RooAbsReal& _bkg_e2,
              RooAbsReal& _bkg_syst_a,
              RooAbsReal& _bkg_syst_b);
  ZPrimeMuonBkgPdf2(const ZPrimeMuonBkgPdf2& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new ZPrimeMuonBkgPdf2(*this,newname); }
  inline virtual ~ZPrimeMuonBkgPdf2() { }

protected:

  RooRealProxy mass ;
  RooRealProxy bkg_a ;
  RooRealProxy  bkg_b ;
  RooRealProxy  bkg_c ;
  RooRealProxy  bkg_d ;
  RooRealProxy  bkg_e ;
  RooRealProxy  bkg_a2;
  RooRealProxy  bkg_b2;
  RooRealProxy  bkg_c2;
  RooRealProxy  bkg_e2;
  RooRealProxy  bkg_syst_a ;
  RooRealProxy  bkg_syst_b ;
  
  Double_t evaluate() const ;

private:

  ClassDef(ZPrimeMuonBkgPdf2,1) // Your description goes here...
};
 
#endif