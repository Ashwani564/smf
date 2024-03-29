/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "FlowStatus_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::pcf {

FlowStatus_anyOf::FlowStatus_anyOf() {}

void FlowStatus_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool FlowStatus_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool FlowStatus_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "FlowStatus_anyOf" : pathPrefix;

  if (m_value ==
      FlowStatus_anyOf::eFlowStatus_anyOf::INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool FlowStatus_anyOf::operator==(const FlowStatus_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool FlowStatus_anyOf::operator!=(const FlowStatus_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const FlowStatus_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case FlowStatus_anyOf::eFlowStatus_anyOf::INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case FlowStatus_anyOf::eFlowStatus_anyOf::ENABLED_UPLINK:
      j = "ENABLED-UPLINK";
      break;
    case FlowStatus_anyOf::eFlowStatus_anyOf::ENABLED_DOWNLINK:
      j = "ENABLED-DOWNLINK";
      break;
    case FlowStatus_anyOf::eFlowStatus_anyOf::ENABLED:
      j = "ENABLED";
      break;
    case FlowStatus_anyOf::eFlowStatus_anyOf::DISABLED:
      j = "DISABLED";
      break;
    case FlowStatus_anyOf::eFlowStatus_anyOf::REMOVED:
      j = "REMOVED";
      break;
  }
}

void from_json(const nlohmann::json& j, FlowStatus_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "ENABLED-UPLINK") {
    o.setValue(FlowStatus_anyOf::eFlowStatus_anyOf::ENABLED_UPLINK);
  } else if (s == "ENABLED-DOWNLINK") {
    o.setValue(FlowStatus_anyOf::eFlowStatus_anyOf::ENABLED_DOWNLINK);
  } else if (s == "ENABLED") {
    o.setValue(FlowStatus_anyOf::eFlowStatus_anyOf::ENABLED);
  } else if (s == "DISABLED") {
    o.setValue(FlowStatus_anyOf::eFlowStatus_anyOf::DISABLED);
  } else if (s == "REMOVED") {
    o.setValue(FlowStatus_anyOf::eFlowStatus_anyOf::REMOVED);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " FlowStatus_anyOf::eFlowStatus_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

FlowStatus_anyOf::eFlowStatus_anyOf FlowStatus_anyOf::getValue() const {
  return m_value;
}
void FlowStatus_anyOf::setValue(FlowStatus_anyOf::eFlowStatus_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::pcf
