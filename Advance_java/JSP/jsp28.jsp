<%-- 
    Document   : jsp28
    Created on : Nov 24, 2015, 9:54:05 AM
    Author     : Rahul Yadav
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <jsp:forward page="display2.jsp"> 
            <jsp:param name="name" value="Chaitanya" /> 
            <jsp:param name="site" value="BeginnersBook.com" /> 
            <jsp:param name="tutorialname" value="jsp forward action" /> 
            <jsp:param name="reqcamefrom" value="index.jsp" /> 
        </jsp:forward> 
    </body>
</html>
