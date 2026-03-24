<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>Perfil de Jelvin</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            height: 100vh;
            background-color: #f0f2f5;
            margin: 0;
        }
        .card {
            background: white;
            padding: 20px;
            border-radius: 15px;
            box-shadow: 0 4px 8px rgba(0,0,0,0.1);
            text-align: center;
        }
        h1 { color: #333; }
        img {
            width: 300px; /* Tamaño reducido */
            height: auto;
            border-radius: 20px;
            border: 6px solid #007bff;
            margin-top: 30px;
        }
    </style>
</head>
<body>

    <div class="card">
        <?php
            echo "<h1>Hola mundo, soy Jelvin Huriel Loyo Jordan</h1>";
            echo '<img src="img.png" alt="Imagen de Jelvin">';
        ?>
    </div>

</body>
</html>
