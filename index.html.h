<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Owl Brightspace</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            padding: 20px;
        }
        .container {
            max-width: 800px;
            margin: auto;
            background: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.1);
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 20px;
        }
        th, td {
            border: 1px solid #ddd;
            padding: 10px;
            text-align: left;
        }
        th {
            background-color: #6200ea;
            color: white;
        }
        .tabs {
            display: flex;
            justify-content: space-around;
            margin-bottom: 20px;
        }
        .tab-button {
            background-color: #6200ea;
            color: white;
            border: none;
            padding: 10px 20px;
            cursor: pointer;
            border-radius: 5px;
        }
        .tab-button:hover {
            background-color: #3700b3;
        }
        .tab-content {
            display: none;
        }
        .active {
            display: block;
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Owl Brightspace - Grades</h2>
        <div class="tabs">
            <button class="tab-button" onclick="showTab('computational')">Computational Methods</button>
            <button class="tab-button" onclick="showTab('fluids')">Fluid Mechanics & Heat Transfer</button>
            <button class="tab-button" onclick="showTab('dynamics')">Engineering Dynamics</button>
        </div>
        
        <div id="computational" class="tab-content active">
            <h3>Computational Methods in Mechanical Engineering</h3>
            <table>
                <tr><th>Grade Item</th><th>Points</th><th>Grade</th></tr>
                <tr><td>Test 1</td><td>71 / 100</td><td>71%</td></tr>
                <tr><td>Test 2</td><td>78 / 100</td><td>78%</td></tr>
                <tr><td>Lab 1</td><td>95 / 100</td><td>95%</td></tr>
                <tr><td colspan="3">TA Notes: Good execution, but consider optimizing your code structure for efficiency.</td></tr>
                <tr><td>Lab 2</td><td>95 / 100</td><td>95%</td></tr>
                <tr><td colspan="3">TA Notes: Well done! Pay attention to variable naming for better readability.</td></tr>
                <tr><td>Lab 3</td><td>100 / 100</td><td>100%</td></tr>
                <tr><td colspan="3">TA Notes: Excellent work, everything is properly structured and well-documented.</td></tr>
            </table>
        </div>
        
        <div id="fluids" class="tab-content">
            <h3>Introduction to Fluid Mechanics & Heat Transfer</h3>
            <table>
                <tr><th>Grade Item</th><th>Points</th><th>Grade</th></tr>
                <tr><td>Quiz 1</td><td>85 / 100</td><td>85%</td></tr>
                <tr><td>Quiz 2</td><td>73 / 100</td><td>73%</td></tr>
                <tr><td>Midterm</td><td>68 / 100</td><td>68%</td></tr>
                <tr><td>Lab 1</td><td>Pass</td><td>Pass</td></tr>
                <tr><td colspan="3">TA Notes: Clear methodology, but improve discussion on experimental errors.</td></tr>
                <tr><td>Lab 2</td><td>Pass</td><td>Pass</td></tr>
                <tr><td colspan="3">TA Notes: Well-organized report, but ensure all units are properly stated.</td></tr>
                <tr><td>Lab 3</td><td>Pass</td><td>Pass</td></tr>
                <tr><td colspan="3">TA Notes: Good analysis, but include more discussion on heat transfer mechanisms.</td></tr>
                <tr><td>Lab 4</td><td>Pass</td><td>Pass</td></tr>
                <tr><td colspan="3">TA Notes: Excellent work! Well-presented results and thorough explanations.</td></tr>
            </table>
        </div>
        
        <div id="dynamics" class="tab-content">
            <h3>Engineering Dynamics</h3>
            <table>
                <tr><th>Grade Item</th><th>Points</th><th>Grade</th></tr>
                <tr><td>Midterm</td><td>66 / 100</td><td>66%</td></tr>
                <tr><td>Design - Draft</td><td>88 / 100</td><td>88%</td></tr>
                <tr><td>Design - Drawings</td><td>92 / 100</td><td>92%</td></tr>
                <tr><td>Design - Final</td><td>Not Completed</td><td>-</td></tr>
            </table>
        </div>
    </div>

    <script>
        function showTab(tabId) {
            let contents = document.querySelectorAll('.tab-content');
            contents.forEach(content => content.classList.remove('active'));
            document.getElementById(tabId).classList.add('active');
        }
    </script>
</body>
</html>
