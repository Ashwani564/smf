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

#include "QosResourceType_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::common {

QosResourceType_anyOf::QosResourceType_anyOf() {}

void QosResourceType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool QosResourceType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool QosResourceType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "QosResourceType_anyOf" : pathPrefix;

  if (m_value == QosResourceType_anyOf::eQosResourceType_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool QosResourceType_anyOf::operator==(const QosResourceType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool QosResourceType_anyOf::operator!=(const QosResourceType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const QosResourceType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case QosResourceType_anyOf::eQosResourceType_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case QosResourceType_anyOf::eQosResourceType_anyOf::NON_GBR:
      j = "NON_GBR";
      break;
    case QosResourceType_anyOf::eQosResourceType_anyOf::NON_CRITICAL_GBR:
      j = "NON_CRITICAL_GBR";
      break;
    case QosResourceType_anyOf::eQosResourceType_anyOf::CRITICAL_GBR:
      j = "CRITICAL_GBR";
      break;
  }
}

void from_json(const nlohmann::json& j, QosResourceType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "NON_GBR") {
    o.setValue(QosResourceType_anyOf::eQosResourceType_anyOf::NON_GBR);
  } else if (s == "NON_CRITICAL_GBR") {
    o.setValue(QosResourceType_anyOf::eQosResourceType_anyOf::NON_CRITICAL_GBR);
  } else if (s == "CRITICAL_GBR") {
    o.setValue(QosResourceType_anyOf::eQosResourceType_anyOf::CRITICAL_GBR);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " QosResourceType_anyOf::eQosResourceType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

QosResourceType_anyOf::eQosResourceType_anyOf QosResourceType_anyOf::getValue()
    const {
  return m_value;
}
void QosResourceType_anyOf::setValue(
    QosResourceType_anyOf::eQosResourceType_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::common
