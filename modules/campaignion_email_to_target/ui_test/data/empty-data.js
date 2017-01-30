export default {
  messageSelection: [],

  targetAttributes: [
    {
      name: 'first_name',
      label: 'First name',
      description: ''
    },
    {
      name: 'political_affiliation',
      label: 'Political Affiliation',
      description: ''
    }
  ],

  tokens: [
    {
      title: 'First Category',
      description: 'this is my description (1)',
      tokens: [
        {
          title: 'One',
          description: 'first token',
          token: '[myfirsttoken]'
        },
        {
          title: 'Two',
          description: 'second token',
          token: '[mysecondtoken]'
        },
        {
          title: 'Three',
          description: 'third token',
          token: '[mythirdtoken]'
        }
      ]
    },
    {
      title: 'Second Category',
      description: 'this is my description (2)',
      tokens: [
        {
          title: 'One (2)',
          description: 'first token',
          token: '[myfirsttoken]'
        },
        {
          title: 'Two (2)',
          description: 'second token',
          token: '[mysecondtoken]'
        }
      ]
    }
  ],

  hardValidation: false
};
