(Exported by FreeCAD)
(Post Processor: script_module)
(Output Time:2024-09-17 17:01:15.343977)
(begin preamble)
%
G17 G21 G40 G49 G80 G90
M08
G21
(begin operation: Fixture)
(machine: not set, mm/min)
G54
(finish operation: Fixture)
(begin operation: TC: 6mm_Endmill)
(machine: not set, mm/min)
(TC: 6mm_Endmill)
M05
M09M6 T10
(finish operation: TC: 6mm_Endmill)
(begin operation: Profile)
(machine: not set, mm/min)
(Profile)
(Compensated Tool Path. Diameter: 6.0)
G0 Z15.000
G0 X82.121 Y72.121
G0 Z13.000
G1 X82.121 Y72.121 Z10.000
G2 X83.000 Y70.000 Z10.000 I-2.121 J-2.121
G1 X83.000 Y0.000 Z10.000
G2 X80.000 Y-3.000 Z10.000 I-3.000 J0.000
G1 X0.000 Y-3.000 Z10.000
G2 X-3.000 Y0.000 Z10.000 I0.000 J3.000
G1 X-3.000 Y70.000 Z10.000
G2 X0.000 Y73.000 Z10.000 I3.000 J-0.000
G1 X80.000 Y73.000 Z10.000
G2 X82.121 Y72.121 Z10.000 I-0.000 J-3.000
G0 Z15.000
G0 Z15.000
(finish operation: Profile)
(begin operation: Profile001)
(machine: not set, mm/min)
(Profile001)
(Compensated Tool Path. Diameter: 6.0)
G0 Z15.000
G0 X60.556 Y50.556
G0 Z13.000
G1 X60.556 Y50.556 Z10.000
G2 X47.463 Y13.140 Z10.000 I-15.556 J-15.556
G2 X42.537 Y56.860 Z10.000 I-2.463 J21.860
G2 X60.556 Y50.556 Z10.000 I2.463 J-21.860
G0 Z15.000
G0 Z15.000
(finish operation: Profile001)
(begin operation: Pocket_Shape)
(machine: not set, mm/min)
(Pocket_Shape)
G0 Z15.000
G0 X20.544 Y63.661
G0 Z13.000
G1 X20.544 Y63.661 Z8.000
G1 X24.639 Y63.661 Z8.000
G1 X24.639 Y64.000 Z8.000
G1 X20.883 Y64.000 Z8.000
G1 X20.544 Y63.661 Z8.000
G1 X18.368 Y63.661 Z8.000
G3 X15.368 Y60.661 Z8.000 I-0.000 J-3.000
G1 X15.368 Y58.485 Z8.000
G1 X13.571 Y56.688 Z8.000
G1 X13.571 Y60.661 Z8.000
G3 X11.791 Y63.393 Z8.000 I-2.973 J0.009
G1 X12.398 Y64.000 Z8.000
G1 X4.300 Y64.000 Z8.000
G1 X4.300 Y63.661 Z8.000
G1 X10.571 Y63.661 Z8.000
G2 X11.791 Y63.393 Z8.000 I0.052 J-2.674
G0 Z15.000
G0 X13.571 Y56.688 Z15.000
G0 X13.571 Y56.688 Z13.000
G1 X13.571 Y56.688 Z8.000
G1 X15.368 Y58.485 Z8.000
G1 X15.368 Y50.000 Z8.000
G0 Z15.000
G0 Z15.000
(finish operation: Pocket_Shape)
(begin postamble)
M05 M09
G17 G90 G80 G40
M30