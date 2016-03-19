<div id='branding' <?php if ($primary_local_tasks): ?>class='darken'<?php endif; ?> > <div class='limiter clearfix'>
  <div class='breadcrumb clearfix'><?php print $breadcrumb ?></div></div>
</div>

<?php if ($primary_local_tasks): ?>
  <div id="tabbed" class="limiter clearfix">
    <div class='tabs clearfix <?php if ($secondary_local_tasks): ?>secondary_tabs_here<?php endif; ?>'>
      <?php if ($primary_local_tasks): ?>
        <div class='primary-tabs links clearfix'><?php print render($primary_local_tasks) ?></div>
        <?php if ($secondary_local_tasks): ?><div class='secondary-tabs links clearfix'><?php print render($secondary_local_tasks); ?></div><?php endif; ?>
      <?php endif; ?>
    </div>
  </div>
<?php endif; ?>

 <div id='page-title'><div class='limiter clearfix'>
  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>
</div></div>

<?php if ($show_messages && $messages): ?>
<div id='console' class="wizard-messages"><div class='limiter clearfix'><?php print $messages; ?></div></div>
<?php endif; ?>

<div id='page'><div id='main-content' class='limiter clearfix'>
  <?php if ($page['help']) print render($page['help']) ?>
  <div id='content' class='page-content clearfix'>
    <?php if (!empty($page['content'])) print render($page['content']) ?>
  </div>
</div></div>

<div id='footer' class='clearfix'>
  <?php if ($feed_icons): ?>
    <div class='feed-icons clearfix'>
      <label><?php print t('Feeds') ?></label>
      <?php print $feed_icons ?>
    </div>
  <?php endif; ?>
</div>
