<%-- 
    Document   : jsp14
    Created on : Oct 20, 2015, 9:41:10 AM
    Author     : Rahul Yadav
--%>
<%@page import="java.util.Enumeration" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Init Parameters</title>
    </head>
    <body>
        <h1>JSP Init Parameters</h1>
        <%
            Enumeration en = config.getInitParameterNames();
            int i = 1;
            while (en.hasMoreElements()) {
                String s = en.nextElement().toString();

        %>
        <%= i++ + ". Elements " + s + " = " + getInitParameter(s) %> <br/>
        <% } %>

    </body>
</html>