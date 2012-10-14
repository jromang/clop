/////////////////////////////////////////////////////////////////////////////
//
// CDFVarianceAlpha.h
//
// Rémi Coulom
//
// March, 2009
//
/////////////////////////////////////////////////////////////////////////////
#ifndef CDFVarianceAlpha_Declared
#define CDFVarianceAlpha_Declared

#include "CDFConfidence.h"

class CDFVarianceAlpha: public CDFConfidence // dfvarAlpha
{
 private: ///////////////////////////////////////////////////////////////////
  const double alpha;
  const double alphaInv;

  double r0;
  double r1;

 public: ////////////////////////////////////////////////////////////////////
  CDFVarianceAlpha(CRegression &reg, double alpha = 0.5);

  double GetOutput(const double *vInput);
  void ComputeGradient();
};

#endif