<%-- 
    Document   : jsp311
    Created on : Nov 24, 2015, 9:07:10 AM
    Author     : Rahul Yadav
--%>

<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title> JSTL Custom Tag Example</title>
    </head>
    <body>
        <h2>for Each example</h2>
        <c:forEach var="i" begin="1" end="5">
            <p>Item <c:out value="${i}"/></p>
        </c:forEach>
        <h2>if example</h2>
        <c:if test="${2 <= 5}">
            <p>c:if working!</p>
        </c:if>
        <h2>set example</h2>
        <c:set var="salary" scope="session" value="${2000*2}"/>
        <p><c:out value="${salary}"/></p>
        <h2>url example</h2>
        <a href="<c:url value="http://www.tutorialspoint.com"/>">TEST</a>
        <h2>catch example</h2>
        <c:catch var="catchException">
            <% int x = 2 / 0;%>
        </c:catch>
        <c:if test = "${catchException != null}">
            <p>The exception is : ${catchException} <br />
                There is an exception: ${catchException.message}</p>
        </c:if>
        <h2>import example</h2>
        <c:import var="data" url="http://www.tutorialspoint.com"/>
        <p><c:out value="${data}"/></p>
    </body>
</html>
