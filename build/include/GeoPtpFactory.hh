#ifndef __RAT_GeoPtpFactory__
#define __RAT_GeoPtpFactory__

#include <RAT/GeoSolidFactory.hh>

namespace PTP {
class GeoPtpFactory : public RAT::GeoSolidFactory {
 public:
  GeoPtpFactory() : GeoSolidFactory("ptp"){};
  virtual G4VSolid *ConstructSolid(RAT::DBLinkPtr table);
};

}  // namespace PTP

#endif
