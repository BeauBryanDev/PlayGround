
#!/usr/bin/python

def isValid(s):

   stack = [ ] 

   for ch in s : 

      try :

         if ( ch == '(' ) :

            stack.append(ch) 

         if (  ch == ')' ) :

            stack.pop() 

      except :

         return False 

   if ( len( stack ) > 0 ) :

      return  False 

   return True
   

response = isValid('()()()')
print(response)

response = isValid(')(')
print(response)

response = isValid('((a+ b)*c(e)]))')
print(response)

response = isValid('(1 + 2) * (3-4')
print(response)



