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
 * TsnBridgeInfo.h
 *
 *
 */

#ifndef TsnBridgeInfo_H_
#define TsnBridgeInfo_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class TsnBridgeInfo {
 public:
  TsnBridgeInfo();
  virtual ~TsnBridgeInfo() = default;

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

  bool operator==(const TsnBridgeInfo& rhs) const;
  bool operator!=(const TsnBridgeInfo& rhs) const;

  /////////////////////////////////////////////
  /// TsnBridgeInfo members

  /// <summary>
  ///
  /// </summary>
  int32_t getBridgeId() const;
  void setBridgeId(int32_t const value);
  bool bridgeIdIsSet() const;
  void unsetBridgeId();
  /// <summary>
  ///
  /// </summary>
  std::string getDsttAddr() const;
  void setDsttAddr(std::string const& value);
  bool dsttAddrIsSet() const;
  void unsetDsttAddr();
  /// <summary>
  ///
  /// </summary>
  int32_t getDsttPortNum() const;
  void setDsttPortNum(int32_t const value);
  bool dsttPortNumIsSet() const;
  void unsetDsttPortNum();
  /// <summary>
  ///
  /// </summary>
  int32_t getDsttResidTime() const;
  void setDsttResidTime(int32_t const value);
  bool dsttResidTimeIsSet() const;
  void unsetDsttResidTime();

  friend void to_json(nlohmann::json& j, const TsnBridgeInfo& o);
  friend void from_json(const nlohmann::json& j, TsnBridgeInfo& o);

 protected:
  int32_t m_BridgeId;
  bool m_BridgeIdIsSet;
  std::string m_DsttAddr;
  bool m_DsttAddrIsSet;
  int32_t m_DsttPortNum;
  bool m_DsttPortNumIsSet;
  int32_t m_DsttResidTime;
  bool m_DsttResidTimeIsSet;
};

}  // namespace oai::model::pcf

#endif /* TsnBridgeInfo_H_ */
