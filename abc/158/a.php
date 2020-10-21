<?php
fscanf(STDIN, '%s', $in);
if ($in === 'AAA' || $in === 'BBB') {
    echo 'No';
} else {
    echo 'Yes';
}
echo "\n";