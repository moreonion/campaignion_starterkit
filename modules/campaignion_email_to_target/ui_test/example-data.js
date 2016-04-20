module.exports = {
  messageSelection: [
    {
      "type": "message-template",
      "label": "foo",
      "filters": [
        {
          "type": "target-attribute",
          "attributeName": "party",
          "operator": "==",
          "value": "bar"
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
      "type": "exclusion",
      "label": "foo",
      "filters": [
        {
          "type": "target-attribute",
          "attributeName": "party",
          "operator": "!=",
          "value": "baz"
        }
      ]
    },
    {
      "type": "message-template",
      "label": "same filter as foo",
      "filters": [
        {
          "type": "target-attribute",
          "attributeName": "party",
          "operator": "==",
          "value": "bar"
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
  targetAttributes: [
    {
      name: 'party',
      label: 'Party',
      description: 'Filter by party'
    },
    {
      name: 'constituency',
      label: 'Constituency',
      description: 'Filter by constituency'
    }
  ],
  hardValidation: true
}
