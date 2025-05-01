#!/bin/bash

# 基準時刻（08:00:00）と現在時刻をUNIX時間に変換
base_time=$(date -d "11:59" +%s)
now_time=$(date +%s)

# 比較
if [ "$now_time" -le "$base_time" ]; then
    ls -la > result.txt
else
    date +"%Y-%m-%d %H:%M"

fi