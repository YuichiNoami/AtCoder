<?php
$money = trim(fgets(STDIN));
$cake = trim(fgets(STDIN));
$donut = trim(fgets(STDIN));
$budget = $money - $cake;
while ($budget > 0) {
  if ($donut <= $budget) {
    $budget -= $donut;
  } else {
    break;
  }
}
echo $budget."\n";
