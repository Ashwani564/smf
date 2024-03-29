/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ReportIntervalNrMdt.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

ReportIntervalNrMdt::ReportIntervalNrMdt() {}

void ReportIntervalNrMdt::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ReportIntervalNrMdt::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReportIntervalNrMdt::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReportIntervalNrMdt" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool ReportIntervalNrMdt::operator==(const ReportIntervalNrMdt& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool ReportIntervalNrMdt::operator!=(const ReportIntervalNrMdt& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ReportIntervalNrMdt& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, ReportIntervalNrMdt& o) {
  from_json(j, o.m_value);
}

ReportIntervalNrMdt_anyOf ReportIntervalNrMdt::getValue() const {
  return m_value;
}

void ReportIntervalNrMdt::setValue(ReportIntervalNrMdt_anyOf value) {
  m_value = value;
}

ReportIntervalNrMdt_anyOf::eReportIntervalNrMdt_anyOf
ReportIntervalNrMdt::getEnumValue() const {
  return m_value.getValue();
}

void ReportIntervalNrMdt::setEnumValue(
    ReportIntervalNrMdt_anyOf::eReportIntervalNrMdt_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::common
