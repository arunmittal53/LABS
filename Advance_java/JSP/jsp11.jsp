<%-- 
    Document   : jsp11
    Created on : Oct 13, 2015, 11:10:02 AM
    Author     : Rahul Yadav
--%>
<%@page import="java.util.Date" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <%
            Date date = new Date();
        %>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Today's Date</title>
    </head>
    <body>
        <h1>Today's Date</h1>
        <p>Today's date and time is <%= date %> </p> 
    </body>
</html>
