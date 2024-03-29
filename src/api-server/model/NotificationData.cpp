/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NotificationData.h"

namespace oai {
namespace smf_server {
namespace model {

using namespace oai::model::common;

NotificationData::NotificationData() {
  m_NfInstanceUri       = "";
  m_NfProfileIsSet      = false;
  m_ProfileChangesIsSet = false;
}

NotificationData::~NotificationData() {}

void NotificationData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const NotificationData& o) {
  j                  = nlohmann::json();
  j["event"]         = o.m_Event;
  j["nfInstanceUri"] = o.m_NfInstanceUri;
  if (o.nfProfileIsSet()) j["nfProfile"] = o.m_NfProfile;
  if (o.profileChangesIsSet() || !o.m_ProfileChanges.empty())
    j["profileChanges"] = o.m_ProfileChanges;
}

void from_json(const nlohmann::json& j, NotificationData& o) {
  j.at("event").get_to(o.m_Event);
  j.at("nfInstanceUri").get_to(o.m_NfInstanceUri);
  if (j.find("nfProfile") != j.end()) {
    j.at("nfProfile").get_to(o.m_NfProfile);
    o.m_NfProfileIsSet = true;
  }
  if (j.find("profileChanges") != j.end()) {
    j.at("profileChanges").get_to(o.m_ProfileChanges);
    o.m_ProfileChangesIsSet = true;
  }
}

std::string NotificationData::getEvent() const {
  return m_Event;
}
void NotificationData::setEvent(std::string const& value) {
  m_Event = value;
}
std::string NotificationData::getNfInstanceUri() const {
  return m_NfInstanceUri;
}
void NotificationData::setNfInstanceUri(std::string const& value) {
  m_NfInstanceUri = value;
}
NFProfile NotificationData::getNfProfile() const {
  return m_NfProfile;
}
void NotificationData::setNfProfile(NFProfile const& value) {
  m_NfProfile      = value;
  m_NfProfileIsSet = true;
}
bool NotificationData::nfProfileIsSet() const {
  return m_NfProfileIsSet;
}
void NotificationData::unsetNfProfile() {
  m_NfProfileIsSet = false;
}
std::vector<ChangeItem>& NotificationData::getProfileChanges() {
  return m_ProfileChanges;
}
void NotificationData::setProfileChanges(std::vector<ChangeItem> const& value) {
  m_ProfileChanges      = value;
  m_ProfileChangesIsSet = true;
}
bool NotificationData::profileChangesIsSet() const {
  return m_ProfileChangesIsSet;
}
void NotificationData::unsetProfileChanges() {
  m_ProfileChangesIsSet = false;
}

}  // namespace model
}  // namespace smf_server
}  // namespace oai
