#ifndef CANOPY3D
#define CANOPY3D


#include "AuxBioCro.h"
#include "BioCro.h"

void update_3Dcanopy_structure(double **canopy3Dstructure,double canparms, int nrow, int ncol);
void getIdirIdiff(double *Idir, double *Idiff,double *cosTh,double solarR,double lat,int DOY, int hr);
struct Can_Str CanAC_3D (double canparms, double **canopy3Dstructure, int nrows, int ncols, double LAI,int DOY, int hr,double solarR,double Temp,
                        double RH,double WindSpeed,double lat,double Vmax,
                        double Alpha, double Kparm, double theta, double beta,
                        double Rd, double Catm, double b0, double b1,
                        double StomataWS, int ws,double kpLN, double upperT, 
                        double lowerT,double LeafN,struct nitroParms nitroP);
                        
void runFastTracer (int is_import_from_2DMatrix, char  filename[], double **m_3Dcanopy_light, double latitude, int day, double h, double Idir, double Idiff, double light_min_x,
                        double light_max_x, double light_min_y, double light_max_y, double light_min_z, double light_max_z);

void microclimate_for_3Dcanopy(double **canopy3Dstructure, double *canHeight, int nrows, int ncols, double LeafN_canopytop,double RH_canopytop,double windspeed_canopytop,double kpLN);                     

#endif

