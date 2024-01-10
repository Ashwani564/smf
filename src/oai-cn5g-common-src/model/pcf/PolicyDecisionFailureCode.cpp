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

#include "PolicyDecisionFailureCode.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

PolicyDecisionFailureCode::PolicyDecisionFailureCode() {}

void PolicyDecisionFailureCode::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PolicyDecisionFailureCode::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PolicyDecisionFailureCode::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PolicyDecisionFailureCode" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool PolicyDecisionFailureCode::operator==(
    const PolicyDecisionFailureCode& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool PolicyDecisionFailureCode::operator!=(
    const PolicyDecisionFailureCode& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PolicyDecisionFailureCode& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, PolicyDecisionFailureCode& o) {
  from_json(j, o.m_value);
}

PolicyDecisionFailureCode_anyOf PolicyDecisionFailureCode::getValue() const {
  return m_value;
}

void PolicyDecisionFailureCode::setValue(
    PolicyDecisionFailureCode_anyOf value) {
  m_value = value;
}

PolicyDecisionFailureCode_anyOf::ePolicyDecisionFailureCode_anyOf
PolicyDecisionFailureCode::getEnumValue() const {
  return m_value.getValue();
}

void PolicyDecisionFailureCode::setEnumValue(
    PolicyDecisionFailureCode_anyOf::ePolicyDecisionFailureCode_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::pcf
