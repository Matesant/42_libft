# Push swap

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <div class="header-container">
        <img src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/covers/cover-libft-bonus.png" width="400" alt="Imagem 1"/>
        <img src="https://media0.giphy.com/media/v1.Y2lkPTc5MGI3NjExMjVvb2twZXN6eTg0NW9uY2JyNWFkeTk1dm53MGdua3JjZXJjdXN6bCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/fXnx6vSSrzY92rTONJ/giphy.webp" width="200" alt="Imagem 2"/>
    </div>
</body>
</html>


<h1 align="center">Making your own C library</h1>

The first project in the École 42 curriculum: building your own C library as a foundation for future projects!

## About
At École 42, we are encouraged to reimplement core functionalities from scratch. This project helps us gain a deeper understanding of standard library functions by rebuilding them under specific constraints. Initially, we focus on fundamental versions, but as we progress through the curriculum, we refine and expand our Libft with additional features. This hands-on approach strengthens our grasp of key concepts while fostering creativity and the ability to build upon existing knowledge.

## Requirements
The functions are written in __C language__ and need the `gcc` compiler.

## Instructions

### 1. Compiling the archives

To compile the project, go to its path and run:

For __mandatory__ :
```
$ make
```
### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```
## Bonus

To compile the bonus:

For __bonus__ :
```
$ make bonus
```

## Testing
```
make
gcc ./main.c libft.a
./a.out
```

This project have been tested with (https://github.com/gemartin99/Push-Swap-Tester).
