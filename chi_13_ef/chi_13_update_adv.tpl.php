<div class="<?php print $classes ?>">
  <?php if ($aging): ?>
      <div class="messages error">This issue is more than 10 seconds old.</div>
  <?php endif; ?>
  <span><strong><?php print $text ?>:</strong></span>
  <span><?php print $link ?></span>
</div>