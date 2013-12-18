#! /usr/bin/bash

def numberToString(num): # string num
  ret = ''
  if (len(num) == 4):
    ret += digitToString(num[0])
    ret += 'thousand'
    if (num[1] != '0'):
      ret += digitToString(num[1])
      ret += 'hundred'
    if (num[2] != '0'):
      ret += 'and'
      ret += doubleDigitToString(num[2]+num[3])
    if (num[2] == '0' and num[3] != '0'):
      ret += 'and'
      ret += digitToString(num[3])
  elif (len(num) == 3):
    ret += digitToString(num[0])
    ret += 'hundred'
    if (num[1] != '0'):
      ret += 'and'
      ret += doubleDigitToString(num[1]+num[2])
    elif (num[1] == '0' and num[2] != '0'):
      ret += 'and'
      ret += digitToString(num[2])
  elif (len(num) == 2):
    ret += doubleDigitToString(num[0]+num[1])
  else:
    ret += digitToString(num[0])

  return ret


def digitToString(n):
  if (n == '1'):
    return 'one'
  elif (n == '2'):
    return 'two'
  elif (n == '3'):
    return 'three'
  elif (n == '4'):
    return 'four'
  elif (n == '5'):
    return 'five'
  elif (n == '6'):
    return 'six'
  elif (n == '7'):
    return 'seven'
  elif (n == '8'):
    return 'eight'
  elif (n == '9'):
    return 'nine'
  else:
    return ''

def doubleDigitToString(num):
  if (num[0] == '1'):
    return teenToString(num[0]+num[1])
  elif (num[0] == '2' and num[1] == '0'):
    return 'twenty'
  elif (num[0] == '2' and num[1] != '0'):
    return 'twenty'+digitToString(num[1])
  elif (num[0] == '3' and num[1] == '0'):
    return 'thirty'
  elif (num[0] == '3' and num[1] != '0'):
    return 'thirty'+digitToString(num[1])
  elif (num[0] == '4' and num[1] == '0'):
    return 'forty'
  elif (num[0] == '4' and num[1] != '0'):
    return 'forty'+digitToString(num[1])
  elif (num[0] == '5' and num[1] == '0'):
    return 'fifty'
  elif (num[0] == '5' and num[1] != '0'):
    return 'fifty'+digitToString(num[1])
  elif (num[0] == '6' and num[1] == '0'):
    return 'sixty'
  elif (num[0] == '6' and num[1] != '0'):
    return 'sixty'+digitToString(num[1])
  elif (num[0] == '7' and num[1] == '0'):
    return 'seventy'
  elif (num[0] == '7' and num[1] != '0'):
    return 'seventy'+digitToString(num[1])
  elif (num[0] == '8' and num[1] == '0'):
    return 'eighty'
  elif (num[0] == '8' and num[1] != '0'):
    return 'eighty'+digitToString(num[1])
  elif (num[0] == '9' and num[1] == '0'):
    return 'ninety'
  elif (num[0] == '9' and num[1] != '0'):
    return 'ninety'+digitToString(num[1])
  else:
    return ''
  

def teenToString(n):
  if (n == '10'):
    return 'ten'
  if (n == '11'):
    return 'eleven'
  if (n == '12'):
    return 'twelve'
  if (n == '13'):
    return 'thirteen'
  if (n == '14'):
    return 'fourteen'
  if (n == '15'):
    return 'fifteen'
  if (n == '16'):
    return 'sixteen'
  if (n == '17'):
    return 'seventeen'
  if (n == '18'):
    return 'eighteen'
  if (n == '19'):
    return 'nineteen'
  return ''

res = 0
for i in range(1,1001):
  res += len(numberToString(str(i)))
print res
