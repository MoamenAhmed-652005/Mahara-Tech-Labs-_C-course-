print (type (10)) 

print (type( [4,4,3,5,32]))
#  lec 07 
X = 5


#  to know keyword in python 
#  help ("keywords")

# multi variable 
a ,b , c = 3,5,6
print (a,b,c)

# back slash  
print ("Hello \
 World")

# Carriage Return  => \r
print ("123456\rABCD")

# \n  => new line 
print ("Qus\tis \n beautiful")

# character Hex Value \xhh  
print ("\x4D \x21")

# Concatenation +  الدمج (لازم من نفس النوع البيانات)
a ="Moamen" ;  b ="Ahmed"
print( a + "\n"+ b )
print (a,b) # Combine also like c

# Tripple single or double Quote (Escape Special characters \  )

My_str = """First
second "test"
Third """
print (My_str)

# Indexing ( Access Single Item From list,tubles,string)

My_str = "Python"
print(My_str [3])   # index 3 => h
print (My_str [-1]) # index -1,-2,-3... Access from end 

# Slicing ( Access Multiple Sequence Items)
# [Start :End]   1- End Not included
#                2-if we dont write Start (Starts from 0)
#                3-if we dont write End ( سيصل الي اخر النص عالطول)  
#                4- one step  defult        
My_str = "We Love Python"

print (My_str [0:5])
print (My_str [:15])
print (My_str [:90])
print (My_str [:]) # Full DAta

#    [start:End:Step] هيمشي علي حسب الخطوات 

print(My_str [0::1]) # Full DAta
print (My_str [::2]) # كل خطوتين هياخد حرف وهكذا

# ---------------------- Strings Methods ------------------------- 
# 1- Syntax: str_var.strip ( الحاجة المطلوب مسحها من اليمين والشمال) 
#               .rstrip( من اليمين الحاجة المطلوب مسحها)
#               .lstrip(الحاجة المطلوب مسحها من اليسار )     
 
E ="     MAzen Ahmed ALsayed      "
print (E.strip())

E = "@#######@@@@@@@MAzen Ahmed ALsayed########@@@@@@@"
print (E.rstrip("@#"))

# 2-Syntax:  str_var.title () بتخلي حروف اول الكلمات كابيتل حتي ولو كان كابيتل واي حرف بعد الرقم ايضا 

E = "I love embeded system & 4g"
print (E.title())

# 3- Syntax : str_var.capitalize ()

E = "I love embeded system"
print (E.capitalize())

 # 4- Syntax : str_var.zfill (NUM) طرية عرض لارقام شبه الساعة

v,c,b,n ="5","55","555","5555"
print (v.zfill(4))
print (c.zfill(4))
print (b.zfill(4))
print (n.zfill(4))

# 5- Syntax  : str_var.upper() بتخلي الحرف كلها كابتل
# 6- Syntax : str_var.lower() بتخلي الحروف سمول
W ="embeded system "
print (W.upper())
print (W.lower())

# 7- Syntax : str_var.split (الحاجة اللي هيقسم علي اساسها)   بيقسم النص الي عناصر من النص الي ليست 
#                   .rsplit (الحاجة اللي هيقسم علي اساسها)        نفس اللي فوق بس من اليمين

Q = " I love Pythion & C"
print  ( Q.split())


Q = " I-love -Pythion & C"
print  ( Q.split("-"))

Q = " I-love -Pythion-and-C"
print  ( Q.rsplit("-",2))  # (الحاجة اللي هيقسم علي اساسها,maxsplit)

# 8- Syntax : str_var.center(شكل,رقم) هيخلي النص في المنتصف ويتملي علي حسب الشكل  

Q = "Moamen"
print (Q.center(9,"$"))

# 9- Syntax : str_var.count(str,start,end)    هيجبلك كم مرة ذكرت الكلمة وتحدد بداية ونهاية البحث 
W = "I love Embeded System "
print (W.count("love",0,6))

# 10- Syntax : str_var.swapcase() بتبدل كل حرف من سمول لكابتل والعكس
W = "I love Embeded System "
print(W.swapcase())

