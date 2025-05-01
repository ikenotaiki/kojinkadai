import math

for degree in range(0, 361, 15):
    radian = math.radians(degree)  # 度→ラジアン変換
    sin_val = math.sin(radian)
    cos_val = math.cos(radian)
    try:
        tan_val = math.tan(radian)
    except:
        tan_val = float('inf')  # 無限大にする（90°, 270°など）
    
    print(f"{degree}°: sin={sin_val:.4f}, cos={cos_val:.4f}, tan={tan_val:.4f}")
