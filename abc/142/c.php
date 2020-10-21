<?php
fscanf(STDIN, '%d', $cnt);
$logs = explode(' ', trim(fgets(STDIN)));
asort($logs);
$ans = [];
foreach ($logs as $key => $value) {
    $ans[] = $key+1;
}
echo implode(' ', $ans)."\n";