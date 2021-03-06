# coding: utf-8

"""
    Adobe Experience Manager (AEM) API

    Swagger AEM is an OpenAPI specification for Adobe Experience Manager (AEM) API

    OpenAPI spec version: 2.2.0
    Contact: opensource@shinesolutions.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class KeystoreItems(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'alias': 'str',
        'entry_type': 'str',
        'algorithm': 'str',
        'format': 'str',
        'chain': 'list[KeystoreChainItems]'
    }

    attribute_map = {
        'alias': 'alias',
        'entry_type': 'entryType',
        'algorithm': 'algorithm',
        'format': 'format',
        'chain': 'chain'
    }

    def __init__(self, alias=None, entry_type=None, algorithm=None, format=None, chain=None):
        """
        KeystoreItems - a model defined in Swagger
        """

        self._alias = None
        self._entry_type = None
        self._algorithm = None
        self._format = None
        self._chain = None
        self.discriminator = None

        if alias is not None:
          self.alias = alias
        if entry_type is not None:
          self.entry_type = entry_type
        if algorithm is not None:
          self.algorithm = algorithm
        if format is not None:
          self.format = format
        if chain is not None:
          self.chain = chain

    @property
    def alias(self):
        """
        Gets the alias of this KeystoreItems.
        Keystore alias name

        :return: The alias of this KeystoreItems.
        :rtype: str
        """
        return self._alias

    @alias.setter
    def alias(self, alias):
        """
        Sets the alias of this KeystoreItems.
        Keystore alias name

        :param alias: The alias of this KeystoreItems.
        :type: str
        """

        self._alias = alias

    @property
    def entry_type(self):
        """
        Gets the entry_type of this KeystoreItems.
        e.g. \"privateKey\"

        :return: The entry_type of this KeystoreItems.
        :rtype: str
        """
        return self._entry_type

    @entry_type.setter
    def entry_type(self, entry_type):
        """
        Sets the entry_type of this KeystoreItems.
        e.g. \"privateKey\"

        :param entry_type: The entry_type of this KeystoreItems.
        :type: str
        """

        self._entry_type = entry_type

    @property
    def algorithm(self):
        """
        Gets the algorithm of this KeystoreItems.
        e.g. \"RSA\"

        :return: The algorithm of this KeystoreItems.
        :rtype: str
        """
        return self._algorithm

    @algorithm.setter
    def algorithm(self, algorithm):
        """
        Sets the algorithm of this KeystoreItems.
        e.g. \"RSA\"

        :param algorithm: The algorithm of this KeystoreItems.
        :type: str
        """

        self._algorithm = algorithm

    @property
    def format(self):
        """
        Gets the format of this KeystoreItems.
        e.g. \"PKCS#8\"

        :return: The format of this KeystoreItems.
        :rtype: str
        """
        return self._format

    @format.setter
    def format(self, format):
        """
        Sets the format of this KeystoreItems.
        e.g. \"PKCS#8\"

        :param format: The format of this KeystoreItems.
        :type: str
        """

        self._format = format

    @property
    def chain(self):
        """
        Gets the chain of this KeystoreItems.

        :return: The chain of this KeystoreItems.
        :rtype: list[KeystoreChainItems]
        """
        return self._chain

    @chain.setter
    def chain(self, chain):
        """
        Sets the chain of this KeystoreItems.

        :param chain: The chain of this KeystoreItems.
        :type: list[KeystoreChainItems]
        """

        self._chain = chain

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
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
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, KeystoreItems):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
