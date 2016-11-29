<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.io.*,java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>輸出</title>
</head>
<body>
<ul>
<li><p><b>姓名:</b>
   <%= request.getParameter("usrInput")%>
</p></li>
<li><p><b>性別:</b>
<% String sex = new String((request.getParameter("sex")).getBytes("ISO-8859-1"),"UTF-8");%>
<%= sex %>
</p></li>
<li><p><b>年齡：</b>
      <%= request.getParameter("year")%>
</p></li>
<li><p><b>密碼：</b>
      //<%= request.getParameter("pwd")%>
</p></li>
</ul>
</body>
</html>
