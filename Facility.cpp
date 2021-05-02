#include "Facility.h"
#include <utility>

Facility::Facility(std::string facilityType) : facility_type(std::move(facilityType)) {}
