<%-- 
    Document   : jsp12
    Created on : Oct 20, 2015, 9:25:35 AM
    Author     : Rahul Yadav
--%>
<%@page import="Counter.Counter" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Page Counter</title>
    </head>
    <body>
        <h1>Page Count</h1>
        <p>The page count is <%= Counter.getCount() %> </p>
    </body>
</html>
