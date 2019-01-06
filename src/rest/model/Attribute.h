/**
* Inexor Entity System
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* OpenAPI spec version: 3.0.0
* Contact: info@inexor.org
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Attribute.h
 *
 * 
 */

#ifndef Attribute_H_
#define Attribute_H_


#include "ModelBase.h"

#include <string>

namespace inexor {
namespace entity_system {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Attribute
    : public ModelBase
{
public:
    Attribute();
    virtual ~Attribute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Attribute members

    /// <summary>
    /// 
    /// </summary>
    std::string getAttributeUuid() const;
    void setAttributeUuid(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getDatatype() const;
    void setDatatype(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getValue() const;
    void setValue(std::string const& value);
    
protected:
    std::string m_Attribute_uuid;

    std::string m_Name;

    std::string m_Datatype;

    std::string m_Value;

};

}
}
}
}

#endif /* Attribute_H_ */