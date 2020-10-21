<?php
$input = trim(fgets(STDIN));
$count = 0;
while (strpos($input, '25') !== false) {
  $input = str_replace('25', '', $input);
  $count++;
}
if ($count < 1 || strlen($input) > 0) {
  $count = -1;
}
echo $count."\n";
