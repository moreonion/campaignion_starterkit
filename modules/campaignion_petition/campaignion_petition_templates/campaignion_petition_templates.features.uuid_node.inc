<?php
/**
 * @file
 * campaignion_petition_templates.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function campaignion_petition_templates_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Minimal supporter form',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'petition',
  'language' => 'en',
  'created' => 1343052630,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2825470e-e582-414d-b01c-e6e71a028075',
  'action_template' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'body' => array(),
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
    'nid' => 4,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => 'Take action now!',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'first_button_text' => 'Next',
    'next_button_text' => 'Next',
    'webform_ajax' => 0,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 1,
        'eid' => 1,
        'status' => 0,
        'email' => 'default',
        'subject' => 'Thank you for your support!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hi [submission:values:first_name],</p>
<p>Thank you for supporting us!</p>
<p>Remember: sharing is caring :-)</p>
<p>Have a great day!<br>
	Your Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
      2 => array(
        'nid' => 1,
        'eid' => 2,
        'status' => 0,
        'email' => 'default',
        'subject' => 'Please confirm your email address!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hi [submission:values:first_name],</p>
<p>Almost there! Just one more click to confirm your support: %confirm_url</p>
<p>Best,<br>
	Your Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
      3 => array(
        'nid' => 1,
        'eid' => 3,
        'status' => 0,
        'email' => 'default',
        'subject' => 'New submission!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Submitted on [current-date:short]</p>
<p>Submitted by [submission:values:first_name] [submission:values:last_name]</p>
<p>Submitted values are:</p>
<p>[submission:values]</p>
<p>The results of this submission may be viewed at:</p>
<p>[submission:url]</p>
<p><br>
	Have a great day! ☺ ☀</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 4,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'first_name',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '[current-page:query:p3]',
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
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 4,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'last_name',
        'name' => 'Last name',
        'type' => 'textfield',
        'value' => '[current-page:query:p4]',
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
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 4,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email address',
        'type' => 'email',
        'value' => '[current-page:query:p5]',
        'extra' => array(
          'width' => '',
          'unique' => TRUE,
          'disabled' => 0,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'multiple' => 0,
          'format' => 'short',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'date' => '2012-07-23 14:10:30 +0000',
  'user_uuid' => '59e16a84-5bfa-438b-be8f-782a0af74750',
);
  $nodes[] = array(
  'title' => 'Basic personal data',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'petition',
  'language' => 'en',
  'created' => 1343052466,
  'tnid' => 5,
  'translate' => 0,
  'uuid' => '2fce5d38-fcbc-48eb-b4a4-5dba5fbea1e2',
  'action_template' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'body' => array(),
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
    'nid' => 5,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => 'Take action now!',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'first_button_text' => 'Next',
    'next_button_text' => 'Next',
    'webform_ajax' => 0,
    'record_exists' => TRUE,
    'roles' => array(),
    'emails' => array(
      1 => array(
        'nid' => 2,
        'eid' => 1,
        'status' => 0,
        'email' => 'default',
        'subject' => 'Thank you for your support!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hi [submission:values:first_name],</p>
<p>Thank you for supporting us!</p>
<p>Remember: sharing is caring :-)</p>
<p>Have a great day!<br>
	Your Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
      2 => array(
        'nid' => 2,
        'eid' => 2,
        'status' => 0,
        'email' => 'default',
        'subject' => 'Please confirm your email address!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hi [submission:values:first_name],</p>
<p>Almost there! Just one more click to confirm your support: %confirm_url</p>
<p>Best,<br>
	Your Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
      3 => array(
        'nid' => 2,
        'eid' => 3,
        'status' => 0,
        'email' => 'default',
        'subject' => 'New submission!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Submitted on [current-date:short]</p>
<p>Submitted by [submission:values:first_name] [submission:values:last_name]</p>
<p>Submitted values are:</p>
<p>[submission:values]</p>
<p>The results of this submission may be viewed at:</p>
<p>[submission:url]</p>
<p><br>
	Have a great day! ☺ ☀</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 5,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'first_name',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '[current-page:query:p3]',
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
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 5,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'last_name',
        'name' => 'Last name',
        'type' => 'textfield',
        'value' => '[current-page:query:p4]',
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
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 5,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'E-mail address',
        'type' => 'email',
        'value' => '[current-page:query:p5]',
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
          'multiple' => 0,
          'format' => 'short',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 5,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'phone_number',
        'name' => 'Phone number',
        'type' => 'textfield',
        'value' => '[current-page:query:p11]',
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
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 5,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'street_address',
        'name' => 'Street address',
        'type' => 'textfield',
        'value' => '[current-page:query:p7]',
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
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 5,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'zip_code',
        'name' => 'ZIP code',
        'type' => 'textfield',
        'value' => '[current-page:query:p8]',
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
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 5,
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'city',
        'name' => 'City',
        'type' => 'textfield',
        'value' => '[current-page:query:p10]',
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
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 6,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 5,
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'country',
        'name' => 'Country',
        'type' => 'select',
        'value' => '[current-page:query:p9]',
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
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 7,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'date' => '2012-07-23 14:07:46 +0000',
  'user_uuid' => '59e16a84-5bfa-438b-be8f-782a0af74750',
);
  $nodes[] = array(
  'title' => 'Basis Personendaten',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'petition',
  'language' => 'de',
  'created' => 1343052635,
  'tnid' => 5,
  'translate' => 0,
  'uuid' => '58a4f50a-b0f0-4e6f-b143-1e3434213063',
  'action_template' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'body' => array(),
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
    'nid' => 6,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => 'Jetzt mitmachen!',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'first_button_text' => 'Weiter',
    'next_button_text' => 'Weiter',
    'webform_ajax' => 0,
    'record_exists' => TRUE,
    'roles' => array(),
    'emails' => array(
      1 => array(
        'nid' => 3,
        'eid' => 1,
        'status' => 0,
        'email' => 'default',
        'subject' => 'Danke für deine Unterstützung!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hallo [submission:values:first_name],</p>
<p>vielen Dank für deine Unterstützung!</p>
<p>Erzähle doch auch gleich deinen Freunden und Bekannten davon ;-)</p>
<p>Herzliche Grüße,<br>
	dein Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
      2 => array(
        'nid' => 3,
        'eid' => 2,
        'status' => 0,
        'email' => 'default',
        'subject' => 'Bitte bestätige deine E-Mail-Adresse!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hallo [submission:values:first_name]!</p>
<p>Bitte bestätige deine Unterstützung, indem du auf diesen Link klickst: %confirm_url</p>
<p>Vielen Dank,<br>
	dein Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
      3 => array(
        'nid' => 3,
        'eid' => 3,
        'status' => 0,
        'email' => 'default',
        'subject' => 'New submission!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Submitted on [current-date:short]</p>
<p>Submitted by [submission:values:first_name] [submission:values:last_name]</p>
<p>Submitted values are:</p>
<p>[submission:values]</p>
<p>The results of this submission may be viewed at:</p>
<p>[submission:url]</p>
<p><br>
	Have a great day! ☺ ☀</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 6,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'first_name',
        'name' => 'Vorname',
        'type' => 'textfield',
        'value' => '[current-page:query:p3]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'title_display' => 'before',
          'description' => 'Bitte geben Sie hier Ihren Vornamen ein',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 6,
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'last_name',
        'name' => 'Nachname',
        'type' => 'textfield',
        'value' => '[current-page:query:p4]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'title_display' => 'before',
          'description' => 'Bitte geben Sie hier Ihren Nachnamen ein',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 6,
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'E-Mail Adresse',
        'type' => 'email',
        'value' => '[current-page:query:p5]',
        'extra' => array(
          'width' => '',
          'unique' => 1,
          'disabled' => 0,
          'title_display' => 'before',
          'description' => 'Bitte geben Sie hier Ihren E-Mail Adresse ein',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'multiple' => 0,
          'format' => 'short',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 6,
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'phone_number',
        'name' => 'Telefon-Nummer',
        'type' => 'textfield',
        'value' => '[current-page:query:p11]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 6,
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'street_address',
        'name' => 'Straße',
        'type' => 'textfield',
        'value' => '[current-page:query:p7]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'page_num' => 1,
      ),
      8 => array(
        'nid' => 6,
        'cid' => 8,
        'pid' => 0,
        'form_key' => 'city',
        'name' => 'Stadt',
        'type' => 'textfield',
        'value' => '[current-page:query:p10]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => 6,
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'zip_code',
        'name' => 'PLZ',
        'type' => 'textfield',
        'value' => '[current-page:query:p8]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'line_items' => NULL,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 7,
        'page_num' => 1,
      ),
      7 => array(
        'nid' => 6,
        'cid' => 7,
        'pid' => 0,
        'form_key' => 'country',
        'name' => 'Country',
        'type' => 'select',
        'value' => '[current-page:query:p9]',
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
          'empty_option' => '',
          'description_above' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 8,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'date' => '2012-07-23 14:10:35 +0000',
  'user_uuid' => '59e16a84-5bfa-438b-be8f-782a0af74750',
);
  return $nodes;
}
