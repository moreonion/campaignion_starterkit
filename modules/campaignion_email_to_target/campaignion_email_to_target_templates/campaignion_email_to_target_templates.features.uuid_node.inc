<?php
/**
 * @file
 * campaignion_email_to_target_templates.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function campaignion_email_to_target_templates_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Email to target action',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f629c9b4-bccd-4806-ac57-b424275e81fa',
  'type' => 'email_to_target',
  'language' => 'en',
  'created' => 1343052466,
  'tnid' => 'f5645542-33eb-445e-8e6b-8300cf385069',
  'translate' => 0,
  'uuid' => 'f5645542-33eb-445e-8e6b-8300cf385069',
  'revision_uid' => 0,
  'action_template' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'body' => array(),
  'field_intro' => array(),
  'field_main_image' => array(),
  'field_reference_to_campaign' => array(),
  'field_thank_you_pages' => array(),
  'pgbar_default' => array(
    'und' => array(
      0 => array(
        'options' => array(
          'target' => array(
            'target' => array(
              0 => 200,
            ),
            'threshold' => 90,
            'offset' => 0,
          ),
          'texts' => array(
            'intro_message' => 'We need !target signatures.',
            'status_message' => 'Already !current of !target signed the petition.',
            'full_intro_message' => 'Thanks for your support!',
            'full_status_message' => 'We\'ve reached our goal of !target supports.',
          ),
          'display' => array(
            'template' => 'pgbar',
          ),
        ),
        'state' => 1,
      ),
    ),
  ),
  'recent_supporters' => array(
    'und' => array(
      0 => array(
        'options' => array(
          'visible_count' => 6,
          'cycle_toggle' => 0,
          'country_toggle' => 1,
        ),
        'toggle' => 0,
      ),
    ),
  ),
  'supporter_tags' => array(),
  'webform' => array(
    'nid' => 2,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => 'Take action now!',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'first_button_text' => 'Next',
    'next_button_text' => 'Next',
    'record_exists' => TRUE,
    'roles' => array(),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 2,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'first_name',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '%get[p3]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'title_display' => 'before',
          'description' => 'Please enter your first name here',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 2,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'last_name',
        'name' => 'Last name',
        'type' => 'textfield',
        'value' => '%get[p4]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 1,
          'title_display' => 'before',
          'description' => 'Please enter your last name here',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 2,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'E-mail address',
        'type' => 'email',
        'value' => '%get[p5]',
        'extra' => array(
          'width' => '',
          'unique' => 1,
          'disabled' => 0,
          'title_display' => 'before',
          'description' => 'Please enter your e-mail address here',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 4,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'phone_number',
        'name' => 'Phone number',
        'type' => 'textfield',
        'value' => '%get[p11]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => FALSE,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 4,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'street_address',
        'name' => 'Street address',
        'type' => 'textfield',
        'value' => '%get[p7]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => FALSE,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 4,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 4,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'zip_code',
        'name' => 'ZIP code',
        'type' => 'textfield',
        'value' => '%get[p8]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => FALSE,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 4,
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'city',
        'name' => 'City',
        'type' => 'textfield',
        'value' => '%get[p10]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => FALSE,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 6,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 4,
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'country',
        'name' => 'Country',
        'type' => 'select',
        'value' => '%get[p9]',
        'extra' => array(
          'items' => 'AF|Afghanistan
AX|Aland Islands
AL|Albania
DZ|Algeria
AS|American Samoa
AD|Andorra
AO|Angola
AI|Anguilla
AQ|Antarctica
AG|Antigua and Barbuda
AR|Argentina
AM|Armenia
AW|Aruba
AU|Australia
AT|Austria
AZ|Azerbaijan
BS|Bahamas
BH|Bahrain
BD|Bangladesh
BB|Barbados
BY|Belarus
BE|Belgium
BZ|Belize
BJ|Benin
BM|Bermuda
BT|Bhutan
BO|Bolivia
BA|Bosnia and Herzegovina
BW|Botswana
BV|Bouvet Island
BR|Brazil
IO|British Indian Ocean Territory
VG|British Virgin Islands
BN|Brunei
BG|Bulgaria
BF|Burkina Faso
BI|Burundi
KH|Cambodia
CM|Cameroon
CA|Canada
CV|Cape Verde
KY|Cayman Islands
CF|Central African Republic
TD|Chad
CL|Chile
CN|China
CX|Christmas Island
CC|Cocos (Keeling) Islands
CO|Colombia
KM|Comoros
CG|Congo (Brazzaville)
CD|Congo (Kinshasa)
CK|Cook Islands
CR|Costa Rica
HR|Croatia
CU|Cuba
CW|Curaçao
CY|Cyprus
CZ|Czech Republic
DK|Denmark
DJ|Djibouti
DM|Dominica
DO|Dominican Republic
EC|Ecuador
EG|Egypt
SV|El Salvador
GQ|Equatorial Guinea
ER|Eritrea
EE|Estonia
ET|Ethiopia
FK|Falkland Islands
FO|Faroe Islands
FJ|Fiji
FI|Finland
FR|France
GF|French Guiana
PF|French Polynesia
TF|French Southern Territories
GA|Gabon
GM|Gambia
GE|Georgia
DE|Germany
GH|Ghana
GI|Gibraltar
GR|Greece
GL|Greenland
GD|Grenada
GP|Guadeloupe
GU|Guam
GT|Guatemala
GG|Guernsey
GN|Guinea
GW|Guinea-Bissau
GY|Guyana
HT|Haiti
HM|Heard Island and McDonald Islands
HN|Honduras
HK|Hong Kong S.A.R., China
HU|Hungary
IS|Iceland
IN|India
ID|Indonesia
IR|Iran
IQ|Iraq
IE|Ireland
IM|Isle of Man
IL|Israel
IT|Italy
CI|Ivory Coast
JM|Jamaica
JP|Japan
JE|Jersey
JO|Jordan
KZ|Kazakhstan
KE|Kenya
KI|Kiribati
KW|Kuwait
KG|Kyrgyzstan
LA|Laos
LV|Latvia
LB|Lebanon
LS|Lesotho
LR|Liberia
LY|Libya
LI|Liechtenstein
LT|Lithuania
LU|Luxembourg
MO|Macao S.A.R., China
MK|Macedonia
MG|Madagascar
MW|Malawi
MY|Malaysia
MV|Maldives
ML|Mali
MT|Malta
MH|Marshall Islands
MQ|Martinique
MR|Mauritania
MU|Mauritius
YT|Mayotte
MX|Mexico
FM|Micronesia
MD|Moldova
MC|Monaco
MN|Mongolia
ME|Montenegro
MS|Montserrat
MA|Morocco
MZ|Mozambique
MM|Myanmar
NA|Namibia
NR|Nauru
NP|Nepal
NL|Netherlands
AN|Netherlands Antilles
NC|New Caledonia
NZ|New Zealand
NI|Nicaragua
NE|Niger
NG|Nigeria
NU|Niue
NF|Norfolk Island
MP|Northern Mariana Islands
KP|North Korea
NO|Norway
OM|Oman
PK|Pakistan
PW|Palau
PS|Palestinian Territory
PA|Panama
PG|Papua New Guinea
PY|Paraguay
PE|Peru
PH|Philippines
PN|Pitcairn
PL|Poland
PT|Portugal
PR|Puerto Rico
QA|Qatar
RE|Reunion
RO|Romania
RU|Russia
RW|Rwanda
BL|Saint Barthélemy
SH|Saint Helena
KN|Saint Kitts and Nevis
LC|Saint Lucia
MF|Saint Martin (French part)
PM|Saint Pierre and Miquelon
VC|Saint Vincent and the Grenadines
WS|Samoa
SM|San Marino
ST|Sao Tome and Principe
SA|Saudi Arabia
SN|Senegal
RS|Serbia
SC|Seychelles
SL|Sierra Leone
SG|Singapore
SK|Slovakia
SI|Slovenia
SB|Solomon Islands
SO|Somalia
ZA|South Africa
GS|South Georgia and the South Sandwich Islands
KR|South Korea
ES|Spain
LK|Sri Lanka
SD|Sudan
SR|Suriname
SJ|Svalbard and Jan Mayen
SZ|Swaziland
SE|Sweden
CH|Switzerland
SY|Syria
TW|Taiwan
TJ|Tajikistan
TZ|Tanzania
TH|Thailand
TL|Timor-Leste
TG|Togo
TK|Tokelau
TO|Tonga
TT|Trinidad and Tobago
TN|Tunisia
TR|Turkey
TM|Turkmenistan
TC|Turks and Caicos Islands
TV|Tuvalu
VI|U.S. Virgin Islands
UG|Uganda
UA|Ukraine
AE|United Arab Emirates
GB|United Kingdom
US|United States
UM|United States Minor Outlying Islands
UY|Uruguay
UZ|Uzbekistan
VU|Vanuatu
VA|Vatican
VE|Venezuela
VN|Vietnam
WF|Wallis and Futuna
EH|Western Sahara
YE|Yemen
ZM|Zambia
ZW|Zimbabwe
',
          'multiple' => FALSE,
          'aslist' => TRUE,
          'optrand' => 0,
          'other_option' => FALSE,
          'other_text' => 'Other...',
          'title_display' => 'before',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 7,
        'page_num' => 1,
      ),
    ),
  ),
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2012-07-23 14:07:46 +0000',
);
  return $nodes;
}