# 11- Syntax : str_var.startswith("char",start,end) search for char in first of string and return bool
W = "I love Embeded System "
print (W.startswith("l",2,5)) 

# 12- Syntax : str_var.endswith("char",start,end) search for char in last of string and return bool
R = "I love Embeded System"
print (R.endswith("m"))
print (R.endswith("d",0,12))

# 13- Syntax : str_var.rjust("char",width)  شبه سنتر بس عاليمين
#                     .ljust("char",width) شبه سنتر بس عاليسار 
d = "Moamen"
print (d.rjust (9,"-"))
print (d.ljust (9,"_"))

# 14- Syntax : str_var.index("char") return index of char
#     1- print (d.index("M"))  return Error if not found
d = "I love Python"
print (d.index("o") ) 

# 15- Syntax : str_var.find("char")  return index of char
d = "I love Python"
print (d.find ("M"))  # return -1 if not

# 16- Syntax : str_var.splitlines() return str lines element as list 
e = """first
secound
third """
print (e.splitlines() ) 
e = "First\nsecound\nThird"
print (e.splitlines())

# 17- Syntax : str_var.expandtabs(tabsize) بتتحكم في المسافات

e = "I Love You"
print (e.expandtabs(3))  

# 17- Syntax : str_var.istitle() -> bool   يشوف دااذا كان نص بالتيتل ولا لأ
r = "I love Python And 3G" # is title
print (r.istitle())

# 18- Syntax : str_var.isspace() -> bool
t = "       " # space
print (t.isspace())

# 19- Syntax : str_var.isidentifier() -> bool  هل ينفع النص يبقي متغير
t = "مصر أم الدنيا"
print (t.isidentifier())
t =  "Python"
print (t.isidentifier())

# 20- Syntax : str_var.islower() -> bool
t = "I love u" # فيه حرف كابتل
print (t.islower())

# 21- Syntax : str_var.isalpha -> bool بيشوف حروف بس 
R = "IloveMaser"
print (R.isalpha())

# 21- Syntax : str_var.isalnum -> bool
T = "sdfsd 555 "   # فيه مسافة
print (T.isalnum())

T = "sdfsd555"     # صح
print (T.isalnum())

# 22- Syntax : str_var.replace(Old value,New value,count كم عدد التبديل)
y = "Hello ONE TWO Three ONE ONE"
print (y.replace("ONE","1",2))

# 23- Syntax : "Sep".join(str_var)  عكس ال split بتحول من ليست الي نص
Y = ["Moamen","Ahmed","Al-sayed"]
print ("-".join(Y))
print (" ".join(Y))


# --------------------------String Formatting  --------------------------
#   --------- old one --------------
#  %d %s -> place holder
Na ="Moamen"; age = 20 ; Rank = 15
print ("My name is %s\nAge : %d\nRank : %.1f" %(Na,age,Rank))

# Trunacate String  اعدل في النص 
# %.num s -> Take num of string words

U = "Helloo, My name is Moamen and I love Python "
print ("My Title is %.8s " %U)


#   --------- New one --------------
# {:d} {:s} {} -> place holder
# {5} {8} {0}-> indexes
# {index:formatting data}
# and we use method called -> .format(Var)   وترتيب الحاجة مبني علي الاراي من 0

Na ="Moamen"; age = 20 ; Rank = 15
print ("My name is {:s}\nAge : {:d}\nRank : {:.1f}".format(Na,age,Rank)) 
# Trunacate String  اعدل في النص 
# %.num s -> Take num of string words

U = "Helloo, My name is Moamen and I love Python "
print ("My Title is {:.7s} ".format(U)) 

# Money Format
T = 5001623545
print ("My Money is : {:_d}".format(T))  # Note (-,&^%) are not available in {} // _ لكل 3 ارقام 
# ReArrange Items -> arrange of Var as indexes
T,U,I = "One","Two","Three"
print ("{} {} {}".format (T,U,I)) # -> [0] = T  [1]=U  [2] =I
print ("{1} {0} {2}".format(T,U,I))

