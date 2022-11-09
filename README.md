# Proyecto final
## Sistema de validación de comentarios
#### Cátedra de Paradigmas de Programación
#### Universidad Nacional de Tucumán


**Enunciado:**
Una empresa ofrece un servicio de validación de comentarios. El sistema de validación verifica que los comentarios emitidos por los usuarios de una determinada empresa sean verídicos. Para ello, el sistema almacena información sobre las empresas que contrataron el servicio. De cada empresa se conoce nombre, razón social, rubro, página web y el administrador de dicha página que sirve de información de contacto con el sistema.
El administrador puede agregar comentadores. Los comentadores son las personas autorizadas a dejar un comentario en la web de una empresa. Para poder agregar un comentador en la empresa, éste debe ser ingresado previamente en el sistema de validación.
De los usuarios que comentan en las páginas web de las empresas, denominados comentadores, se conoce número de teléfono y datos geográficos (ciudad, provincia, país). Un comentador puede ser comentador de varias empresas. Además de almacenar en la página web el comentario que hizo un comentador y la fecha en la que lo realizó, se almacena un puntaje que él mismo le da a la empresa (puntaje del 1 al 10). Luego, ese comentario será validado como verídico mediante el sistema. El administrador de la página web puede activar o desactivar comentarios, o sea, si se los muestra o no en la página web.
Una vez que el comentador realizó un comentario, si el comentario fue positivo se le muestra además una lista de redes sociales de la empresa invitándolo a que deje comentarios allí también.
El sistema de validación otorga a cada comentador una categoría dependiendo del historial de comentarios que posea. Al agregar un comentador al sistema, se le asigna la categoría neutral que establece que existe un balance entre los comentarios positivos y negativos que realizó dicho comentador. Periódicamente el sistema recategoriza a los comentadores en función de sus comentarios. Si posee más del 60 % de comentarios negativos, se le asigna la categoría pesimista, si posee más del 60% de comentarios positivos se le otorga la categoría optimista, caso contrario neutral.
La categoría del comentador se usa para analizar las encuestas de la empresa. Dada una empresa, se puede establecer el porcentaje de comentarios negativos o positivos que obtuvo en un período de tiempo. El cálculo del porcentaje se realiza en función del puntaje asignado a los comentarios de la siguiente manera: si se trata de un comentario negativo realizado por una persona pesimista o de un comentario positivo realizado por una persona optimista, tiene la mitad del peso. Si se trata de un comentario positivo realizado por una persona pesimista o un comentario negativo de una persona optimista tiene el doble de peso, si la persona que realiza el comentario es considerada neutral, vale el puntaje completo.
1) Identifique clases, relaciones entre clases, responsabilidades de cada clase y modele una solución del problema.
2) Realice un diagrama de clases detallado que incluya: atributos, métodos y relaciones, notas y/o aclaraciones que crea conveniente.
3) Modele el diagrama de secuencia de la operación que calcula el peso que tiene un comentario positivo de una persona pesimista
4) Implemente su diseño en C++.
5) Escriba un programa principal en el que deberá probar la creación de objetos según su diseño, y realizar todas las pruebas necesarias para comprobar que las operaciones de las distintas clases funcionan correctamente.
