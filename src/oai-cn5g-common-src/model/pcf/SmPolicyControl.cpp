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

#include "SmPolicyControl.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

SmPolicyControl::SmPolicyControl() {}

void SmPolicyControl::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool SmPolicyControl::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SmPolicyControl::validate(
    std::stringstream& /* msg */, const std::string& /* pathPrefix */) const {
  bool success = true;
  /*
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SmPolicyControl" : pathPrefix;
  */
  return success;
}

bool SmPolicyControl::operator==(const SmPolicyControl& rhs) const {
  return

      (getContext() == rhs.getContext()) &&

      (getPolicy() == rhs.getPolicy())

          ;
}

bool SmPolicyControl::operator!=(const SmPolicyControl& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SmPolicyControl& o) {
  j            = nlohmann::json();
  j["context"] = o.m_Context;
  j["policy"]  = o.m_Policy;
}

void from_json(const nlohmann::json& j, SmPolicyControl& o) {
  j.at("context").get_to(o.m_Context);
  j.at("policy").get_to(o.m_Policy);
}

oai::model::pcf::SmPolicyContextData SmPolicyControl::getContext() const {
  return m_Context;
}
void SmPolicyControl::setContext(
    oai::model::pcf::SmPolicyContextData const& value) {
  m_Context = value;
}
oai::model::pcf::SmPolicyDecision SmPolicyControl::getPolicy() const {
  return m_Policy;
}
void SmPolicyControl::setPolicy(
    oai::model::pcf::SmPolicyDecision const& value) {
  m_Policy = value;
}

}  // namespace oai::model::pcf
