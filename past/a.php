<?php
fscanf(STDIN, '%d %d %d', $cnt, $train, $taxi);
echo min($train * $cnt, $taxi);