T,U,I = 10,20,30
print ("{} {} {}".format (T,U,I)) # -> [0] = T  [1]=U  [2] =I
print ("{1:d} {0:f} {2:.2f}".format(T,U,I))

#  Format in version 3.6+  (awesome !)
T,U,I = "One","Two","Three"
print (f"{U} {T} {I}")

# -------------------- Numbers  --------------------
#   Int & Float 
U = 9 # Int
Y = 7.0 # Float 
print (type(U))
print (type(Y)) 

# Complex Num
U = 6+8j
print ("Re = {}".format(U.real) )
print ("Im = {}".format(U.imag)) # imag -> imaginary
# [1] You can Convert Int to Float or Complex
# [2] You can Convert Float to INt or Complex
# [3] You cannot Convert Complex to anyone

print (float(100)) # converted to Float()
print (int(100.54) ) # converted to Int()

# Arithmetic Operators
print ( 5 + 10 * 100) 
print ((5 + 10 )*100)  

# Modulus
print (20 % 5) # 0
print (22 % 5) # 2 

# Exponent **
print(2 ** 4)

# Floor Division
print (110 // 20) 
print (120 // 20)

# ---------------------- Lists ----------------------
# [1] List Items Are Enclosed in square brackets []
# [2] list Are Ordered , To use Index To access Items
# [3] List Are Mutable -> Add, Delete,Edit (Modified)
# [4] List Can Have Different Data Types
# [5] List has No Unique Item

Mylist = [ "One", 1 ,"Two", 100.4 , 3+6j ]
print (Mylist)
print (Mylist [1]) # Access By index
print (Mylist [-1]) # اخر واحد

print (Mylist [1:3]) # end not included
Mylist[3] = "3" 
print (Mylist)
Mylist[0:2] =  [] # clear 
 
# --------------------- Lists Method ------------------------
# append () -> add element to list
Mylist = ["One","alaa","Moamen"]
Mylist.append("ahmed")
print (Mylist[3])
Mylist_2 = ["moamen", 100.78 ,"Power","Current"]
Mylist.append(Mylist_2)
print(Mylist[4]) # all second list
print(Mylist[4][3]) # access the index of Mylist_2

# extend() -> combine the lists to be in one list
a = [1.3,421,41,41] ; b =[4,"Omnrw",9,20] 
a.extend(b)
print(a[4]) # as element in a 

# remove() -> to remove only one element  from list although if it reapets
a =["moamen","ahmed","21",312,"moamen"]
a.remove("moamen")
print (a)

# sort() -> ترتيب تصاعدي 
# sort(reverse=True) ترتيب تنازلي
b = [3,43.5,123,1,4,5,2,5,3,4]
b.sort() # تصاعدي
print (b)
b.sort(reverse= True) #تنازلي
print(b)

c =["A","M","s"] # Must the same data type
c.sort() 
print (c)

# reverse()  -> reverse the element not sorting 
c =[213,"mOAMEN",5321,4214,21,2,4]
c.reverse()
print(c)

# clear() -> clear element of list not delete it
d = [213,4124,44324,"Osamsa"]
d.clear() ; print (d)

# copy() -> shallow copy بيعمل نسخة من اليست بغض النظر عن التعديل في الاصلي
A = ["adasd","dsadf",123,4124,425]
C = A.copy()
A.append("ABC")
print(C)
print(A)
# count (ele) -> بتوشف كم مرة ذر العنصر
# index() -> return index of search item
a =["moamen","ahmed","21",312,"Al-sayed"]
print (a.count("moamen"))
print (a.index("ahmed"))

# insert(ind,object) -> add object before ind 
a =["moamen","ahmed","21",312]
a.insert(1,"test")
print(a)
a.insert(-1,"RT")
print(a)

# pop(ind) ->return item by giving ind
a =["moamen","ahmed","21",312]
print(a.pop(2))
# ----------------------- Tuples ---------------
# [1] Tuple items are enclosed in Parentheses () or without it 
# [2] Tuple are ordered to use index to access item
# [3] Tuple Are immutable -> we cannot Add or delete (not Modified)
# [4] Tuple Can have different data types 
# 
# 
R = (1 ,34 , 4, 4, 5 ,"ALi", True,"Moamen")
T = 1 ,34 , 4, 4, 5 ,"ALi", True,"Moamen"
print (R[2])
print (R[-1])
print (type(T))
# R [2] = "Test"  -> imutable

# Tuple With one element
T = "Moamen",  
# Tuples Concatenastion

a = (1,3,4,3,2)
b = 4,21,4,2,1
print (a + b)

# Tuple,List,String -> Repeat (*)
U = "ALI Ahmed"
T = [123,412,"Osama",23]
Y = (12,421,412,"Moamen")

print (U * 4)
print (T * 4)
print (Y * 4)

# --------------------- Tuple Method ------------------------
#   count() -> يشوف عدد المرات
a =(1,4,3,2,5,6,7,8,9,2)
print(a.count(2))
# index(ele)
print (a.index(2)) # if Item repeated the first element index will appeare

print (f"Our Num is = {a.index(2)}") 

# Tuple Destruct   -> بوزع قيم التابل علي 3 متغيرات
a = ("A", "B" ,"Test", "c" ) 
x, y, _, z = a   # ignore by _ 
print (x,y,z)

# ---------------------- Set ----------------------
# [1] Set items are enclosed in curly Brakets {}
# [2]  Set items are not ordered and not Indexing  -> Not arranged
# [3]  Set indexing and Slicing cannot Done!
# [4] Set has only Immutable Data Types (Numbers,Strings,Tuples) but List & dict Not
# [5] Set Items is Unique -> لا يوجد تكرار  

P = {1,4,5,36,32,35,"Moamen",True,100.98}
print (P)  # Not arranged
O = {1,3,"Moamdn","ahmed",3}
print (O) 

# ----------------------- Set Methods -------------------------
# clear() -> clear elements not set

a ={1,5,64,4}
a.clear()
print (a)

# union(new ele) -> combine with 2 set and ignore the repeated element

a = {1,5,64,4,3}
b = {2,4,14,1,3}
X = {4,"mosmsn",423,23}
print (a | b) # used to combine 2 set
print(a.union(b,X))

# update() ->combine with 2 set and ignore the repeated element
j ={1,2 ,2,4}
K = {12, "F","true",2,1,4,5}
j.update(K)
j.update(["Moamen","Ahmed",43,True,98.67 ]) # you can combine with list too
print (j)


#  add() -> add only one element
a ={1,5,64,4}
a.add (22)
print (a)

# copy() -> Shallow copy
a ={1,5,64,4}
b =a.copy()
print (b)

# remove() -> remove ele in Set
#       Note : return error if not found
a ={1,5,64,4}
a.remove(64)
print (a)
# a.remove(2)  -> error

# discard() ->     Note : return no error if not found

a ={1,5,64,4}
a.discard(2)
print (a)

#  pop() -> return random element
a ={1,5,64,4}
print (a.pop())

# difference()  ->  difference between 2 Sets and dont change the original Set
j = {1, 2,3,4} # dont change
K = {1, 2,"dasd","Ahmed"}
print(j.difference(K))  # j - K

print ("*" * 40)  # Separator  

# difference_update() ->  difference between 2 Sets and change the original Set
c = {1, 2, 3, 5}
d = {1, 2, 3, 4}
c.difference_update(d)
print (c) 

# intersection() ->-> التقاطع بين Set بدون تعديل الاول
e = {1, 2, 3, 4}
f = {"Moamen","MAzen",2 ,3}
print(e.intersection(f)) # e & f

# intersection_update() ->-> التقاطع بين Set مع تعديل الاول 
e = {1, 2, 3, 4}
f = {"Moamen","MAzen",2 ,3}
e.intersection_update(f) # e & f
print (e)
print ("*" * 60)

# symmetric_difference () العناصر الباقية بعد التقاطع من كلا سيتس
e = {1, 2, 3, 4}
f = {"Moamen","MAzen",2 ,3}
print(e.symmetric_difference(f))

# symmetric_difference_update ()  العناصر الباقية بعد التقاطع من كلا سيتس وبتعدل في الاصلي
e = {1, 2, 3, 4}
f = {"Moamen","MAzen",2 ,3}
e.symmetric_difference_update(f)
print(e)
# ----------------------- Bool Method -----------------------------------
print ("*" * 60," Bool Method")

# issuperset ()  
a ={1, 2, 3, 4}
b = {1, 2, 3,}
print (a.issuperset(b)) # -> b elements must all in a 
C = {1, 2, 3, 76,8}
print (a.issuperset(C)) # False
print ("*" * 60)

# issubset()  
a ={1, 2, 3, 4}
b = {1, 2, 3}
C = {1, 2, 3,4 ,76,8}
print (a.issubset(b)) # 
print (a.issubset(C)) #  -> C combined all a and more
print ("*" * 60)

# isdisjoint() -> no intersection between 2 Sets
g = {1, 2 ,3 ,4}
h = {1, 2, 3}
i = {10, 11, 12, 13}
print (g.isdisjoint(h))
print (g.isdisjoint(i))

# ----------------------- Dictionary -----------------------
# [1]  Dict items are enclosed in curly Brakets {}
# [2] Dict Syntax  Key : Value
# [3] Dict Key must be Immutable -> (Num,string,Tuple) List not Allowed
# [4] Dict Value have any data types
# [5] Dict Key need to be Unique -> if repeated the last key value will happened
# [6] Dict Not arranged as index -> you can access by Nameof_Dict ["Name of Key"]
print ("*" * 60)


user = {
    # Key : Value
      "Name" :"Moamen",
      "Age" : 21 ,
      "Country": "Egypt" , 
      "Skills" : ["C","Embeded System","Python"]

}

print (user)
print (user["Age"]) # access the Key
print (user.get("Name")) # access the Key by get(key)
# Nameof_Dict.keys() -> all keys
# Nameof_Dict.values() -> all values
print (user.keys())
print (user.values())


# 2d- or nested Dictionary 


salary = {
    "user_data" : {
    # Key : Value
      "Name" :"Moamen",
      "Age" : 21 ,
      "Country": "Egypt" , 
      "Skills" : ["C","Embeded System","Python"]

        },
    "salary" : 100.757 
   
}
print (salary["user_data"])
print (salary["user_data"]["Name"]) # access the dict to dict
print(len(salary)) # show the length of it
print(len(salary["user_data"])) # show the length of dict to dict

# Create the Dict from var
salary = {
    "user_data" : user ,
    "salary" : 100.757 
} 

# ------------------ Dict Methods --------------------------
# clear() -> clear all elements not dict
user.clear()
print(user)

# update()  -> update the dict -> change the value 
user = {
    # Key : Value
      "Name" :"Moamen",
      "Age" : 21 ,
    }
user.update({"Name" :"ahmed"})   # change value
user["country"] =  " Egypt " # add ele
print(user)

# copy() -> shallow copy
print("-" * 80)

main = {
    "age" : 21
}

a = main.copy()
print (a)

# keys()  values
print (user.keys())
print (user.values())

# setdefault()  -> add new element 2) dont change the value

user = {
    # Key : Value
      "Name" :"Moamen",
      "Age" : 21 ,
    }
print("-" * 80)
print (user)
user.setdefault("Age",25) # not change
print (user)

# popitem() -> show the last item in Dict -> in versions up 3.7

user = {
    # Key : Value
      "Name" :"Moamen",
      "Age" : 21 ,
    }
print (user.popitem())

# items()  -> to store all Dict elements in Var ,althogh Modified
user = {
    # Key : Value
      "Name" :"Moamen",
      "Age" : 21 ,
    } 

all = user # True
all = user.items() # output as Tuple and List
print (all)
print("-" * 80)

#?  fromkeys() -> create Dict from Var

a = ("NAme","Age","Skills")
b = "moamen",32,"ES" 
print(dict.fromkeys(a,b)) #? -> b is passed to all a as Value 
