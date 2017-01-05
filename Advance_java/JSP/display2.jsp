<%-- 
    Document   : display2
    Created on : Nov 24, 2015, 9:54:46 AM
    Author     : Rahul Yadav
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Display Page</title>
    </head>
    <body>
        <h2>Hello this is a display.jsp Page</h2>
        My name is: <%=request.getParameter("name")%><br>
        Website: <%=request.getParameter("site")%><br>
        Topic: <%=request.getParameter("tutorialname")%><br>
        Forward Request came from the page: <%=request.getParameter("reqcamefrom")%>
    </body>
</html>
