#!/bin/bash
/opt/php53/bin/php /home4/edor/drush/drush.php -r /home4/edor/public_html/data.episcopalrochester.org -l data.episcopalrochester.org php-eval 'data_importer_batch_run()'
