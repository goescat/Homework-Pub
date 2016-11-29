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
   <%= request.getParameter("name")%>
</p></li>
<li><p><b>性別:</b>
   <%= request.getParameter("sex")%>
</p></li>
<li><p><b>年齡：</b>
      <%= request.getParameter("year")%>
</p></li>
</p></li>
</ul>
</body>
</html>
