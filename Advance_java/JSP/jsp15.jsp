<%-- 
    Document   : jsp15
    Created on : Oct 20, 2015, 10:00:11 AM
    Author     : Rahul Yadav
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Init Method</title>
    </head>
    <body>
        <h1>JSP Init Method Overriding</h1>
        <%!
            public void jspInit() {
                ServletConfig Sconfig = getServletConfig();
                ServletContext Scontext = getServletContext();
                String str = new String("This header was set by the jspInit method!!");
                Scontext.setInitParameter("httpMethods", str);
            }
        %>
        <%= getServletConfig().getInitParameter("httpMethods") %>
        <br>
        <p> Above is example of overriding jspInit() method. </p>
    </body>
</html>
