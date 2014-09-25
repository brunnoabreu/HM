/* 
 * File:   TZSearchConfig.h
 * Author: brunno
 *
 * Created on September 24, 2014, 1:39 PM
 */

#ifndef TZSEARCHCONFIG_H
#define	TZSEARCHCONFIG_H

#define TZ_SEARCH_CONFIGURATION                                                                                 \
const Bool bFirstSearchDiamond []    = {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};    /* 1 = xTZ8PointDiamondSearch   0 = xTZ8PointSquareSearch */        \
const Bool bFirstSearchStop []       = {0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};                                                           \
const UInt uiFirstSearchRounds []    = {1,1,2,3,4,1,1,2,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};  /* first search stop X rounds after best match (must be >=1) */     \
const Bool bTestOtherPredictedMV []  = {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};                                                                      \
const Bool bTestZeroVector []        = {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};                                                                      \
const Bool bTestZeroVectorStart []   = {0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};                                                                      \
const Bool bTestZeroVectorStop []    = {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};                                                                      \
const Bool bEnableRasterSearch []    = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};                                                                      \
const Int  iRaster[]                 = {5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,3,2,1,5,4,3,2,1,1,1,1,1,1,1,1,1};  /* TZ soll von aussen ?ergeben werden */                            \
const Bool bAlwaysRasterSearch []    = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1};   /* ===== 1: BETTER but factor 2 slower ===== */                     \
const Bool bRasterRefinementEnable[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};   /* enable either raster refinement or star refinement */            \
const Bool bRasterRefinementDiamond[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1};   /* 1 = xTZ8PointDiamondSearch   0 = xTZ8PointSquareSearch */        \
const Bool bStarRefinementEnable []  = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1};   /* enable either star refinement or raster refinement */            \
const Bool bStarRefinementDiamond [] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1};  /* 1 = xTZ8PointDiamondSearch   0 = xTZ8PointSquareSearch */        \
const Bool bStarRefinementStop []    = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1};                                                                       \
const UInt uiStarRefinementRounds [] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,4};  /* star refinement stop X rounds after best match (must be >=1) */  \

#endif	/* TZSEARCHCONFIG_H */

