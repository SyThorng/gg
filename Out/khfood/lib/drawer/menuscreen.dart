import 'package:flutter/material.dart';
import 'package:flutter/src/widgets/container.dart';
import 'package:flutter/src/widgets/framework.dart';
import 'package:khfood/nav_bar/nav_bar.dart';
import 'package:khfood/profile/profile.dart';
import 'package:khfood/search/search.dart';

class menuscreen extends StatelessWidget {
  menuscreen({super.key, required this.onPagechange});

  final Function(Widget) onPagechange;
  List<ListItem> DrawerItem = [
    ListItem(icon: Icon(Icons.home), tile: Text('Home'), page: nav_bar()),
    ListItem(icon: Icon(Icons.person), tile: Text('Profile'), page: profile()),
  ];
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.pink,
        body: Theme(
          data: ThemeData.dark(),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: DrawerItem.map((e) => ListTile(
                  onTap: () {
                    onPagechange(e.page);
                  },
                  title: e.tile,
                  leading: e.icon,
                )).toList(),
          ),
        ));
  }
}

class ListItem {
  late final Icon icon;
  late final Text tile;
  final Widget page;
  ListItem({required this.icon, required this.tile, required this.page});
}
