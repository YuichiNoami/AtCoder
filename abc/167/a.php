<?php
fscanf(STDIN, '%s', $org);
fscanf(STDIN, '%s', $mod);
$mod = substr($mod, 0, -1);
if ($org === $mod) {
    echo 'Yes';
} else {
    echo 'No';
}