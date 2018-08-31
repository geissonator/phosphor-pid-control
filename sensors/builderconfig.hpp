#pragma once

#include "sensors/manager.hpp"

#include <string>

/**
 * Given a configuration file, parsable by libconfig++, parse it and then pass
 * the information onto BuildSensors.
 */
SensorManager BuildSensorsFromConfig(const std::string& path);
