<%-- 
    Document   : jsp334
    Created on : Nov 17, 2015, 10:30:57 AM
    Author     : Rahul Yadav
--%>

<%@page errorPage="error.jsp" contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Error Handling example</title>
    </head>
    <body>
        <%
            if (true) {
                throw new RuntimeException("My Error Occurred");
            }
        %>
    </body>
</html>
