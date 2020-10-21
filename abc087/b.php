<?php
$count_500 = trim((fgets(STDIN)));
$count_100 = trim((fgets(STDIN)));
$count_50 = trim((fgets(STDIN)));
$total = intval(trim((fgets(STDIN))));

echo combination(50*50*50, $total, $count_500, $count_100, $count_50)."\n";

function combination($max, $total, $count_500, $count_100, $count_50) {
  $count = 0;
  $memo = [];
  for ($j=0; $j <= $count_500; $j++) {
    for ($k=0; $k <= $count_100; $k++) {
      for ($l=0; $l <= $count_50; $l++) {
        if (!array_key_exists($j.'_'.$k.'_'.$l, $memo)) {
          if ((500*$j + 100*$k + 50*$l) === $total) {
            $count++;
            $memo[$j.'_'.$k.'_'.$l] = true;
          } else {
            $memo[$j.'_'.$k.'_'.$l] = false;
          }
        } else {
            continue;
        }
      }
    }
  }
  return $count;
}
