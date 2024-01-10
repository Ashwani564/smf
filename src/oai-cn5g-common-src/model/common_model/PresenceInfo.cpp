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

#include "PresenceInfo.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

PresenceInfo::PresenceInfo() {
  m_PraId                    = "";
  m_PraIdIsSet               = false;
  m_AdditionalPraId          = "";
  m_AdditionalPraIdIsSet     = false;
  m_PresenceStateIsSet       = false;
  m_TrackingAreaListIsSet    = false;
  m_EcgiListIsSet            = false;
  m_NcgiListIsSet            = false;
  m_GlobalRanNodeIdListIsSet = false;
  m_GlobaleNbIdListIsSet     = false;
}

void PresenceInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PresenceInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PresenceInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PresenceInfo" : pathPrefix;

  if (trackingAreaListIsSet()) {
    const std::vector<oai::model::common::Tai>& value = m_TrackingAreaList;
    const std::string currentValuePath = _pathPrefix + ".trackingAreaList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Tai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".trackingAreaList") &&
                  success;

        i++;
      }
    }
  }

  if (ecgiListIsSet()) {
    const std::vector<oai::model::common::Ecgi>& value = m_EcgiList;
    const std::string currentValuePath = _pathPrefix + ".ecgiList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Ecgi& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".ecgiList") && success;

        i++;
      }
    }
  }

  if (ncgiListIsSet()) {
    const std::vector<oai::model::common::Ncgi>& value = m_NcgiList;
    const std::string currentValuePath = _pathPrefix + ".ncgiList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Ncgi& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".ncgiList") && success;

        i++;
      }
    }
  }

  if (globalRanNodeIdListIsSet()) {
    const std::vector<oai::model::common::GlobalRanNodeId>& value =
        m_GlobalRanNodeIdList;
    const std::string currentValuePath = _pathPrefix + ".globalRanNodeIdList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::GlobalRanNodeId& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".globalRanNodeIdList") &&
            success;

        i++;
      }
    }
  }

  if (globaleNbIdListIsSet()) {
    const std::vector<oai::model::common::GlobalRanNodeId>& value =
        m_GlobaleNbIdList;
    const std::string currentValuePath = _pathPrefix + ".globaleNbIdList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::GlobalRanNodeId& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".globaleNbIdList") &&
                  success;

        i++;
      }
    }
  }

  return success;
}

bool PresenceInfo::operator==(const PresenceInfo& rhs) const {
  return

      ((!praIdIsSet() && !rhs.praIdIsSet()) ||
       (praIdIsSet() && rhs.praIdIsSet() && getPraId() == rhs.getPraId())) &&

      ((!additionalPraIdIsSet() && !rhs.additionalPraIdIsSet()) ||
       (additionalPraIdIsSet() && rhs.additionalPraIdIsSet() &&
        getAdditionalPraId() == rhs.getAdditionalPraId())) &&

      ((!presenceStateIsSet() && !rhs.presenceStateIsSet()) ||
       (presenceStateIsSet() && rhs.presenceStateIsSet() &&
        getPresenceState() == rhs.getPresenceState())) &&

      ((!trackingAreaListIsSet() && !rhs.trackingAreaListIsSet()) ||
       (trackingAreaListIsSet() && rhs.trackingAreaListIsSet() &&
        getTrackingAreaList() == rhs.getTrackingAreaList())) &&

      ((!ecgiListIsSet() && !rhs.ecgiListIsSet()) ||
       (ecgiListIsSet() && rhs.ecgiListIsSet() &&
        getEcgiList() == rhs.getEcgiList())) &&

      ((!ncgiListIsSet() && !rhs.ncgiListIsSet()) ||
       (ncgiListIsSet() && rhs.ncgiListIsSet() &&
        getNcgiList() == rhs.getNcgiList())) &&

      ((!globalRanNodeIdListIsSet() && !rhs.globalRanNodeIdListIsSet()) ||
       (globalRanNodeIdListIsSet() && rhs.globalRanNodeIdListIsSet() &&
        getGlobalRanNodeIdList() == rhs.getGlobalRanNodeIdList())) &&

      ((!globaleNbIdListIsSet() && !rhs.globaleNbIdListIsSet()) ||
       (globaleNbIdListIsSet() && rhs.globaleNbIdListIsSet() &&
        getGlobaleNbIdList() == rhs.getGlobaleNbIdList()))

          ;
}

bool PresenceInfo::operator!=(const PresenceInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PresenceInfo& o) {
  j = nlohmann::json();
  if (o.praIdIsSet()) j["praId"] = o.m_PraId;
  if (o.additionalPraIdIsSet()) j["additionalPraId"] = o.m_AdditionalPraId;
  if (o.presenceStateIsSet()) j["presenceState"] = o.m_PresenceState;
  if (o.trackingAreaListIsSet() || !o.m_TrackingAreaList.empty())
    j["trackingAreaList"] = o.m_TrackingAreaList;
  if (o.ecgiListIsSet() || !o.m_EcgiList.empty()) j["ecgiList"] = o.m_EcgiList;
  if (o.ncgiListIsSet() || !o.m_NcgiList.empty()) j["ncgiList"] = o.m_NcgiList;
  if (o.globalRanNodeIdListIsSet() || !o.m_GlobalRanNodeIdList.empty())
    j["globalRanNodeIdList"] = o.m_GlobalRanNodeIdList;
  if (o.globaleNbIdListIsSet() || !o.m_GlobaleNbIdList.empty())
    j["globaleNbIdList"] = o.m_GlobaleNbIdList;
}

