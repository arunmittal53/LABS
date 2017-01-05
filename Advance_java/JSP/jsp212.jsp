<%-- 
    Document   : jsp23
    Created on : Oct 27, 2015, 10:16:35 AM
    Author     : Rahul Yadav
--%>

<%@page contentType="text/html" pageEncoding="UTF-8" import="Actions.SampleBean"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP useBean, getProperty and setProperty example</title>
    </head>
    <body>
        <jsp:useBean id="sampleBean" class="Actions.SampleBean" scope="page">
            <%-- intialize bean properties --%>
            ${sampleBean.setParam1("Date")}
            <jsp:setProperty name="sampleBean" property="param1" value="${sampleBean.param1}" />
        </jsp:useBean>

        Sample Bean: <%= sampleBean%>

        param1: <%= sampleBean.getParam1()%>
        param2: <%= sampleBean.getParam2()%>
        
    </body>
</html>
