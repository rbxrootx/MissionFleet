// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 2244 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D51D0 .. +0x54D bytes.
extern "C" __declspec(naked) void FUN_587d51d0_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 48 02 00 00: sub esp, 0x248
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 44 02 00 00: mov dword ptr [esp + 0x244], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BC 24 5C 02 00 00: mov edi, dword ptr [esp + 0x25c]
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A8 02: test al, 2
        __asm _emit 0xa8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 7C 08 00 00: je 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 27: je 0x587d522d
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 19: je 0x587d5226
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 10: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B 41 34: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 74 0B: je 0x587d522d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 EA: jne 0x587d5210
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 4F 08 00 00: jmp 0x587d5a7c
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 04: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 71 07 00 00: je 0x587d59ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 35 04 00 00: je 0x587d567b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 2A 08 00 00: jne 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 FC 00 00 00: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D C4 C3 98 58: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 3D C8 00 00 00: cmp eax, 0xc8
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 3F 03 00 00: jne 0x587d55a5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 01 00 00: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 00 40: cmp eax, 0x40000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 84 90 03 00 00: je 0x587d5607
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 88 03 00 00: jne 0x587d5607
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E F0 00 00 00: cmp dword ptr [esi + 0xf0], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 7C 03 00 00: je 0x587d5607
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 30: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x30
        ; Exact mapped bytes 8B 82 C0 0C 00 00: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 40 04: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 8A D0: mov dl, al
        __asm _emit 0x8a
        __asm _emit 0xd0
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 07: cmp dl, 7
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x07
        ; Exact mapped bytes 75 38: jne 0x587d52e0
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 25 E0 03 00 00: and eax, 0x3e0
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 01 00 00: cmp eax, 0x100
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2C: jne 0x587d52e0
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 0F B7 86 06 0A 00 00: movzx eax, word ptr [esi + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 18: cmp ax, 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x18
        ; Exact mapped bytes 74 1F: je 0x587d52e0
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F8 19: cmp ax, 0x19
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x19
        ; Exact mapped bytes 74 19: je 0x587d52e0
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 16 05 00 00: push 0x516
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C 68 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 55 FA F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 99 07 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 89 EC 11 00: call 0x588f3f70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A0 02 00 00: je 0x587d558f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 BA AF FF FF: call 0x587d02b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 96 06 0A 00 00: movzx edx, word ptr [esi + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A D8: mov bl, al
        __asm _emit 0x8a
        __asm _emit 0xd8
        ; Exact mapped bytes 88 5C 24 10: mov byte ptr [esp + 0x10], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 90 A2 FF FF: call 0x587cf5a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1C: jne 0x587d5330
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 19 05 00 00: push 0x519
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CC 67 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x67
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 05 FA F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 49 07 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 3E 02 00 00: je 0x587d5576
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FB 04: cmp bl, 4
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x587d550d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 90 00 00 00 00: cmp dword ptr [esi + 0x90], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C B9 02 00 00: jl 0x587d5607
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 94 00 00 00 00: cmp dword ptr [esi + 0x94], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C AC 02 00 00: jl 0x587d5607
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FB 02: cmp bl, 2
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 74 05: je 0x587d5365
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 80 FB 03: cmp bl, 3
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 75 4B: jne 0x587d53b0
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 0C 85 60 48 A2 58: mov ecx, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 14: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 3B 05 A0 B4 A0 58: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 36: jne 0x587d53b0
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 68 E8 A9 99 58: push 0x5899a9e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 5C: lea ecx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 5C: lea edx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes E8 4C 67 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x67
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 85 F9 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 C9 06 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes C7 86 EC 00 00 00 00 00 00 00: mov dword ptr [esi + 0xec], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3C 45 42 30 9C 58 00: cmp word ptr [eax*2 + 0x589c3042], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0x42
        __asm _emit 0x30
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x587d53cf
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 E1 9B FF FF: call 0x587cefb0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE EC 00 00 00 00: cmp dword ptr [esi + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x587d53e9
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 0B 9B FD FF: call 0x587aeef0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 6B: jne 0x587d5454
        __asm _emit 0x75
        __asm _emit 0x6b
        ; Exact mapped bytes 0F B6 8E 94 00 00 00: movzx ecx, byte ptr [esi + 0x94]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 96 90 00 00 00: movzx edx, byte ptr [esi + 0x90]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 86 06 0A 00 00: movzx eax, byte ptr [esi + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B3 53 FE FF: call 0x587ba7c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 F2 01 00 00: je 0x587d5607
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 02 C2 F5 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 80 07 00 00 00 00 00 00: mov dword ptr [esi + 0x780], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FB 03: cmp bl, 3
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 D6 01 00 00: jne 0x587d5607
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8E 06 0A 00 00: movzx ecx, word ptr [esi + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 8D 60 48 A2 58: mov edx, dword ptr [ecx*4 + 0x58a24860]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 81 1C 01 00 00: mov word ptr [ecx + 0x11c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B3 01 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 87 93 00 00 00: ja 0x587d54f1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 98 5A 7D 58: jmp dword ptr [eax*4 + 0x587d5a98]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x5a
        __asm _emit 0x7d
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 03 00 00: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7B 66 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B4 F8 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 86 01 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 21 03 00 00: push 0x321
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5F 66 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 98 F8 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 22 03 00 00: push 0x322
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 43 66 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7C F8 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 23 03 00 00: push 0x323
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 66 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 60 F8 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 25 03 00 00: push 0x325
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B 66 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 44 F8 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 16 01 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 24 03 00 00: push 0x324
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF 65 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 28 F8 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 D2: movzx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 04 95 60 48 A2 58: mov eax, dword ptr [edx*4 + 0x58a24860]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 14: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes 3B 0D A0 B4 A0 58: cmp ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 75 38: jne 0x587d555a
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 68 E8 A9 99 58: push 0x5899a9e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 94 24 5C 01 00 00: lea edx, [esp + 0x15c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 24 5C 01 00 00: lea eax, [esp + 0x15c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes E8 A2 65 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 DB F7 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 55 04 00 00: push 0x455
        __asm _emit 0x68
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 65 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 BF F7 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x587d5607
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 54 04 00 00: push 0x454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A 65 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A3 F7 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 78: jmp 0x587d5607
        __asm _emit 0xeb
        __asm _emit 0x78
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 DD 01 00 00: push 0x1dd
        __asm _emit 0x68
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 65 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8D F7 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 62: jmp 0x587d5607
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 75 5D: jne 0x587d5607
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes 39 9E F0 00 00 00: cmp dword ptr [esi + 0xf0], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 55: je 0x587d5607
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 8E 98 00 00 00: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 7C 4B: jl 0x587d5607
        __asm _emit 0x7c
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 7C 41: jl 0x587d5607
        __asm _emit 0x7c
        __asm _emit 0x41
        ; Exact mapped bytes 8B 96 B8 00 00 00: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 03 96 10 01 00 00: add edx, dword ptr [esi + 0x110]
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 00 00 00: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 02 01: lea eax, [edx + eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 86 E8 00 00 00: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 B9 FF FF: call 0x587d0f90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 4E B8 FF FF: call 0x587d0e40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E E8 00 00 00: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 3A FE FF: call 0x587b9060
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 BE FC 00 00 00 64: cmp dword ptr [esi + 0xfc], 0x64
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes 0F 84 65 04 00 00: je 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE FC 09 00 00 00: cmp dword ptr [esi + 0x9fc], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 58 04 00 00: je 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 F0 09 00 00: mov edx, dword ptr [esi + 0x9f0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 98 AA 9B 58: push 0x589baa98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 68 48 B5 99 58: push 0x5899b548
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xb5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 78 C1 98 58: call dword ptr [0x5898c178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 96 F0 09 00 00: movzx edx, word ptr [esi + 0x9f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E6 32 0B 00: call 0x58888940
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 86 F0 09 00 00: mov ax, word ptr [esi + 0x9f0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 41 60: mov word ptr [ecx + 0x60], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 54 FE FF: call 0x587bab60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 FE 03 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 00 1F 00 00: mov eax, 0x1f00
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 02 00 00: mov ecx, 0x200
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 67: jne 0x587d56f8
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 FC 07 00 00: mov edx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1C 17: cmp dword ptr [edi + edx], ebx
        __asm _emit 0x39
        __asm _emit 0x1c
        __asm _emit 0x17
        ; Exact mapped bytes 8D 04 17: lea eax, [edi + edx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x17
        ; Exact mapped bytes 74 4F: je 0x587d56f0
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 8E F4 07 00 00: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1C 0F: cmp dword ptr [edi + ecx], ebx
        __asm _emit 0x39
        __asm _emit 0x1c
        __asm _emit 0x0f
        ; Exact mapped bytes 74 44: je 0x587d56f0
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 3A: je 0x587d56f0
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 96 F4 07 00 00: mov edx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C 17: mov ecx, dword ptr [edi + edx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x17
        ; Exact mapped bytes E8 72 BE F5 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbe
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x587d56e4
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 86 FC 07 00 00: mov eax, dword ptr [esi + 0x7fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 07: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x07
        ; Exact mapped bytes C7 41 50 01 00 00 00: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587d56f0
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 96 FC 07 00 00: mov edx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 17: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x17
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 FF 24: cmp edi, 0x24
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x24
        ; Exact mapped bytes 7C 9B: jl 0x587d5693
        __asm _emit 0x7c
        __asm _emit 0x9b
        ; Exact mapped bytes 8B 8E 60 01 00 00: mov ecx, dword ptr [esi + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes F6 C2 01: test dl, 1
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 9C 01 00 00: je 0x587d58a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D AE 68 01 00 00: lea ebp, [esi + 0x168]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x587d5720
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D5720 .. +0x377 bytes.
extern "C" __declspec(naked) void FUN_587d51d0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 50 02: cmp dword ptr [ecx + 0x50], 2
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 75 69: jne 0x587d5792
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 0E BE F5 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbe
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 85 C4 00 00 00: lea eax, [ebp + 0xc4]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x587d5761
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 38 FF FF FF: mov ecx, dword ptr [eax - 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 49 24 01: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E2: jne 0x587d5741
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB 52: jmp 0x587d57b3
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes F6 C2 01: test dl, 1
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 74 46: je 0x587d57b3
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 38 FF FF FF: mov ecx, dword ptr [eax - 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 49 24 01: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 E2: jne 0x587d5772
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB 21: jmp 0x587d57b3
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 8D 8D C4 00 00 00: lea ecx, [ebp + 0xc4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x587d57a0
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8C C3 00 00 00: jl 0x587d5892
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 58 1C: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8D B6 00 00 00: jge 0x587d5892
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 8C A3 00 00 00: jl 0x587d5892
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x587d5892
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 8E F0 04 00 00: movzx ecx, byte ptr [esi + 0x4f0]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 10: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x587d5896
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9E F0 04 00 00: mov byte ptr [esi + 0x4f0], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 50: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 78 47 A2 58: mov ecx, dword ptr [0x58a24778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 81 70 01 00 00: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x587d5841
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 14: jl 0x587d5841
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 83 B9 94 01 00 00 00: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587d5841
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x587d5843
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 3F 21 13 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 50: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 78 47 A2 58: mov ecx, dword ptr [0x58a24778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 81 70 01 00 00: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x587d587d
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 14: jl 0x587d587d
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 83 B9 94 01 00 00 00: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587d587d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x587d587f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes EB 04: jmp 0x587d5896
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 5C 24 10: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C5 08: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x08
        ; Exact mapped bytes 83 FB 19: cmp ebx, 0x19
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x19
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F 8C 79 FE FF FF: jl 0x587d5720
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 B2 A1 FF FF: call 0x587cfa60
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E FC 00 00 00: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F0 00 00 00: mov dword ptr [esi + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 C8 00 00 00: cmp ecx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 7C 00 00 00: jne 0x587d5942
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE F8 00 00 00 00: cmp dword ptr [esi + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 39: je 0x587d5910
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 8E C4 00 00 00: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3B 9F FF FF: call 0x587cf820
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 D0 00 00 00: mov edx, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 96 90 00 00 00: imul edx, dword ptr [esi + 0x90]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 96 94 00 00 00: add edx, dword ptr [esi + 0x94]
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C4 00 00 00: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C D0: mov ecx, dword ptr [eax + edx*8]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 04 D0: lea eax, [eax + edx*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 05 00 03 00 00: add eax, 0x300
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 07: jmp 0x587d5917
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 9C: push -0x64
        __asm _emit 0x6a
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 8E F8 04 00 00: mov ecx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E D9 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE F0 00 00 00 00: cmp dword ptr [esi + 0xf0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C4 00 00 00: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 E3 9E FF FF: call 0x587cf820
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 37 01 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 64: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x64
        ; Exact mapped bytes 0F 85 2E 01 00 00: jne 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 46: je 0x587d5995
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 96 B0 00 00 00: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C3 9E FF FF: call 0x587cf820
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 BC 00 00 00: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 86 90 00 00 00: imul eax, dword ptr [esi + 0x90]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 86 94 00 00 00: add eax, dword ptr [esi + 0x94]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B0 00 00 00: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 C1: lea eax, [ecx + eax*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 05 00 03 00 00: add eax, 0x300
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E F8 04 00 00: mov ecx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 00 D9 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F8 04 00 00: mov ecx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 9C: push -0x64
        __asm _emit 0x6a
        __asm _emit 0x9c
        ; Exact mapped bytes E8 E9 D8 12 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 08: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 8D 47 E5: lea eax, [edi - 0x1b]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0xe5
        ; Exact mapped bytes 83 F8 5B: cmp eax, 0x5b
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x5b
        ; Exact mapped bytes 0F 87 BE 00 00 00: ja 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 90 C4 5A 7D 58: movzx edx, byte ptr [eax + 0x587d5ac4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x5a
        __asm _emit 0x7d
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 AC 5A 7D 58: jmp dword ptr [edx*4 + 0x587d5aac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0x5a
        __asm _emit 0x7d
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 1E 61 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 17 60 F9 FF: call 0x5876b9f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x587d5a79
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 45 A2 58: mov eax, dword ptr [0x58a245d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 05: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 8B 0D D0 45 A2 58: mov ecx, dword ptr [0x58a245d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 5A: je 0x587d5a53
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 6C 00 00 00: jne 0x587d5a79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D0 45 A2 58: mov ecx, dword ptr [0x58a245d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes EB 5D: jmp 0x587d5a72
        __asm _emit 0xeb
        __asm _emit 0x5d
        ; Exact mapped bytes 81 BE FC 00 00 00 C8 00 00 00: cmp dword ptr [esi + 0xfc], 0xc8
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 75 09: jne 0x587d5a2c
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes E8 66 B5 FF FF: call 0x587d0f90
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4D: jmp 0x587d5a79
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes 68 C8 00 00 00: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A B5 FF FF: call 0x587d0f90
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 41: jmp 0x587d5a79
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes A1 D4 45 A2 58: mov eax, dword ptr [0x58a245d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 05: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 8B 0D D4 45 A2 58: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 09: jne 0x587d5a5c
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 1D: jmp 0x587d5a79
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 02: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 75 0D: jne 0x587d5a79
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D D4 45 A2 58: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 8B 8C 24 54 02 00 00: mov ecx, dword ptr [esp + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 4C 71 1A 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x71
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 48 02 00 00: add esp, 0x248
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