void from_json(const nlohmann::json& j, PresenceInfo& o) {
  if (j.find("praId") != j.end()) {
    j.at("praId").get_to(o.m_PraId);
    o.m_PraIdIsSet = true;
  }
  if (j.find("additionalPraId") != j.end()) {
    j.at("additionalPraId").get_to(o.m_AdditionalPraId);
    o.m_AdditionalPraIdIsSet = true;
  }
  if (j.find("presenceState") != j.end()) {
    j.at("presenceState").get_to(o.m_PresenceState);
    o.m_PresenceStateIsSet = true;
  }
  if (j.find("trackingAreaList") != j.end()) {
    j.at("trackingAreaList").get_to(o.m_TrackingAreaList);
    o.m_TrackingAreaListIsSet = true;
  }
  if (j.find("ecgiList") != j.end()) {
    j.at("ecgiList").get_to(o.m_EcgiList);
    o.m_EcgiListIsSet = true;
  }
  if (j.find("ncgiList") != j.end()) {
    j.at("ncgiList").get_to(o.m_NcgiList);
    o.m_NcgiListIsSet = true;
  }
  if (j.find("globalRanNodeIdList") != j.end()) {
    j.at("globalRanNodeIdList").get_to(o.m_GlobalRanNodeIdList);
    o.m_GlobalRanNodeIdListIsSet = true;
  }
  if (j.find("globaleNbIdList") != j.end()) {
    j.at("globaleNbIdList").get_to(o.m_GlobaleNbIdList);
    o.m_GlobaleNbIdListIsSet = true;
  }
}

std::string PresenceInfo::getPraId() const {
  return m_PraId;
}
void PresenceInfo::setPraId(std::string const& value) {
  m_PraId      = value;
  m_PraIdIsSet = true;
}
bool PresenceInfo::praIdIsSet() const {
  return m_PraIdIsSet;
}
void PresenceInfo::unsetPraId() {
  m_PraIdIsSet = false;
}
std::string PresenceInfo::getAdditionalPraId() const {
  return m_AdditionalPraId;
}
void PresenceInfo::setAdditionalPraId(std::string const& value) {
  m_AdditionalPraId      = value;
  m_AdditionalPraIdIsSet = true;
}
bool PresenceInfo::additionalPraIdIsSet() const {
  return m_AdditionalPraIdIsSet;
}
void PresenceInfo::unsetAdditionalPraId() {
  m_AdditionalPraIdIsSet = false;
}
oai::model::common::PresenceState PresenceInfo::getPresenceState() const {
  return m_PresenceState;
}
void PresenceInfo::setPresenceState(
    oai::model::common::PresenceState const& value) {
  m_PresenceState      = value;
  m_PresenceStateIsSet = true;
}
bool PresenceInfo::presenceStateIsSet() const {
  return m_PresenceStateIsSet;
}
void PresenceInfo::unsetPresenceState() {
  m_PresenceStateIsSet = false;
}
std::vector<oai::model::common::Tai> PresenceInfo::getTrackingAreaList() const {
  return m_TrackingAreaList;
}
void PresenceInfo::setTrackingAreaList(
    std::vector<oai::model::common::Tai> const& value) {
  m_TrackingAreaList      = value;
  m_TrackingAreaListIsSet = true;
}
bool PresenceInfo::trackingAreaListIsSet() const {
  return m_TrackingAreaListIsSet;
}
void PresenceInfo::unsetTrackingAreaList() {
  m_TrackingAreaListIsSet = false;
}
std::vector<oai::model::common::Ecgi> PresenceInfo::getEcgiList() const {
  return m_EcgiList;
}
void PresenceInfo::setEcgiList(
    std::vector<oai::model::common::Ecgi> const& value) {
  m_EcgiList      = value;
  m_EcgiListIsSet = true;
}
bool PresenceInfo::ecgiListIsSet() const {
  return m_EcgiListIsSet;
}
void PresenceInfo::unsetEcgiList() {
  m_EcgiListIsSet = false;
}
std::vector<oai::model::common::Ncgi> PresenceInfo::getNcgiList() const {
  return m_NcgiList;
}
void PresenceInfo::setNcgiList(
    std::vector<oai::model::common::Ncgi> const& value) {
  m_NcgiList      = value;
  m_NcgiListIsSet = true;
}
bool PresenceInfo::ncgiListIsSet() const {
  return m_NcgiListIsSet;
}
void PresenceInfo::unsetNcgiList() {
  m_NcgiListIsSet = false;
}
std::vector<oai::model::common::GlobalRanNodeId>
PresenceInfo::getGlobalRanNodeIdList() const {
  return m_GlobalRanNodeIdList;
}
void PresenceInfo::setGlobalRanNodeIdList(
    std::vector<oai::model::common::GlobalRanNodeId> const& value) {
  m_GlobalRanNodeIdList      = value;
  m_GlobalRanNodeIdListIsSet = true;
}
bool PresenceInfo::globalRanNodeIdListIsSet() const {
  return m_GlobalRanNodeIdListIsSet;
}
void PresenceInfo::unsetGlobalRanNodeIdList() {
  m_GlobalRanNodeIdListIsSet = false;
}
std::vector<oai::model::common::GlobalRanNodeId>
PresenceInfo::getGlobaleNbIdList() const {
  return m_GlobaleNbIdList;
}
void PresenceInfo::setGlobaleNbIdList(
    std::vector<oai::model::common::GlobalRanNodeId> const& value) {
  m_GlobaleNbIdList      = value;
  m_GlobaleNbIdListIsSet = true;
}
bool PresenceInfo::globaleNbIdListIsSet() const {
  return m_GlobaleNbIdListIsSet;
}
void PresenceInfo::unsetGlobaleNbIdList() {
  m_GlobaleNbIdListIsSet = false;
}

}  // namespace oai::model::common
