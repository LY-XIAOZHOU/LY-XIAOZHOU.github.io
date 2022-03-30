---
layout: mypost
title: use sha1 to encode data by py
categories: [py_usage]
---

# 已知SHA1是一种将明文分成512位块不断加密成160位的一种加密算法
### 利用py中的hashlib库便可直接实现此加密

```javascript
improt hashlib

a ="123123123"          // 例如要将字符串a加密
sha = hashlib.sha1(a.encode('utf-8'))       //将a用utf-8编码后加密
encrypt = sha.hexdigest            //以16进制方式将加密结果存入encrypt
print(encrypt)

```