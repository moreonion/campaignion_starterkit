<?php
/**
 * @file
 * campaignion_form_templates_default.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function campaignion_form_templates_default_content_defaults() {
  $content = array();

  $content['webform_template_basic_personal_data'] = (object) array(
    'exported_path' => 'basic-personal-data',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'first_button_text' => 'Next',
      'next_button_text' => 'Next',
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
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
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => 'Please enter your first name here',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 0,
          'page_num' => 1,
        ),
        1 => array(
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
            'unique' => FALSE,
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
        2 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'E-mail address',
          'type' => 'email',
          'value' => '%get[p5]',
          'extra' => array(
            'width' => '',
            'unique' => TRUE,
            'disabled' => 0,
            'title_display' => 'before',
            'description' => 'Please enter your e-mail address here',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 2,
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Basic personal data',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'webform_template_type',
    'language' => 'en',
    'created' => 1343052466,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'webform_template_basic_personal_data',
    'body' => array(),
  );

  $content['webform_template_basis_personendaten'] = (object) array(
    'exported_path' => 'basis-personendaten',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'first_button_text' => 'Next',
      'next_button_text' => 'Next',
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => 0,
          'form_key' => 'first_name',
          'name' => 'Vorname',
          'type' => 'textfield',
          'value' => '%get[p3]',
          'extra' => array(
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'disabled' => 0,
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => 'Bitte geben Sie hier Ihren Vornamen ein',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 0,
          'page_num' => 1,
        ),
        1 => array(
          'pid' => 0,
          'form_key' => 'last_name',
          'name' => 'Nachname',
          'type' => 'textfield',
          'value' => '%get[p4]',
          'extra' => array(
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'disabled' => 0,
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => 'Bitte geben Sie hier Ihren Nachnamen ein',
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
        2 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'E-Mail Adresse',
          'type' => 'email',
          'value' => '%get[p5]',
          'extra' => array(
            'width' => '',
            'unique' => TRUE,
            'disabled' => 0,
            'title_display' => 'before',
            'description' => 'Bitte geben Sie hier Ihren E-Mail Adresse ein',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 2,
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Basis Personendaten',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'webform_template_type',
    'language' => 'de',
    'created' => 1343052635,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'webform_template_basis_personendaten',
    'body' => array(),
  );

  $content['webform_template_email_protest'] = (object) array(
    'exported_path' => 'email-protest-form',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'first_button_text' => 'Next',
      'next_button_text' => 'Next',
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
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
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 3,
          'page_num' => 1,
        ),
        1 => array(
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
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 4,
          'page_num' => 1,
        ),
        2 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Email address',
          'type' => 'email',
          'value' => '%get[p5]',
          'extra' => array(
            'width' => '',
            'unique' => FALSE,
            'disabled' => 0,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 5,
          'page_num' => 1,
        ),
        3 => array(
          'pid' => 0,
          'form_key' => 'your_message',
          'name' => 'Your message',
          'type' => 'fieldset',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'collapsible' => 0,
            'collapsed' => 0,
            'description' => '',
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 6,
          'page_num' => 1,
        ),
        4 => array(
          'pid' => 4,
          'form_key' => 'email_protest_target',
          'name' => 'Send your protest to',
          'type' => 'protest_target',
          'value' => '',
          'extra' => array(
            'items'                 => '',
            'multiple'              => FALSE,
            'aslist'                => FALSE,
            'description'           => 'Select an email protest target.',
            'private'               => 0,
            'required'              => FALSE,
            'title_display'         => 'before',
            'conditional_component' => '',
            'conditional_operator'  => '=',
            'conditional_values'    => '',
          ),
          'mandatory' => 0,
          'weight' => 0,
          'page_num' => 1,
        ),
        5 => array(
          'pid' => 4,
          'form_key' => 'email_subject',
          'name' => 'Subject',
          'type' => 'textfield',
          'value' => '',
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 1,
          'page_num' => 1,
        ),
        6 => array(
          'pid' => 4,
          'form_key' => 'email_body',
          'name' => 'Your Email',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'cols' => 60,
            'rows' => 5,
            'title_display' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'description' => '',
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
      ),
    ),
    'title' => 'Email protest form',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'webform_template_type',
    'language' => 'en',
    'created' => 1364408439,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'webform_template_email_protest',
    'body' => array(),
  );

  $content['webform_template_full_supporter'] = (object) array(
    'exported_path' => 'full-supporter-form',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 'full_html_with_editor',
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 1,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => 'Submit',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'first_button_text' => 'Next',
      'next_button_text' => 'Next',
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => 0,
          'form_key' => 'gender',
          'name' => 'Gender',
          'type' => 'select',
          'value' => '%get[p2]',
          'extra' => array(
            'items' => 'f|female
m|male
o|other
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 0,
          'page_num' => 1,
        ),
        1 => array(
          'pid' => 0,
          'form_key' => 'form_of_address',
          'name' => 'Form of Address',
          'type' => 'select',
          'value' => '%get[p1]',
          'extra' => array(
            'items' => 'fam|Family
mrs|Mrs
mr|Mr
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 1,
          'page_num' => 1,
        ),
        2 => array(
          'pid' => 0,
          'form_key' => 'title',
          'name' => 'Title',
          'type' => 'textfield',
          'value' => '%get[p4]',
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
          ),
          'mandatory' => 0,
          'weight' => 2,
          'page_num' => 1,
        ),
        3 => array(
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
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 3,
          'page_num' => 1,
        ),
        4 => array(
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
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 4,
          'page_num' => 1,
        ),
        5 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Email address',
          'type' => 'email',
          'value' => '%get[p5]',
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
          ),
          'mandatory' => 1,
          'weight' => 5,
          'page_num' => 1,
        ),
        6 => array(
          'pid' => 0,
          'form_key' => 'email_newsletter',
          'name' => 'Email Newsletter',
          'type' => 'select',
          'value' => 1,
          'extra' => array(
            'items' => '1|Yes, I\'d like to get email newsletters
',
            'multiple' => TRUE,
            'aslist' => FALSE,
            'optrand' => 0,
            'other_option' => FALSE,
            'other_text' => 'Other...',
            'title_display' => 'before',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 6,
          'page_num' => 1,
        ),
        7 => array(
          'pid' => 0,
          'form_key' => 'date_of_birth',
          'name' => 'Date of birth',
          'type' => 'textfield',
          'value' => '%get[p6]',
          'extra' => array(
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'disabled' => 0,
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => 'Bitte folgendermaßen eintragen: 16/9/1983',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 7,
          'page_num' => 1,
        ),
        8 => array(
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 8,
          'page_num' => 1,
        ),
        9 => array(
          'pid' => 0,
          'form_key' => 'mobile_number',
          'name' => 'Mobile number',
          'type' => 'textfield',
          'value' => '%get[p12]',
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
          ),
          'mandatory' => 0,
          'weight' => 9,
          'page_num' => 1,
        ),
        10 => array(
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 10,
          'page_num' => 1,
        ),
        11 => array(
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 11,
          'page_num' => 1,
        ),
        12 => array(
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 12,
          'page_num' => 1,
        ),
        13 => array(
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 13,
          'page_num' => 1,
        ),
        14 => array(
          'pid' => 0,
          'form_key' => 'state',
          'name' => 'State',
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
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 14,
          'page_num' => 1,
        ),
        15 => array(
          'pid' => 0,
          'form_key' => 'direct_mail_newsletter',
          'name' => 'Direct Mail Newsletter',
          'type' => 'select',
          'value' => 1,
          'extra' => array(
            'items' => '1|Yes, I\'d like to get direct mail newsletters
',
            'multiple' => TRUE,
            'aslist' => FALSE,
            'optrand' => 0,
            'other_option' => FALSE,
            'other_text' => 'Other...',
            'title_display' => 'before',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 15,
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Full supporter form',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'webform_template_type',
    'language' => 'en',
    'created' => 1343052600,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'webform_template_full_supporter',
    'body' => array(),
  );

  $content['webform_template_global_supporter'] = (object) array(
    'exported_path' => 'global-supporter-form',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'first_button_text' => 'Next',
      'next_button_text' => 'Next',
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
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
            'description' => '',
            'attributes' => array(),
            'private' => FALSE,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 0,
          'page_num' => 1,
        ),
        1 => array(
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
            'unique' => 0,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => FALSE,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 1,
          'page_num' => 1,
        ),
        2 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Email address',
          'type' => 'email',
          'value' => '%get[p5]',
          'extra' => array(
            'width' => '',
            'unique' => 1,
            'disabled' => 0,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => FALSE,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 2,
          'page_num' => 1,
        ),
        3 => array(
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
            'other_option' => NULL,
            'other_text' => 'Other...',
            'title_display' => 'before',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'private' => FALSE,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 3,
          'page_num' => 1,
        ),
        4 => array(
          'pid' => 0,
          'form_key' => 'external_referrer',
          'name' => 'External referrer',
          'type' => 'hidden',
          'value' => '%get[HTTP_REFERER]',
          'extra' => array(
            'hidden_type' => 'value',
            'conditional_operator' => '=',
            'exclude_cv' => 0,
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 4,
          'page_num' => 1,
        ),
        5 => array(
          'pid' => 0,
          'form_key' => 'ip_adress',
          'name' => 'IP adress',
          'type' => 'hidden',
          'value' => '%get[REMOTE_ADDR]',
          'extra' => array(
            'hidden_type' => 'value',
            'conditional_operator' => '=',
            'exclude_cv' => 0,
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 5,
          'page_num' => 1,
        ),
        6 => array(
          'pid' => 0,
          'form_key' => 'referer',
          'name' => 'Referer',
          'type' => 'hidden',
          'value' => '%get[referer]',
          'extra' => array(
            'hidden_type' => 'value',
            'conditional_operator' => '=',
            'exclude_cv' => 0,
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 6,
          'page_num' => 1,
        ),
        7 => array(
          'pid' => 0,
          'form_key' => 'tag',
          'name' => 'Tag',
          'type' => 'hidden',
          'value' => '%get[tag]',
          'extra' => array(
            'hidden_type' => 'value',
            'conditional_operator' => '=',
            'exclude_cv' => 0,
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 7,
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Global supporter form',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'webform_template_type',
    'language' => 'en',
    'created' => 1343052644,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'webform_template_global_supporter',
    'body' => array(),
  );

  $content['webform_template_mini_supporter'] = (object) array(
    'exported_path' => 'minimal-supporter-form',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'first_button_text' => 'Next',
      'next_button_text' => 'Next',
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
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
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => '',
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
        1 => array(
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
            'unique' => FALSE,
            'title_display' => 'before',
            'description' => '',
            'attributes' => array(),
            'private' => 0,
            'conditional_component' => '',
            'conditional_operator' => '=',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 1,
          'page_num' => 1,
        ),
        2 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Email address',
          'type' => 'email',
          'value' => '%get[p5]',
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
          ),
          'mandatory' => 1,
          'weight' => 2,
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Minimal supporter form',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'webform_template_type',
    'language' => 'en',
    'created' => 1343052630,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'webform_template_mini_supporter',
    'body' => array(),
  );

return $content;
}
