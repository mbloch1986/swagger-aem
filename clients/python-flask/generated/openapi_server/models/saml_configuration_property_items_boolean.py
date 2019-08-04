# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server import util


class SamlConfigurationPropertyItemsBoolean(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name: str=None, optional: bool=None, is_set: bool=None, type: int=None, value: bool=None, description: str=None):  # noqa: E501
        """SamlConfigurationPropertyItemsBoolean - a model defined in OpenAPI

        :param name: The name of this SamlConfigurationPropertyItemsBoolean.  # noqa: E501
        :type name: str
        :param optional: The optional of this SamlConfigurationPropertyItemsBoolean.  # noqa: E501
        :type optional: bool
        :param is_set: The is_set of this SamlConfigurationPropertyItemsBoolean.  # noqa: E501
        :type is_set: bool
        :param type: The type of this SamlConfigurationPropertyItemsBoolean.  # noqa: E501
        :type type: int
        :param value: The value of this SamlConfigurationPropertyItemsBoolean.  # noqa: E501
        :type value: bool
        :param description: The description of this SamlConfigurationPropertyItemsBoolean.  # noqa: E501
        :type description: str
        """
        self.openapi_types = {
            'name': str,
            'optional': bool,
            'is_set': bool,
            'type': int,
            'value': bool,
            'description': str
        }

        self.attribute_map = {
            'name': 'name',
            'optional': 'optional',
            'is_set': 'is_set',
            'type': 'type',
            'value': 'value',
            'description': 'description'
        }

        self._name = name
        self._optional = optional
        self._is_set = is_set
        self._type = type
        self._value = value
        self._description = description

    @classmethod
    def from_dict(cls, dikt) -> 'SamlConfigurationPropertyItemsBoolean':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The SamlConfigurationPropertyItemsBoolean of this SamlConfigurationPropertyItemsBoolean.  # noqa: E501
        :rtype: SamlConfigurationPropertyItemsBoolean
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self) -> str:
        """Gets the name of this SamlConfigurationPropertyItemsBoolean.

        property name  # noqa: E501

        :return: The name of this SamlConfigurationPropertyItemsBoolean.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """Sets the name of this SamlConfigurationPropertyItemsBoolean.

        property name  # noqa: E501

        :param name: The name of this SamlConfigurationPropertyItemsBoolean.
        :type name: str
        """

        self._name = name

    @property
    def optional(self) -> bool:
        """Gets the optional of this SamlConfigurationPropertyItemsBoolean.

        True if optional  # noqa: E501

        :return: The optional of this SamlConfigurationPropertyItemsBoolean.
        :rtype: bool
        """
        return self._optional

    @optional.setter
    def optional(self, optional: bool):
        """Sets the optional of this SamlConfigurationPropertyItemsBoolean.

        True if optional  # noqa: E501

        :param optional: The optional of this SamlConfigurationPropertyItemsBoolean.
        :type optional: bool
        """

        self._optional = optional

    @property
    def is_set(self) -> bool:
        """Gets the is_set of this SamlConfigurationPropertyItemsBoolean.

        True if property is set  # noqa: E501

        :return: The is_set of this SamlConfigurationPropertyItemsBoolean.
        :rtype: bool
        """
        return self._is_set

    @is_set.setter
    def is_set(self, is_set: bool):
        """Sets the is_set of this SamlConfigurationPropertyItemsBoolean.

        True if property is set  # noqa: E501

        :param is_set: The is_set of this SamlConfigurationPropertyItemsBoolean.
        :type is_set: bool
        """

        self._is_set = is_set

    @property
    def type(self) -> int:
        """Gets the type of this SamlConfigurationPropertyItemsBoolean.

        Property type, 1=String, 3=long, 11=boolean, 12=Password  # noqa: E501

        :return: The type of this SamlConfigurationPropertyItemsBoolean.
        :rtype: int
        """
        return self._type

    @type.setter
    def type(self, type: int):
        """Sets the type of this SamlConfigurationPropertyItemsBoolean.

        Property type, 1=String, 3=long, 11=boolean, 12=Password  # noqa: E501

        :param type: The type of this SamlConfigurationPropertyItemsBoolean.
        :type type: int
        """

        self._type = type

    @property
    def value(self) -> bool:
        """Gets the value of this SamlConfigurationPropertyItemsBoolean.

        Property value  # noqa: E501

        :return: The value of this SamlConfigurationPropertyItemsBoolean.
        :rtype: bool
        """
        return self._value

    @value.setter
    def value(self, value: bool):
        """Sets the value of this SamlConfigurationPropertyItemsBoolean.

        Property value  # noqa: E501

        :param value: The value of this SamlConfigurationPropertyItemsBoolean.
        :type value: bool
        """

        self._value = value

    @property
    def description(self) -> str:
        """Gets the description of this SamlConfigurationPropertyItemsBoolean.

        Property description  # noqa: E501

        :return: The description of this SamlConfigurationPropertyItemsBoolean.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this SamlConfigurationPropertyItemsBoolean.

        Property description  # noqa: E501

        :param description: The description of this SamlConfigurationPropertyItemsBoolean.
        :type description: str
        """

        self._description = description
