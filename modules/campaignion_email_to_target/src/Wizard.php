<?

namespace Drupal\campaignion_email_to_target;

use \Drupal\campaignion_wizard\NodeWizard;

/**
 * A wizard for email_to_target forms.
 *
 * NOTE: Needs form_builder_webform and webform_confirm_email to work.
 */
class Wizard extends NodeWizard {
  public $steps = array(
    'content' => 'ContentStep',
    'form'    => 'WebformStep',
    'emails'  => 'EmailStep',
    'thank'   => 'ThankyouStep',
    'confirm' => 'ConfirmStep',
  );
}
