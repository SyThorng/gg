import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';

List<Map<String, dynamic>> ls_home = [
  {
    'pic':
        'https://www.seekpng.com/png/full/186-1862998_plato-de-pizza-png.png',
    'name': 'Chiken MashRoom Pizzaa',
    'pic2':
        'https://www.pngkey.com/png/full/52-527002_kfc-chicken-bucket-png-kfc-full-menu-nz.png'
  },
  {
    'pic': 'https://www.imagensempng.com.br/wp-content/uploads/2022/01/240.png',
    'name': 'Chiken Us  Pizzaa',
    'pic2':
        'https://www.pngkey.com/png/full/79-793304_kfc-png-download-franquia-frango-no-balde.png'
  },
  {
    'pic':
        'https://www.transparentpng.com/thumb/burger/hot-burger-king-hd-png-9dzyCE.png',
    'name': 'Chiken Us  Buger',
    'pic2': 'https://pngimg.com/uploads/kfc_food/kfc_food_PNG53.png'
  },
  {
    'pic':
        'https://www.freepnglogos.com/uploads/burger-png/burger-png-png-images-yellow-images-12.png',
    'name': 'Chiken china burger',
    'pic2':
        'https://www.kindpng.com/picc/m/726-7266082_kfc-chicken-transparent-image-kfc-bucket-png-png.png'
  },
];

class MyWidget extends StatelessWidget {
  MyWidget({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(child: Text('Class List')),
      backgroundColor: Colors.amber,
    );
  }
}
