// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 815 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880C1B0 .. +0x32F bytes.
extern "C" __declspec(naked) void FUN_5880c1b0_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 D6 18 98 58: push 0x589818d6
        __asm _emit 0x68
        __asm _emit 0xd6
        __asm _emit 0x18
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 14: lea eax, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 FF E1 00 00: mov ecx, 0xe1ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 01 00 00: mov edx, 0x100
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 86 AC 03 00 00: mov eax, dword ptr [esi + 0x3ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 A8 03 00 00: mov eax, dword ptr [esi + 0x3a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 B0 03 00 00: mov eax, dword ptr [esi + 0x3b0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 35 80 45 A2 58: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 E0 FF FF: call 0x5880a260
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E FC 03 00 00: mov ecx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 7E 68: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x68
        ; Exact mapped bytes 89 7E 78: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x78
        ; Exact mapped bytes 89 6E 7C: mov dword ptr [esi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x7c
        ; Exact mapped bytes 89 BE E0 06 00 00: mov dword ptr [esi + 0x6e0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 50: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        ; Exact mapped bytes C7 46 54 84 00 00 00: mov dword ptr [esi + 0x54], 0x84
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 88 6A 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6a
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 FC 03 00 00: mov eax, dword ptr [esi + 0x3fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 7C 00 01 00 00: mov dword ptr [eax + 0x7c], 0x100
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E FC 03 00 00: mov ecx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 74 31: je 0x5880c2aa
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 4E 60: cmp ecx, dword ptr [esi + 0x60]
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 75 06: jne 0x5880c291
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 3D 80 47 A2 58: mov dword ptr [0x58a24780], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 3D 34 90 9C 58: cmp dword ptr [0x589c9034], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 11: je 0x5880c2aa
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 74 07: je 0x5880c2a7
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 7E 60: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x60
        ; Exact mapped bytes 81 BE 84 00 00 00 00 00 00 40: cmp dword ptr [esi + 0x84], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes A1 98 46 A2 58: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x5880c388
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 A8 64 01 00 00: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x5880c2da
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5880c2da
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5880c2dc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E FC 03 00 00: mov ecx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x5880c311
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 39 3D 34 90 9C 58: cmp dword ptr [0x589c9034], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 38: je 0x5880c351
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes E8 2E 09 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 7C 24 1C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x5880c412
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 8F 9C 58: mov ecx, dword ptr [0x589c8ffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AF E0 0F 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C FF FF FF FF: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x5880c453
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 47 A2 58: mov eax, dword ptr [0x58a24710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x5880c450
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 70 01 00 00 04: cmp dword ptr [eax + 0x170], 4
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 8E DE 00 00 00: jle 0x5880c449
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B8 94 01 00 00: cmp dword ptr [eax + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x5880c449
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 10: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x5880c453
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x5880c3a2
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x5880c3a2
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880c3a4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E FC 03 00 00: mov ecx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x5880c3d9
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 39 3D 34 90 9C 58: cmp dword ptr [0x589c9034], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 40: je 0x5880c421
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes E8 66 08 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 6C 24 1C: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 1B: je 0x5880c412
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D EC 8F 9C 58: mov ecx, dword ptr [0x589c8fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 EB DF 0F 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdf
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C FF FF FF FF: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes EB 41: jmp 0x5880c453
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 44 24 1C FF FF FF FF: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes EB 32: jmp 0x5880c453
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes A1 10 47 A2 58: mov eax, dword ptr [0x58a24710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 26: je 0x5880c450
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 83 B8 70 01 00 00 05: cmp dword ptr [eax + 0x170], 5
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 7E 16: jle 0x5880c449
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 94 01 00 00: cmp dword ptr [eax + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880c449
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 94 01 00 00: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes EB 0A: jmp 0x5880c453
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes EB 03: jmp 0x5880c453
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 89 7E 60: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 74 07: je 0x5880c464
        __asm _emit 0x74
        __asm _emit 0x07
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
        ; Exact mapped bytes 8B 46 60: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes A3 80 47 A2 58: mov dword ptr [0x58a24780], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 3D FC 44 A2 58: cmp dword ptr [0x58a244fc], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 1F: je 0x5880c493
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 74 18: je 0x5880c493
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes A1 D4 48 A2 58: mov eax, dword ptr [0x58a248d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 52 0C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 91 94 03 00 00: mov edx, dword ptr [ecx + 0x394]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 28 04 00 00: mov eax, dword ptr [esi + 0x428]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 0A: shr edx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 56 64: mov dword ptr [esi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x64
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E B4 03 00 00: mov ecx, dword ptr [esi + 0x3b4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6F 3C 06 00: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 81 08 00: call 0x588946b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
