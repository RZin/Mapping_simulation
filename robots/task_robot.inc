define laser0 ranger(

  sensor(
    range [ 0.0  5.6 ]
    fov 50.0
    samples 50
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
    fov 30.0
    samples 30
  )


  color "blue"
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
    fov 50.0
    samples 50
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

define laser3 ranger(

  sensor(
    range [ 0.0  5.6 ]
    fov 180.0
    samples 180
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


define task_robot position(

  odom_error [0.03 0.03 0.00 0.05]
  localization "odom"
  size [ 0.35 0.25 0.2 ]
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

  laser0(pose [ 0.23 0.0 -0.15 55.0])
  laser1(pose [ 0.23 0.0 -0.15 0])
  laser2(pose [ 0.23 0.0 -0.15 -55.0])
  laser3(pose [ 0.23 0.0 -0.15 0.0])
)
