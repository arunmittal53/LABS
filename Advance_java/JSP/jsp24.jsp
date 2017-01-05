<%-- 
    Document   : jsp24
    Created on : Nov 17, 2015, 9:20:10 AM
    Author     : Rahul Yadav
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="ex" uri="WEB-INF/tlds/custom.tld"%>
<!DOCTYPE html>
<html>
  <head>
    <title>Roll Dice</title>
  </head>
  <body>
      <h3>Rolling the dice...${ex:rollIt()} </h3>
  </body>
</html>
