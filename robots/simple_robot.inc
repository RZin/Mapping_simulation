define laser0 ranger(

  sensor(
    range [ 0.0  5.6 ]
    fov 35.0
    samples 90
  )

  color "green"
  size [ 0.09 0.09 0.09 ]

  block( points 4
     point[0] [0 0]
     point[1] [4 0]
     point[2] [4 1]
     point[3] [1 0]
     z [0 1]
  )

)

define laser1 ranger(

  sensor(
    range [ 0.0  5.6 ]
    fov 35.0
    samples 90
  )


  color "green"
  size [ 0.09 0.09 0.09 ]

  block( points 4
     point[0] [0 0]
     point[1] [4 0]
     point[2] [4 1]
     point[3] [1 0]
     z [0 1]
  )

)

define laser2 ranger(

  sensor(
    range [ 0.0  5.6 ]
    fov 35.0
    samples 90
  )

  color "green"
  size [ 0.09 0.09 0.09 ]

  block( points 4
     point[0] [0 0]
     point[1] [4 0]
     point[2] [4 1]
     point[3] [1 0]
     z [0 1]
  )

)


define simple_robot position(

  odom_error [0.03 0.03 0.00 0.05]
  localization "odom"
  size [ 0.6 0.4 0.2 ]
  gui_nose 1
  drive "diff"
  color "red"

  block( points 4
     point[0] [0 0]
     point[1] [0 1]
     point[2] [3 1]
     point[3] [3 0]
     color "black"
  z [0 1]
  )

  block( points 4
     point[0] [1 1]
     point[1] [1 2]
     point[2] [2 2]
     point[3] [2 1]
     color "red"
  z [0 1]
  )

  block( points 4
     point[0] [0 2]
     point[1] [0 3]
     point[2] [3 3]
     point[3] [3 2]
     color "black"
  z [0 1]
  )

  laser0(pose [ 0.23 0.0 -0.15 45.0]) # 0.5
  laser1(pose [ 0.23 0.0 -0.15 0]) # 0.5
  laser2(pose [ 0.23 0.0 -0.15 -45.0]) # 0.5

)
