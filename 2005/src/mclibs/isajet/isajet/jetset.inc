#ifndef CERNLIB_ISAJET_JETSET_INC
#define CERNLIB_ISAJET_JETSET_INC
*
*
* jetset.inc
*
      INTEGER   MXJSET,JPACK
      PARAMETER (MXJSET=400,JPACK=1000)
      COMMON/JETSET/NJSET,PJSET(5,MXJSET),JORIG(MXJSET),JTYPE(MXJSET),
     $JDCAY(MXJSET)
      SAVE /JETSET/
#if defined(CERNLIB_LEVEL2)
#include "isajet/l2jset.inc"
* Ignoring t=pass
#endif
      INTEGER   NJSET,JORIG,JTYPE,JDCAY
      REAL      PJSET

#endif