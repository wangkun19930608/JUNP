<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="index.aspx.cs" Inherits="testforfront.index" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <title></title>
    <link href='../css/fullcalendar.min.css' rel='stylesheet' />
    <link href='../css/fullcalendar.print.min.css' rel='stylesheet' media='print' />
    <script src='../js/moment.min.js'></script>
    <script src='../js/jquery.min.js'></script>
    <script src='../js/fullcalendar.min.js'></script>
    <script>

	$(document).ready(function() {
		
		$('#calendar').fullCalendar({
			header: {
				left: 'prev,next today',
				center: 'title',
				right: 'month,basicWeek,basicDay'
			},
			defaultDate: '2017-02-12',
			navLinks: true, // can click day/week names to navigate views
			editable: true,
			eventLimit: true, // allow "more" link when too many events
			events: [
				{
					title: 'All Day Event',
					start: '2017-02-01'
				},
				{
					title: 'Long Event',
					start: '2017-02-07',
					end: '2017-02-10'
				},
				{
					id: 999,
					title: 'Repeating Event',
					start: '2017-02-09T16:00:00'
				},
				{
					id: 999,
					title: 'Repeating Event',
					start: '2017-02-16T16:00:00'
				},
				{
					title: 'Conference',
					start: '2017-02-11',
					end: '2017-02-13'
				},
				{
					title: 'Meeting',
					start: '2017-02-12T10:30:00',
					end: '2017-02-12T12:30:00'
				},
				{
					title: 'Lunch',
					start: '2017-02-12T12:00:00'
				},
				{
					title: 'Meeting',
					start: '2017-02-12T14:30:00'
				},
				{
					title: 'Happy Hour',
					start: '2017-02-12T17:30:00'
				},
				{
					title: 'Dinner',
					start: '2017-02-12T20:00:00'
				},
				{
					title: 'Birthday Party',
					start: '2017-02-13T07:00:00'
				},
				{
					title: 'Click for Google',
					url: 'http://google.com/',
					start: '2017-02-28'
				}
			]
		});
		
	});

</script>
    <style>

	body {
		margin: 40px 10px;
		padding: 0;
		font-family: "Lucida Grande",Helvetica,Arial,Verdana,sans-serif;
		font-size: 14px;
	}

	#calendar {
		max-width: 900px;
		margin: 0 auto;
	}

</style>
</head>
<body>


    <form id="form1" runat="server">
        <div>
            第一步下载所需要的所有文件：<br />
            <asp:HyperLink ID="HyperLink1" runat="server" NavigateUrl="https://fullcalendar.io/download">https://fullcalendar.io/download</asp:HyperLink>
            <br />
            第二步将代码所需要的文件全部拷贝到对应的目录。<br />
            第三步添加文件到项目中。<br />
            第四步填写相关的引用。<br />
            第五步完成空间的引入以及初始化。<br/>
            <div id='calendar'></div>

            &nbsp;
        </div>
    </form>
</body>
</html>
