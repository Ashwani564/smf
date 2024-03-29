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
 * QosMonitoringReport.h
 *
 *
 */

#ifndef QosMonitoringReport_H_
#define QosMonitoringReport_H_

#include <string>
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class QosMonitoringReport {
 public:
  QosMonitoringReport();
  virtual ~QosMonitoringReport() = default;

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

  bool operator==(const QosMonitoringReport& rhs) const;
  bool operator!=(const QosMonitoringReport& rhs) const;

  /////////////////////////////////////////////
  /// QosMonitoringReport members

  /// <summary>
  /// An array of PCC rule id references to the PCC rules associated with the
  /// QoS monitoring report.
  /// </summary>
  std::vector<std::string> getRefPccRuleIds() const;
  void setRefPccRuleIds(std::vector<std::string> const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t> getUlDelays() const;
  void setUlDelays(std::vector<int32_t> const value);
  bool ulDelaysIsSet() const;
  void unsetUlDelays();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t> getDlDelays() const;
  void setDlDelays(std::vector<int32_t> const value);
  bool dlDelaysIsSet() const;
  void unsetDlDelays();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t> getRtDelays() const;
  void setRtDelays(std::vector<int32_t> const value);
  bool rtDelaysIsSet() const;
  void unsetRtDelays();

  friend void to_json(nlohmann::json& j, const QosMonitoringReport& o);
  friend void from_json(const nlohmann::json& j, QosMonitoringReport& o);

 protected:
  std::vector<std::string> m_RefPccRuleIds;

  std::vector<int32_t> m_UlDelays;
  bool m_UlDelaysIsSet;
  std::vector<int32_t> m_DlDelays;
  bool m_DlDelaysIsSet;
  std::vector<int32_t> m_RtDelays;
  bool m_RtDelaysIsSet;
};

}  // namespace oai::model::pcf

#endif /* QosMonitoringReport_H_ */
