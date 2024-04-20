Python 3.10.4 (tags/v3.10.4:9d38120, Mar 23 2022, 23:13:41) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
s="chandan bhai'
SyntaxError: unterminated string literal (detected at line 1)
s="chandan bhai"
import re
s="chandan bhai"
re.search("a",s)
<re.Match object; span=(2, 3), match='a'>
re.search("an",s)
<re.Match object; span=(2, 4), match='an'>
re.split(" ",s)
['chandan', 'bhai']
re.findall("a",s)
['a', 'a', 'a']
re.sub("a","A",s)
'chAndAn bhAi'
re.search("o",s)
re.search(" ",s)
<re.Match object; span=(7, 8), match=' '>
re.search("a",s)
<re.Match object; span=(2, 3), match='a'>
re.search("an",s)
<re.Match object; span=(2, 4), match='an'>
re.search("and",s)
<re.Match object; span=(2, 5), match='and'>
re.findall("an",s)
['an', 'an']
re.findall("and",s)
['and']
t=" ,a,aa,aaa,aaaa,b,c"
re.search("a+",t)
<re.Match object; span=(2, 3), match='a'>
re.search("a*",t)
<re.Match object; span=(0, 0), match=''>
re.search("\a*",t)
<re.Match object; span=(0, 0), match=''>
re.search("\b",t)
re.search("\a",t)
re.search("a-z",t)
t=" ,a,aa,aaa,aaaa,b,c87878"
re.search("a-z",t)
re.findall("a-z",s)
[]
re.findall("A-Z",s)
[]
re.findall("0-3",t)
[]
t=" ,a,aa,aaa,aaaa,b,c,87878"
re.findall("0-3",t)
[]
t="87878"
re.findall("0-3",t)
[]
import re
t="87878"
re.findall("0-3",t)
[]
