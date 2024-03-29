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
/*
 * AfSigProtocol.h
 *
 * Possible values are - NO_INFORMATION: Indicate that no information about the
 * AF signalling protocol is being provided.  - SIP: Indicate that the
 * signalling protocol is Session Initiation Protocol.
 */

#ifndef AfSigProtocol_H_
#define AfSigProtocol_H_

#include "AfSigProtocol_anyOf.h"
#include "NullValue.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
/// Possible values are - NO_INFORMATION: Indicate that no information about the
/// AF signalling protocol is being provided.  - SIP: Indicate that the
/// signalling protocol is Session Initiation Protocol.
/// </summary>
class AfSigProtocol {
 public:
  AfSigProtocol();
  virtual ~AfSigProtocol() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const AfSigProtocol& rhs) const;
  bool operator!=(const AfSigProtocol& rhs) const;

  /////////////////////////////////////////////
  /// AfSigProtocol members

  friend void to_json(nlohmann::json& j, const AfSigProtocol& o);
  friend void from_json(const nlohmann::json& j, AfSigProtocol& o);

  AfSigProtocol_anyOf getValue() const;
  void setValue(AfSigProtocol_anyOf value);
  AfSigProtocol_anyOf::eAfSigProtocol_anyOf getEnumValue() const;
  void setEnumValue(AfSigProtocol_anyOf::eAfSigProtocol_anyOf value);

 protected:
  AfSigProtocol_anyOf m_value;
};

}  // namespace oai::model::pcf

#endif /* AfSigProtocol_H_ */
