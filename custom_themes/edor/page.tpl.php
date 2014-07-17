          <?php if ($title): ?>
            <h1<?php print $tabs ? ' class="with-tabs"' : '' ?>><?php print $title ?></h1>
          <?php endif; ?>
          <div class="clearfix">
            <?php print render($page['content']); ?>
          </div>

