<%-- 
    Document   : error
    Created on : Nov 17, 2015, 10:32:35 AM
    Author     : Rahul Yadav
--%>

<%@page isErrorPage="true" contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Error Page</title>
    </head>
    <body>
        <h1>Error Occurred</h1>
        <% exception.printStackTrace(response.getWriter()); %>
    </body>
</html>
