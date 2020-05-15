# coding: utf-8

"""
    Adobe Experience Manager (AEM) API

    Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API  # noqa: E501

    OpenAPI spec version: 3.2.0-pre.0
    Contact: opensource@shinesolutions.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class KeystoreChainItems(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'subject': 'str',
        'issuer': 'str',
        'not_before': 'str',
        'not_after': 'str',
        'serial_number': 'int'
    }

    attribute_map = {
        'subject': 'subject',
        'issuer': 'issuer',
        'not_before': 'notBefore',
        'not_after': 'notAfter',
        'serial_number': 'serialNumber'
    }

    def __init__(self, subject=None, issuer=None, not_before=None, not_after=None, serial_number=None):  # noqa: E501
        """KeystoreChainItems - a model defined in OpenAPI"""  # noqa: E501

        self._subject = None
        self._issuer = None
        self._not_before = None
        self._not_after = None
        self._serial_number = None
        self.discriminator = None

        if subject is not None:
            self.subject = subject
        if issuer is not None:
            self.issuer = issuer
        if not_before is not None:
            self.not_before = not_before
        if not_after is not None:
            self.not_after = not_after
        if serial_number is not None:
            self.serial_number = serial_number

    @property
    def subject(self):
        """Gets the subject of this KeystoreChainItems.  # noqa: E501

        e.g. \"CN=localhost\"  # noqa: E501

        :return: The subject of this KeystoreChainItems.  # noqa: E501
        :rtype: str
        """
        return self._subject

    @subject.setter
    def subject(self, subject):
        """Sets the subject of this KeystoreChainItems.

        e.g. \"CN=localhost\"  # noqa: E501

        :param subject: The subject of this KeystoreChainItems.  # noqa: E501
        :type: str
        """

        self._subject = subject

    @property
    def issuer(self):
        """Gets the issuer of this KeystoreChainItems.  # noqa: E501

        e.g. \"CN=Admin\"  # noqa: E501

        :return: The issuer of this KeystoreChainItems.  # noqa: E501
        :rtype: str
        """
        return self._issuer

    @issuer.setter
    def issuer(self, issuer):
        """Sets the issuer of this KeystoreChainItems.

        e.g. \"CN=Admin\"  # noqa: E501

        :param issuer: The issuer of this KeystoreChainItems.  # noqa: E501
        :type: str
        """

        self._issuer = issuer

    @property
    def not_before(self):
        """Gets the not_before of this KeystoreChainItems.  # noqa: E501

        e.g. \"Sun Jul 01 12:00:00 AEST 2018\"  # noqa: E501

        :return: The not_before of this KeystoreChainItems.  # noqa: E501
        :rtype: str
        """
        return self._not_before

    @not_before.setter
    def not_before(self, not_before):
        """Sets the not_before of this KeystoreChainItems.

        e.g. \"Sun Jul 01 12:00:00 AEST 2018\"  # noqa: E501

        :param not_before: The not_before of this KeystoreChainItems.  # noqa: E501
        :type: str
        """

        self._not_before = not_before

    @property
    def not_after(self):
        """Gets the not_after of this KeystoreChainItems.  # noqa: E501

        e.g. \"Sun Jun 30 23:59:50 AEST 2019\"  # noqa: E501

        :return: The not_after of this KeystoreChainItems.  # noqa: E501
        :rtype: str
        """
        return self._not_after

    @not_after.setter
    def not_after(self, not_after):
        """Sets the not_after of this KeystoreChainItems.

        e.g. \"Sun Jun 30 23:59:50 AEST 2019\"  # noqa: E501

        :param not_after: The not_after of this KeystoreChainItems.  # noqa: E501
        :type: str
        """

        self._not_after = not_after

    @property
    def serial_number(self):
        """Gets the serial_number of this KeystoreChainItems.  # noqa: E501

        18165099476682912368  # noqa: E501

        :return: The serial_number of this KeystoreChainItems.  # noqa: E501
        :rtype: int
        """
        return self._serial_number

    @serial_number.setter
    def serial_number(self, serial_number):
        """Sets the serial_number of this KeystoreChainItems.

        18165099476682912368  # noqa: E501

        :param serial_number: The serial_number of this KeystoreChainItems.  # noqa: E501
        :type: int
        """

        self._serial_number = serial_number

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, KeystoreChainItems):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other