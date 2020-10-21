<?php
$step = trim(fgets(STDIN));
$rows = [];

while (($row = trim(fgets(STDIN))) !== '') {
  $rows[] = explode(' ', $row);
}

$memo = [];

for ($i=0; $i < $step; $i++) {
  $result = 0;
  for ($j=0; $j <= $i; $j++) {
    $result += $rows[0][$j];
  }
  for ($j=$i; $j < $step; $j++) {
    $result += $rows[1][$j];
  }
  $memo[] = $result;
}

echo max($memo)."\n";
