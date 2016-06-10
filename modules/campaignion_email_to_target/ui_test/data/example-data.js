var data = {

  messageSelection: [
    {
      "id": 234598,
      "type": "message-template",
      "label": "foo",
      "filters": [
        {
          "id": 123,
          "type": "target-attribute",
          "attributeName": "political_affiliation",
          "operator": "==",
          "value": "Green Party"
        }
      ],
      "message": {
        "subject": "Subject of first message",
        "header": "Header of first message",
        "body": "body of first msg",
        "footer": "goodbye"
      }
    },
    {
      "id": "2345",
      "type": "exclusion",
      "label": "foo",
      "filters": [
        {
          "id": 345,
          "type": "target-attribute",
          "attributeName": "political_affiliation",
          "operator": "!=",
          "value": "Labour"
        }
      ]
    },
    {
      "id": 234,
      "type": "message-template",
      "label": "same filter as foo",
      "filters": [
        {
          "id": 4576557,
          "type": "target-attribute",
          "attributeName": "political_affiliation",
          "operator": "==",
          "value": "Green Party"
        },
        {
          "id": 1239,
          "type": "target-attribute",
          "attributeName": "name",
          "operator": "!=",
          "value": "jane"
        }
      ],
      "message": {
        "subject": "Subject of 3rd message",
        "header": "Header of 3rd message",
        "body": "body of 3rd msg",
        "footer": "goodbye"
      }
    },
    {
      "id": 5678,
      "type": "message-template",
      "label": "same filter as message above",
      "filters": [
        {
          "id": 1239654,
          "type": "target-attribute",
          "attributeName": "name",
          "operator": "!=",
          "value": "jane"
        }
      ],
      "message": {
        "subject": "Subject of 4th message",
        "header": "Header of 4th message",
        "body": "body of 4th msg",
        "footer": "goodbye"
      }
    },
    {
      "id": 1,
      "type": "message-template",
      "label": "",
      "filters": [],
      "message": {
        "subject": "default message subject",
        "header": "default message header",
        "body": "default message body",
        "footer": "default message footer"
      }
    }
  ],

  hardValidation: true

};

module.exports = $.extend({}, require('./empty-data.js'), data);
