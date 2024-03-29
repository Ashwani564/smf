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
/*
 * Pc5QoSPara.h
 *
 *
 */

#ifndef Pc5QoSPara_H_
#define Pc5QoSPara_H_

#include <string>
#include "Pc5QosFlowItem.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class Pc5QoSPara {
 public:
  Pc5QoSPara();
  virtual ~Pc5QoSPara() = default;

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

  bool operator==(const Pc5QoSPara& rhs) const;
  bool operator!=(const Pc5QoSPara& rhs) const;

  /////////////////////////////////////////////
  /// Pc5QoSPara members

  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::Pc5QosFlowItem> getPc5QosFlowList() const;
  void setPc5QosFlowList(
      std::vector<oai::model::common::Pc5QosFlowItem> const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getPc5LinkAmbr() const;
  void setPc5LinkAmbr(std::string const& value);
  bool pc5LinkAmbrIsSet() const;
  void unsetPc5LinkAmbr();

  friend void to_json(nlohmann::json& j, const Pc5QoSPara& o);
  friend void from_json(const nlohmann::json& j, Pc5QoSPara& o);

 protected:
  std::vector<oai::model::common::Pc5QosFlowItem> m_Pc5QosFlowList;

  std::string m_Pc5LinkAmbr;
  bool m_Pc5LinkAmbrIsSet;
};

}  // namespace oai::model::common

#endif /* Pc5QoSPara_H_ */
