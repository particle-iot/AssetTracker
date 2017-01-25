#ifndef AssetTracker_h
#define AssetTracker_h

#include "application.h"
#include "math.h"

#include "Adafruit_GPS.h"
#include "Adafruit_LIS3DH.h"


class AssetTracker {

 public:

  AssetTracker();

  void
    begin(void),
    updateGPS(void),
    gpsOn(void),
    gpsOff(void);
  int
    readX(void),
    readY(void),
    readZ(void),
    readXYZmagnitude(void);
  float
    readLat(void),
    readLon(void),
    readLatDeg(void),
    readLonDeg(void),
    readHDOP(void),
    getGpsAccuracy(void);

  bool
    gpsFix(void);
  char
    checkGPS(void),
    *preNMEA(void);
  String
    readLatLon(void);

  bool
    setupLowPowerWakeMode(uint8_t movementThreshold = 16);
  uint8_t
    clearAccelInterrupt();
  uint32_t
    getGpsTimestamp();

 private:

};

#endif // AssetTracker_h
