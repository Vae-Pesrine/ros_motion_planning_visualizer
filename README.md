## Table of Contents
- [Introduction](#0)
- [File Tree](#1)
- [Configuration](#2)
- [Start](#3)
- [UI Design](#4)
- [Examples](#5)
- [More](#6)


# <span id="0">Introduction
This repository provides a ROS-based visualization Rviz plugins for path planning and curve generation algorithms.

In scientific research, this repository allows researchers to observe, study, understand and analyze the working mechanisms of different algorithms, making it easier to identify strengths and weaknesses. This helps in the development of more efficient and optimized algorithms for various applications, such as robotics, transportation, and computer graphics.


# <span id="1">File Tree
The file structure is shown below.
```
path_visualization_plugins
├── assets
└── src
    ├── planner
    │   ├── global_planner
    │   ├── local_planner
    │   └── utils
    ├── rviz_plugins
    │   └── path_visual_plugin
    ├── sim_env
    │   ├── config
    │   ├── launch
    │   ├── maps
    │   ├── rviz
    │   ├── scripts
    │   ├── urdf
    │   └── worlds
    └── third_party
        └── map_plugins

```

# <span id="2">Configuration
# <span id="3">Start
We provide a script to quickly start the world
```sh
cd ./src/sim_env/scripts
./main.sh
```
<!-- -8.36 8.02 8.06 -7.44 -->
# <span id="4">UI Design
```shell
cd ./src/rviz_plugins/path_visual_plugin
uic -o ./include/ui_path_visual_plugin.h ./ui/path_visual_plugin.ui
```
# <span id="5">Examples
## Path Planning
|     Planner      |                                                                                             Version                                                                                              |                         Demo                          |
|:----------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|:----------------------------------------------------------:|
|     **GBFS**     |      [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/a_star.cpp)       |            ![gbfs_ros.png](assets/gbfs_ros.png)            |
|   **Dijkstra**   |      [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/a_star.cpp)       |        ![dijkstra_ros.png](assets/dijkstra_ros.png)        |
|     **A\***      |      [![Status](https://img.shields.io/badge/done-v1.1-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/a_star.cpp)       |          ![a_star_ros.png](assets/a_star_ros.png)          |
|     **JPS**      | [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/jump_point_search.cpp) |             ![jps_ros.png](assets/jps_ros.png)             |
|     **D\***      |     [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)]((https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/d_star.cpp))      |          ![d_star_ros.png](assets/d_star_ros.png)          |
|    **LPA\***     |    [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)]((https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/lpa_star.cpp))     |        ![lpa_star_ros.png](assets/lpa_star_ros.png)        |
|   **D\* Lite**   |   [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)]((https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/d_star_lite.cpp))   |     ![d_star_lite_ros.png](assets/d_star_lite_ros.png)     |
|   **Voronoi**    |     [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)]((https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/voronoi.cpp))     |         ![voronoi_ros.png](assets/voronoi_ros.png)         |
|   **Theta\***    |   [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)]((https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/theta_star.cpp))    |      ![theta_star_ros.png](assets/theta_star_ros.png)      |
| **Lazy Theta\*** | [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)]((https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/graph_planner/src/lazy_theta_star.cpp)) | ![lazy_theta_star_ros.png](assets/lazy_theta_star_ros.png) |
|     **RRT**      |       [![Status](https://img.shields.io/badge/done-v1.1-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/sample_planner/src/rrt.cpp)        |             ![rrt_ros.png](assets/rrt_ros.png)             |
|    **RRT\***     |     [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/sample_planner/src/rrt_star.cpp)     |        ![rrt_star_ros.png](assets/rrt_star_ros.png)        |
| **Informed RRT** |   [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/sample_planner/src/informed_rrt.cpp)   |    ![informed_rrt_ros.png](assets/informed_rrt_ros.png)    |
| **RRT-Connect**  |   [![Status](https://img.shields.io/badge/done-v1.0-brightgreen)](https://github.com/ai-winter/path_visualization_plugins/blob/master/src/planner/global_planner/sample_planner/src/rrt_connect.cpp)    |     ![rrt_connect_ros.png](assets/rrt_connect_ros.png)     |

## Curve Generation

# <span id="6">More

More examples could be found at [https://github.com/ai-winter/path_visualization_plugins](https://github.com/ai-winter/path_visualization_plugins). 
