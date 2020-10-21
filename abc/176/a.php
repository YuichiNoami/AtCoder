<?php
fscanf(STDIN, '%d %d %d', $need, $size, $time);
echo ceil($need / $size) * $time;