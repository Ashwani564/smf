/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "HsmfUpdateData.h"

namespace oai {
namespace smf_server {
namespace model {

using namespace oai::model::common;

HsmfUpdateData::HsmfUpdateData() {
  m_Pei                          = "";
  m_PeiIsSet                     = false;
  m_VcnTunnelInfoIsSet           = false;
  m_ServingNetworkIsSet          = false;
  m_AnTypeIsSet                  = false;
  m_SecondAnTypeIsSet            = false;
  m_RatTypeIsSet                 = false;
  m_UeLocationIsSet              = false;
  m_UeTimeZone                   = "";
  m_UeTimeZoneIsSet              = false;
  m_AddUeLocationIsSet           = false;
  m_PauseCharging                = false;
  m_PauseChargingIsSet           = false;
  m_Pti                          = 0;
  m_PtiIsSet                     = false;
  m_N1SmInfoFromUeIsSet          = false;
  m_UnknownN1SmInfoIsSet         = false;
  m_QosFlowsRelNotifyListIsSet   = false;
  m_QosFlowsNotifyListIsSet      = false;
  m_NotifyListIsSet              = false;
  m_EpsBearerIdIsSet             = false;
  m_HoPreparationIndication      = false;
  m_HoPreparationIndicationIsSet = false;
  m_RevokeEbiListIsSet           = false;
  m_CauseIsSet                   = false;
  m_NgApCauseIsSet               = false;
  m__5gMmCauseValue              = 0;
  m__5gMmCauseValueIsSet         = false;
  m_AlwaysOnRequested            = false;
  m_AlwaysOnRequestedIsSet       = false;
  m_EpsInterworkingIndIsSet      = false;
  m_SecondaryRatUsageReportIsSet = false;
  m_SecondaryRatUsageInfoIsSet   = false;
  m_AnTypeCanBeChanged           = false;
  m_AnTypeCanBeChangedIsSet      = false;
  m_MaReleaseIndIsSet            = false;
}

HsmfUpdateData::~HsmfUpdateData() {}

void HsmfUpdateData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const HsmfUpdateData& o) {
  j                      = nlohmann::json();
  j["requestIndication"] = o.m_RequestIndication;
  if (o.peiIsSet()) j["pei"] = o.m_Pei;
  if (o.vcnTunnelInfoIsSet()) j["vcnTunnelInfo"] = o.m_VcnTunnelInfo;
  if (o.servingNetworkIsSet()) j["servingNetwork"] = o.m_ServingNetwork;
  if (o.anTypeIsSet()) j["anType"] = o.m_AnType;
  if (o.secondAnTypeIsSet()) j["secondAnType"] = o.m_SecondAnType;
  if (o.ratTypeIsSet()) j["ratType"] = o.m_RatType;
  if (o.ueLocationIsSet()) j["ueLocation"] = o.m_UeLocation;
  if (o.ueTimeZoneIsSet()) j["ueTimeZone"] = o.m_UeTimeZone;
  if (o.addUeLocationIsSet()) j["addUeLocation"] = o.m_AddUeLocation;
  if (o.pauseChargingIsSet()) j["pauseCharging"] = o.m_PauseCharging;
  if (o.ptiIsSet()) j["pti"] = o.m_Pti;
  if (o.n1SmInfoFromUeIsSet()) j["n1SmInfoFromUe"] = o.m_N1SmInfoFromUe;
  if (o.unknownN1SmInfoIsSet()) j["unknownN1SmInfo"] = o.m_UnknownN1SmInfo;
  if (o.qosFlowsRelNotifyListIsSet())
    j["qosFlowsRelNotifyList"] = o.m_QosFlowsRelNotifyList;
  if (o.qosFlowsNotifyListIsSet())
    j["qosFlowsNotifyList"] = o.m_QosFlowsNotifyList;
  if (o.notifyListIsSet()) j["NotifyList"] = o.m_NotifyList;
  if (o.epsBearerIdIsSet()) j["epsBearerId"] = o.m_EpsBearerId;
  if (o.hoPreparationIndicationIsSet())
    j["hoPreparationIndication"] = o.m_HoPreparationIndication;
  if (o.revokeEbiListIsSet()) j["revokeEbiList"] = o.m_RevokeEbiList;
  if (o.causeIsSet()) j["cause"] = o.m_Cause;
  if (o.ngApCauseIsSet()) j["ngApCause"] = o.m_NgApCause;
  if (o._5gMmCauseValueIsSet()) j["5gMmCauseValue"] = o.m__5gMmCauseValue;
  if (o.alwaysOnRequestedIsSet())
    j["alwaysOnRequested"] = o.m_AlwaysOnRequested;
  if (o.epsInterworkingIndIsSet())
    j["epsInterworkingInd"] = o.m_EpsInterworkingInd;
  if (o.secondaryRatUsageReportIsSet())
    j["secondaryRatUsageReport"] = o.m_SecondaryRatUsageReport;
  if (o.secondaryRatUsageInfoIsSet())
    j["secondaryRatUsageInfo"] = o.m_SecondaryRatUsageInfo;
  if (o.anTypeCanBeChangedIsSet())
    j["anTypeCanBeChanged"] = o.m_AnTypeCanBeChanged;
  if (o.maReleaseIndIsSet()) j["maReleaseInd"] = o.m_MaReleaseInd;
}

void from_json(const nlohmann::json& j, HsmfUpdateData& o) {
  j.at("requestIndication").get_to(o.m_RequestIndication);
  if (j.find("pei") != j.end()) {
    j.at("pei").get_to(o.m_Pei);
    o.m_PeiIsSet = true;
  }
  if (j.find("vcnTunnelInfo") != j.end()) {
    j.at("vcnTunnelInfo").get_to(o.m_VcnTunnelInfo);
    o.m_VcnTunnelInfoIsSet = true;
  }
  if (j.find("servingNetwork") != j.end()) {
    j.at("servingNetwork").get_to(o.m_ServingNetwork);
    o.m_ServingNetworkIsSet = true;
  }
  if (j.find("anType") != j.end()) {
    j.at("anType").get_to(o.m_AnType);
    o.m_AnTypeIsSet = true;
  }
  if (j.find("secondAnType") != j.end()) {
    j.at("secondAnType").get_to(o.m_SecondAnType);
    o.m_SecondAnTypeIsSet = true;
  }
  if (j.find("ratType") != j.end()) {
    j.at("ratType").get_to(o.m_RatType);
    o.m_RatTypeIsSet = true;
  }
  if (j.find("ueLocation") != j.end()) {
    j.at("ueLocation").get_to(o.m_UeLocation);
    o.m_UeLocationIsSet = true;
  }
  if (j.find("ueTimeZone") != j.end()) {
    j.at("ueTimeZone").get_to(o.m_UeTimeZone);
    o.m_UeTimeZoneIsSet = true;
  }
  if (j.find("addUeLocation") != j.end()) {
    j.at("addUeLocation").get_to(o.m_AddUeLocation);
    o.m_AddUeLocationIsSet = true;
  }
  if (j.find("pauseCharging") != j.end()) {
    j.at("pauseCharging").get_to(o.m_PauseCharging);
    o.m_PauseChargingIsSet = true;
  }
  if (j.find("pti") != j.end()) {
    j.at("pti").get_to(o.m_Pti);
    o.m_PtiIsSet = true;
  }
  if (j.find("n1SmInfoFromUe") != j.end()) {
    j.at("n1SmInfoFromUe").get_to(o.m_N1SmInfoFromUe);
    o.m_N1SmInfoFromUeIsSet = true;
  }
  if (j.find("unknownN1SmInfo") != j.end()) {
    j.at("unknownN1SmInfo").get_to(o.m_UnknownN1SmInfo);
    o.m_UnknownN1SmInfoIsSet = true;
  }
  if (j.find("qosFlowsRelNotifyList") != j.end()) {
    j.at("qosFlowsRelNotifyList").get_to(o.m_QosFlowsRelNotifyList);
    o.m_QosFlowsRelNotifyListIsSet = true;
  }
  if (j.find("qosFlowsNotifyList") != j.end()) {
    j.at("qosFlowsNotifyList").get_to(o.m_QosFlowsNotifyList);
    o.m_QosFlowsNotifyListIsSet = true;
  }
  if (j.find("NotifyList") != j.end()) {
    j.at("NotifyList").get_to(o.m_NotifyList);
    o.m_NotifyListIsSet = true;
  }
  if (j.find("epsBearerId") != j.end()) {
    j.at("epsBearerId").get_to(o.m_EpsBearerId);
    o.m_EpsBearerIdIsSet = true;
  }
  if (j.find("hoPreparationIndication") != j.end()) {
    j.at("hoPreparationIndication").get_to(o.m_HoPreparationIndication);
    o.m_HoPreparationIndicationIsSet = true;
  }
  if (j.find("revokeEbiList") != j.end()) {
    j.at("revokeEbiList").get_to(o.m_RevokeEbiList);
    o.m_RevokeEbiListIsSet = true;
  }
  if (j.find("cause") != j.end()) {
    j.at("cause").get_to(o.m_Cause);
    o.m_CauseIsSet = true;
  }
  if (j.find("ngApCause") != j.end()) {
    j.at("ngApCause").get_to(o.m_NgApCause);
    o.m_NgApCauseIsSet = true;
  }
  if (j.find("5gMmCauseValue") != j.end()) {
    j.at("5gMmCauseValue").get_to(o.m__5gMmCauseValue);
    o.m__5gMmCauseValueIsSet = true;
  }
  if (j.find("alwaysOnRequested") != j.end()) {
    j.at("alwaysOnRequested").get_to(o.m_AlwaysOnRequested);
    o.m_AlwaysOnRequestedIsSet = true;
  }
  if (j.find("epsInterworkingInd") != j.end()) {
    j.at("epsInterworkingInd").get_to(o.m_EpsInterworkingInd);
    o.m_EpsInterworkingIndIsSet = true;
  }
  if (j.find("secondaryRatUsageReport") != j.end()) {
    j.at("secondaryRatUsageReport").get_to(o.m_SecondaryRatUsageReport);
    o.m_SecondaryRatUsageReportIsSet = true;
  }
  if (j.find("secondaryRatUsageInfo") != j.end()) {
    j.at("secondaryRatUsageInfo").get_to(o.m_SecondaryRatUsageInfo);
    o.m_SecondaryRatUsageInfoIsSet = true;
  }
  if (j.find("anTypeCanBeChanged") != j.end()) {
    j.at("anTypeCanBeChanged").get_to(o.m_AnTypeCanBeChanged);
    o.m_AnTypeCanBeChangedIsSet = true;
  }
  if (j.find("maReleaseInd") != j.end()) {
    j.at("maReleaseInd").get_to(o.m_MaReleaseInd);
    o.m_MaReleaseIndIsSet = true;
  }
}

RequestIndication HsmfUpdateData::getRequestIndication() const {
  return m_RequestIndication;
}
void HsmfUpdateData::setRequestIndication(RequestIndication const& value) {
  m_RequestIndication = value;
}
std::string HsmfUpdateData::getPei() const {
  return m_Pei;
}
void HsmfUpdateData::setPei(std::string const& value) {
  m_Pei      = value;
  m_PeiIsSet = true;
}
bool HsmfUpdateData::peiIsSet() const {
  return m_PeiIsSet;
}
void HsmfUpdateData::unsetPei() {
  m_PeiIsSet = false;
}
TunnelInfo HsmfUpdateData::getVcnTunnelInfo() const {
  return m_VcnTunnelInfo;
}
void HsmfUpdateData::setVcnTunnelInfo(TunnelInfo const& value) {
  m_VcnTunnelInfo      = value;
  m_VcnTunnelInfoIsSet = true;
}
bool HsmfUpdateData::vcnTunnelInfoIsSet() const {
  return m_VcnTunnelInfoIsSet;
}
void HsmfUpdateData::unsetVcnTunnelInfo() {
  m_VcnTunnelInfoIsSet = false;
}
PlmnId HsmfUpdateData::getServingNetwork() const {
  return m_ServingNetwork;
}
void HsmfUpdateData::setServingNetwork(PlmnId const& value) {
  m_ServingNetwork      = value;
  m_ServingNetworkIsSet = true;
}
bool HsmfUpdateData::servingNetworkIsSet() const {
  return m_ServingNetworkIsSet;
}
void HsmfUpdateData::unsetServingNetwork() {
  m_ServingNetworkIsSet = false;
}
AccessType HsmfUpdateData::getAnType() const {
  return m_AnType;
}
void HsmfUpdateData::setAnType(AccessType const& value) {
  m_AnType      = value;
  m_AnTypeIsSet = true;
}
bool HsmfUpdateData::anTypeIsSet() const {
  return m_AnTypeIsSet;
}
void HsmfUpdateData::unsetAnType() {
  m_AnTypeIsSet = false;
}
AccessType HsmfUpdateData::getSecondAnType() const {
  return m_SecondAnType;
}
void HsmfUpdateData::setSecondAnType(AccessType const& value) {
  m_SecondAnType      = value;
  m_SecondAnTypeIsSet = true;
}
bool HsmfUpdateData::secondAnTypeIsSet() const {
  return m_SecondAnTypeIsSet;
}
void HsmfUpdateData::unsetSecondAnType() {
  m_SecondAnTypeIsSet = false;
}
RatType HsmfUpdateData::getRatType() const {
  return m_RatType;
}
void HsmfUpdateData::setRatType(RatType const& value) {
  m_RatType      = value;
  m_RatTypeIsSet = true;
}
bool HsmfUpdateData::ratTypeIsSet() const {
  return m_RatTypeIsSet;
}
void HsmfUpdateData::unsetRatType() {
  m_RatTypeIsSet = false;
}
UserLocation HsmfUpdateData::getUeLocation() const {
  return m_UeLocation;
}
void HsmfUpdateData::setUeLocation(UserLocation const& value) {
  m_UeLocation      = value;
  m_UeLocationIsSet = true;
}
bool HsmfUpdateData::ueLocationIsSet() const {
  return m_UeLocationIsSet;
}
void HsmfUpdateData::unsetUeLocation() {
  m_UeLocationIsSet = false;
}
std::string HsmfUpdateData::getUeTimeZone() const {
  return m_UeTimeZone;
}
void HsmfUpdateData::setUeTimeZone(std::string const& value) {
  m_UeTimeZone      = value;
  m_UeTimeZoneIsSet = true;
}
bool HsmfUpdateData::ueTimeZoneIsSet() const {
  return m_UeTimeZoneIsSet;
}
void HsmfUpdateData::unsetUeTimeZone() {
  m_UeTimeZoneIsSet = false;
}
UserLocation HsmfUpdateData::getAddUeLocation() const {
  return m_AddUeLocation;
}
void HsmfUpdateData::setAddUeLocation(UserLocation const& value) {
  m_AddUeLocation      = value;
  m_AddUeLocationIsSet = true;
}
bool HsmfUpdateData::addUeLocationIsSet() const {
  return m_AddUeLocationIsSet;
}
void HsmfUpdateData::unsetAddUeLocation() {
  m_AddUeLocationIsSet = false;
}
bool HsmfUpdateData::isPauseCharging() const {
  return m_PauseCharging;
}
void HsmfUpdateData::setPauseCharging(bool const value) {
  m_PauseCharging      = value;
  m_PauseChargingIsSet = true;
}
bool HsmfUpdateData::pauseChargingIsSet() const {
  return m_PauseChargingIsSet;
}
void HsmfUpdateData::unsetPauseCharging() {
  m_PauseChargingIsSet = false;
}
int32_t HsmfUpdateData::getPti() const {
  return m_Pti;
}
void HsmfUpdateData::setPti(int32_t const value) {
  m_Pti      = value;
  m_PtiIsSet = true;
}
bool HsmfUpdateData::ptiIsSet() const {
  return m_PtiIsSet;
}
void HsmfUpdateData::unsetPti() {
  m_PtiIsSet = false;
}
RefToBinaryData HsmfUpdateData::getN1SmInfoFromUe() const {
  return m_N1SmInfoFromUe;
}
void HsmfUpdateData::setN1SmInfoFromUe(RefToBinaryData const& value) {
  m_N1SmInfoFromUe      = value;
  m_N1SmInfoFromUeIsSet = true;
}
bool HsmfUpdateData::n1SmInfoFromUeIsSet() const {
  return m_N1SmInfoFromUeIsSet;
}
void HsmfUpdateData::unsetN1SmInfoFromUe() {
  m_N1SmInfoFromUeIsSet = false;
}
RefToBinaryData HsmfUpdateData::getUnknownN1SmInfo() const {
  return m_UnknownN1SmInfo;
}
void HsmfUpdateData::setUnknownN1SmInfo(RefToBinaryData const& value) {
  m_UnknownN1SmInfo      = value;
  m_UnknownN1SmInfoIsSet = true;
}
bool HsmfUpdateData::unknownN1SmInfoIsSet() const {
  return m_UnknownN1SmInfoIsSet;
}
void HsmfUpdateData::unsetUnknownN1SmInfo() {
  m_UnknownN1SmInfoIsSet = false;
}
std::vector<QosFlowItem>& HsmfUpdateData::getQosFlowsRelNotifyList() {
  return m_QosFlowsRelNotifyList;
}
bool HsmfUpdateData::qosFlowsRelNotifyListIsSet() const {
  return m_QosFlowsRelNotifyListIsSet;
}
void HsmfUpdateData::unsetQosFlowsRelNotifyList() {
  m_QosFlowsRelNotifyListIsSet = false;
}
std::vector<QosFlowNotifyItem>& HsmfUpdateData::getQosFlowsNotifyList() {
  return m_QosFlowsNotifyList;
}
bool HsmfUpdateData::qosFlowsNotifyListIsSet() const {
  return m_QosFlowsNotifyListIsSet;
}
void HsmfUpdateData::unsetQosFlowsNotifyList() {
  m_QosFlowsNotifyListIsSet = false;
}
std::vector<PduSessionNotifyItem>& HsmfUpdateData::getNotifyList() {
  return m_NotifyList;
}
bool HsmfUpdateData::notifyListIsSet() const {
  return m_NotifyListIsSet;
}
void HsmfUpdateData::unsetNotifyList() {
  m_NotifyListIsSet = false;
}
std::vector<int32_t>& HsmfUpdateData::getEpsBearerId() {
  return m_EpsBearerId;
}
bool HsmfUpdateData::epsBearerIdIsSet() const {
  return m_EpsBearerIdIsSet;
}
void HsmfUpdateData::unsetEpsBearerId() {
  m_EpsBearerIdIsSet = false;
}
bool HsmfUpdateData::isHoPreparationIndication() const {
  return m_HoPreparationIndication;
}
void HsmfUpdateData::setHoPreparationIndication(bool const value) {
  m_HoPreparationIndication      = value;
  m_HoPreparationIndicationIsSet = true;
}
bool HsmfUpdateData::hoPreparationIndicationIsSet() const {
  return m_HoPreparationIndicationIsSet;
}
void HsmfUpdateData::unsetHoPreparationIndication() {
  m_HoPreparationIndicationIsSet = false;
}
std::vector<int32_t>& HsmfUpdateData::getRevokeEbiList() {
  return m_RevokeEbiList;
}
bool HsmfUpdateData::revokeEbiListIsSet() const {
  return m_RevokeEbiListIsSet;
}
void HsmfUpdateData::unsetRevokeEbiList() {
  m_RevokeEbiListIsSet = false;
}
Cause HsmfUpdateData::getCause() const {
  return m_Cause;
}
void HsmfUpdateData::setCause(Cause const& value) {
  m_Cause      = value;
  m_CauseIsSet = true;
}
bool HsmfUpdateData::causeIsSet() const {
  return m_CauseIsSet;
}
void HsmfUpdateData::unsetCause() {
  m_CauseIsSet = false;
}
NgApCause HsmfUpdateData::getNgApCause() const {
  return m_NgApCause;
}
void HsmfUpdateData::setNgApCause(NgApCause const& value) {
  m_NgApCause      = value;
  m_NgApCauseIsSet = true;
}
bool HsmfUpdateData::ngApCauseIsSet() const {
  return m_NgApCauseIsSet;
}
void HsmfUpdateData::unsetNgApCause() {
  m_NgApCauseIsSet = false;
}
int32_t HsmfUpdateData::get5gMmCauseValue() const {
  return m__5gMmCauseValue;
}
void HsmfUpdateData::set5gMmCauseValue(int32_t const value) {
  m__5gMmCauseValue      = value;
  m__5gMmCauseValueIsSet = true;
}
bool HsmfUpdateData::_5gMmCauseValueIsSet() const {
  return m__5gMmCauseValueIsSet;
}
void HsmfUpdateData::unset_5gMmCauseValue() {
  m__5gMmCauseValueIsSet = false;
}
bool HsmfUpdateData::isAlwaysOnRequested() const {
  return m_AlwaysOnRequested;
}
void HsmfUpdateData::setAlwaysOnRequested(bool const value) {
  m_AlwaysOnRequested      = value;
  m_AlwaysOnRequestedIsSet = true;
}
bool HsmfUpdateData::alwaysOnRequestedIsSet() const {
  return m_AlwaysOnRequestedIsSet;
}
void HsmfUpdateData::unsetAlwaysOnRequested() {
  m_AlwaysOnRequestedIsSet = false;
}
EpsInterworkingIndication HsmfUpdateData::getEpsInterworkingInd() const {
  return m_EpsInterworkingInd;
}
void HsmfUpdateData::setEpsInterworkingInd(
    EpsInterworkingIndication const& value) {
  m_EpsInterworkingInd      = value;
  m_EpsInterworkingIndIsSet = true;
}
bool HsmfUpdateData::epsInterworkingIndIsSet() const {
  return m_EpsInterworkingIndIsSet;
}
void HsmfUpdateData::unsetEpsInterworkingInd() {
  m_EpsInterworkingIndIsSet = false;
}
std::vector<SecondaryRatUsageReport>&
HsmfUpdateData::getSecondaryRatUsageReport() {
  return m_SecondaryRatUsageReport;
}
bool HsmfUpdateData::secondaryRatUsageReportIsSet() const {
  return m_SecondaryRatUsageReportIsSet;
}
void HsmfUpdateData::unsetSecondaryRatUsageReport() {
  m_SecondaryRatUsageReportIsSet = false;
}
std::vector<SecondaryRatUsageInfo>& HsmfUpdateData::getSecondaryRatUsageInfo() {
  return m_SecondaryRatUsageInfo;
}
bool HsmfUpdateData::secondaryRatUsageInfoIsSet() const {
  return m_SecondaryRatUsageInfoIsSet;
}
void HsmfUpdateData::unsetSecondaryRatUsageInfo() {
  m_SecondaryRatUsageInfoIsSet = false;
}
bool HsmfUpdateData::isAnTypeCanBeChanged() const {
  return m_AnTypeCanBeChanged;
}
void HsmfUpdateData::setAnTypeCanBeChanged(bool const value) {
  m_AnTypeCanBeChanged      = value;
  m_AnTypeCanBeChangedIsSet = true;
}
bool HsmfUpdateData::anTypeCanBeChangedIsSet() const {
  return m_AnTypeCanBeChangedIsSet;
}
void HsmfUpdateData::unsetAnTypeCanBeChanged() {
  m_AnTypeCanBeChangedIsSet = false;
}
MaReleaseIndication HsmfUpdateData::getMaReleaseInd() const {
  return m_MaReleaseInd;
}
void HsmfUpdateData::setMaReleaseInd(MaReleaseIndication const& value) {
  m_MaReleaseInd      = value;
  m_MaReleaseIndIsSet = true;
}
bool HsmfUpdateData::maReleaseIndIsSet() const {
  return m_MaReleaseIndIsSet;
}
void HsmfUpdateData::unsetMaReleaseInd() {
  m_MaReleaseIndIsSet = false;
}

}  // namespace model
}  // namespace smf_server
}  // namespace oai
