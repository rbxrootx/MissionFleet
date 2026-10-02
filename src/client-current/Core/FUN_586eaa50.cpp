// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EAA50 .. +0xAD9 bytes.
extern "C" __declspec(naked) void FUN_586eaa50() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC 10 01 00 00: sub esp, 0x110
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 1F 0A 00 00: je 0x586eb495
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
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
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 83 FA 01: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 95 04 00 00: jne 0x586eaf26
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 01 88 00 00 00: mov ecx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 28 B5 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 81 FA 8C 00 00 00: cmp edx, 0x8c
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 43: jge 0x586eaaf8
        __asm _emit 0x7d
        __asm _emit 0x43
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 01 88 00 00 00: mov edx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 E0: mov dword ptr [ebp - 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 01 88 00 00 00: mov ecx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF B4 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 89 55 E4: mov dword ptr [ebp - 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes E8 4B AA 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 23: jmp 0x586eab1b
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 0A 88 00 00 00: mov eax, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 68 8C 00 00 00: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D DC: mov ecx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E8 26 AA 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xaa
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D1 00: imul edx, ecx, 0
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 88 00 00 00: mov ecx, dword ptr [eax + edx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9E B4 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 83 C1 06: add ecx, 6
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x06
        ; Exact mapped bytes 81 F9 FA 00 00 00: cmp ecx, 0xfa
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 21 02 00 00: jge 0x586ead64
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 01 88 00 00 00: mov edx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 D4: mov dword ptr [ebp - 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 01 88 00 00 00: mov ecx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 61 B4 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 89 55 D8: mov dword ptr [ebp - 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E8 BD A9 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D1 00: imul edx, ecx, 0
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D CC: mov dword ptr [ebp - 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 01 90 00 00 00: mov ecx, dword ptr [ecx + eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 21 B4 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 89 55 D0: mov dword ptr [ebp - 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E8 7D A9 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 0A 90 00 00 00: mov eax, dword ptr [edx + ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 C4: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 0A 90 00 00 00: mov ecx, dword ptr [edx + ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 B3 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 06: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x06
        ; Exact mapped bytes 89 45 C8: mov dword ptr [ebp - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 4D C8: mov ecx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D C4: mov ecx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes E8 3D A9 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 45 F8 00 00 00 00: mov dword ptr [ebp - 8], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eac16
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 F8: mov dword ptr [ebp - 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 83 7D F8 03: cmp dword ptr [ebp - 8], 3
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 73 39: jae 0x586eac55
        __asm _emit 0x73
        __asm _emit 0x39
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 81 98 00 00 00: mov edx, dword ptr [ecx + eax*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 BC: mov dword ptr [ebp - 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 81 98 00 00 00: mov ecx, dword ptr [ecx + eax*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 B3 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 EA 06: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 89 55 C0: mov dword ptr [ebp - 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 45 C0: mov eax, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D BC: mov ecx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes E8 EE A8 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB B8: jmp 0x586eac0d
        __asm _emit 0xeb
        __asm _emit 0xb8
        ; Exact mapped bytes C7 45 F8 00 00 00 00: mov dword ptr [ebp - 8], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eac67
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D F8: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 83 7D F8 0F: cmp dword ptr [ebp - 8], 0xf
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 73 39: jae 0x586eaca6
        __asm _emit 0x73
        __asm _emit 0x39
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 90 A4 00 00 00: mov ecx, dword ptr [eax + edx*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D B4: mov dword ptr [ebp - 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 90 A4 00 00 00: mov ecx, dword ptr [eax + edx*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 41 B3 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 83 C1 06: add ecx, 6
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x06
        ; Exact mapped bytes 89 4D B8: mov dword ptr [ebp - 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 8B 55 B8: mov edx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D B4: mov ecx, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E8 9D A8 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB B8: jmp 0x586eac5e
        __asm _emit 0xeb
        __asm _emit 0xb8
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 E0 00 00 00: mov ecx, dword ptr [eax + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D AC: mov dword ptr [ebp - 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8A E0 00 00 00: mov ecx, dword ptr [edx + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 10 B3 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 06: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x06
        ; Exact mapped bytes 89 45 B0: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 4D B0: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E8 6C A8 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 E4 00 00 00: mov eax, dword ptr [edx + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 89 E4 00 00 00: mov ecx, dword ptr [ecx + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E2 B2 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 89 55 A8: mov dword ptr [ebp - 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E8 3E A8 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 E8 00 00 00: mov edx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 9C: mov dword ptr [ebp - 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 E8 00 00 00: mov ecx, dword ptr [eax + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 B2 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 83 C1 06: add ecx, 6
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x06
        ; Exact mapped bytes 89 4D A0: mov dword ptr [ebp - 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 8B 55 A0: mov edx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E8 10 A8 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 14 01 00 00: mov ecx, dword ptr [eax + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D 94: mov dword ptr [ebp - 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8A 14 01 00 00: mov ecx, dword ptr [edx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 B2 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 06: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x06
        ; Exact mapped bytes 89 45 98: mov dword ptr [ebp - 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 8B 4D 98: mov ecx, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 94: mov ecx, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes E8 E2 A7 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x586eaf21
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 01 88 00 00 00: mov edx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 90: mov dword ptr [ebp - 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 90: mov ecx, dword ptr [ebp - 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes E8 BA A7 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 00: imul ecx, eax, 0
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 0A 90 00 00 00: mov eax, dword ptr [edx + ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 8C: mov dword ptr [ebp - 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 8C: mov ecx, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes E8 98 A7 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 0A 90 00 00 00: mov eax, dword ptr [edx + ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 88: mov dword ptr [ebp - 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 88: mov ecx, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x88
        ; Exact mapped bytes E8 76 A7 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 45 EC 00 00 00 00: mov dword ptr [ebp - 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eaddd
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D EC: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 83 7D EC 03: cmp dword ptr [ebp - 0x14], 3
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0x03
        ; Exact mapped bytes 7D 20: jge 0x586eae03
        __asm _emit 0x7d
        __asm _emit 0x20
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 90 98 00 00 00: mov ecx, dword ptr [eax + edx*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D 84: mov dword ptr [ebp - 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 84: mov ecx, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E8 40 A7 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB D1: jmp 0x586eadd4
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes C7 45 EC 00 00 00 00: mov dword ptr [ebp - 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eae15
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 EC: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 83 7D EC 0F: cmp dword ptr [ebp - 0x14], 0xf
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0x0f
        ; Exact mapped bytes 7D 20: jge 0x586eae3b
        __asm _emit 0x7d
        __asm _emit 0x20
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 81 A4 00 00 00: mov edx, dword ptr [ecx + eax*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 80: mov dword ptr [ebp - 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x80
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 80: mov ecx, dword ptr [ebp - 0x80]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes E8 08 A7 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB D1: jmp 0x586eae0c
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 E0 00 00 00: mov ecx, dword ptr [eax + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 7C FF FF FF: mov dword ptr [ebp - 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 7C FF FF FF: mov ecx, dword ptr [ebp - 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 E6 A6 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 E4 00 00 00: mov eax, dword ptr [edx + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 78 FF FF FF: mov dword ptr [ebp - 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 78 FF FF FF: mov ecx, dword ptr [ebp - 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C7 A6 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 E8 00 00 00: mov edx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 74 FF FF FF: mov dword ptr [ebp - 0x8c], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 74 FF FF FF: mov ecx, dword ptr [ebp - 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A8 A6 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 14 01 00 00: mov ecx, dword ptr [eax + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 70 FF FF FF: mov dword ptr [ebp - 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 70 FF FF FF: mov ecx, dword ptr [ebp - 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 89 A6 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 88 00 00 00: mov ecx, dword ptr [eax + edx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 6C FF FF FF: mov dword ptr [ebp - 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 8C 00 00 00: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 6C FF FF FF: mov ecx, dword ptr [ebp - 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 61 A6 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa6
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 28 01 00 00: mov eax, dword ptr [edx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 3F 06 00 00: call 0x586eb530
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes B8 FF E0 00 00: mov eax, 0xe0ff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xe0
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
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes E9 6F 05 00 00: jmp 0x586eb495
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 E8 04 00 00: jne 0x586eb429
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 0A 88 00 00 00: mov ecx, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 78 B0 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 4F: jle 0x586eafb0
        __asm _emit 0x7e
        __asm _emit 0x4f
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 0A 88 00 00 00: mov eax, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 64 FF FF FF: mov dword ptr [ebp - 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 0A 88 00 00 00: mov ecx, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 40 B0 DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 89 85 68 FF FF FF: mov dword ptr [ebp - 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 68 FF FF FF: mov ecx, dword ptr [ebp - 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 64 FF FF FF: mov ecx, dword ptr [ebp - 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 93 A5 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 26: jmp 0x586eafd6
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 88 00 00 00: mov ecx, dword ptr [eax + edx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 60 FF FF FF: mov dword ptr [ebp - 0xa0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 60 FF FF FF: mov ecx, dword ptr [ebp - 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 6B A5 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 01 88 00 00 00: mov ecx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 AF DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 EA 06: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 8E 8D 02 00 00: jle 0x586eb287
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 00: imul ecx, eax, 0
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 0A 88 00 00 00: mov eax, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 58 FF FF FF: mov dword ptr [ebp - 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 00: shl ecx, 0
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 0A 88 00 00 00: mov ecx, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A7 AF DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 89 85 5C FF FF FF: mov dword ptr [ebp - 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 5C FF FF FF: mov ecx, dword ptr [ebp - 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 58 FF FF FF: mov ecx, dword ptr [ebp - 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 FA A4 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 01 90 00 00 00: mov edx, dword ptr [ecx + eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 50 FF FF FF: mov dword ptr [ebp - 0xb0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 00: imul ecx, eax, 0
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 0A 90 00 00 00: mov ecx, dword ptr [edx + ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5B AF DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 89 85 54 FF FF FF: mov dword ptr [ebp - 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 54 FF FF FF: mov ecx, dword ptr [ebp - 0xac]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 50 FF FF FF: mov ecx, dword ptr [ebp - 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 AE A4 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 48 FF FF FF: mov dword ptr [ebp - 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0F AF DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 83 E9 06: sub ecx, 6
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x06
        ; Exact mapped bytes 89 8D 4C FF FF FF: mov dword ptr [ebp - 0xb4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 4C FF FF FF: mov edx, dword ptr [ebp - 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 48 FF FF FF: mov ecx, dword ptr [ebp - 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 62 A4 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 45 F4 00 00 00 00: mov dword ptr [ebp - 0xc], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eb0f1
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D F4 03: cmp dword ptr [ebp - 0xc], 3
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0x03
        ; Exact mapped bytes 7D 45: jge 0x586eb13c
        __asm _emit 0x7d
        __asm _emit 0x45
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 8A 98 00 00 00: mov eax, dword ptr [edx + ecx*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 40 FF FF FF: mov dword ptr [ebp - 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 8A 98 00 00 00: mov ecx, dword ptr [edx + ecx*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 AE DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 89 85 44 FF FF FF: mov dword ptr [ebp - 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 44 FF FF FF: mov ecx, dword ptr [ebp - 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 40 FF FF FF: mov ecx, dword ptr [ebp - 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 07 A4 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB AC: jmp 0x586eb0e8
        __asm _emit 0xeb
        __asm _emit 0xac
        ; Exact mapped bytes C7 45 F4 00 00 00 00: mov dword ptr [ebp - 0xc], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eb14e
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 55 F4: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 F4: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D F4 0F: cmp dword ptr [ebp - 0xc], 0xf
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0x0f
        ; Exact mapped bytes 7D 45: jge 0x586eb199
        __asm _emit 0x7d
        __asm _emit 0x45
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 81 A4 00 00 00: mov edx, dword ptr [ecx + eax*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 38 FF FF FF: mov dword ptr [ebp - 0xc8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 81 A4 00 00 00: mov ecx, dword ptr [ecx + eax*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 57 AE DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 EA 06: sub edx, 6
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 89 95 3C FF FF FF: mov dword ptr [ebp - 0xc4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 3C FF FF FF: mov eax, dword ptr [ebp - 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 38 FF FF FF: mov ecx, dword ptr [ebp - 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 AA A3 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB AC: jmp 0x586eb145
        __asm _emit 0xeb
        __asm _emit 0xac
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 E0 00 00 00: mov edx, dword ptr [ecx + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 30 FF FF FF: mov dword ptr [ebp - 0xd0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 E0 00 00 00: mov ecx, dword ptr [eax + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1A AE DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 83 E9 06: sub ecx, 6
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x06
        ; Exact mapped bytes 89 8D 34 FF FF FF: mov dword ptr [ebp - 0xcc], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 34 FF FF FF: mov edx, dword ptr [ebp - 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 30 FF FF FF: mov ecx, dword ptr [ebp - 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 6D A3 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 E4 00 00 00: mov ecx, dword ptr [eax + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 28 FF FF FF: mov dword ptr [ebp - 0xd8], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8A E4 00 00 00: mov ecx, dword ptr [edx + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E0 AD DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xad
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 06: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 89 85 2C FF FF FF: mov dword ptr [ebp - 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 2C FF FF FF: mov ecx, dword ptr [ebp - 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 28 FF FF FF: mov ecx, dword ptr [ebp - 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 33 A3 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 20 FF FF FF: mov dword ptr [ebp - 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 AD DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xad
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 89 95 24 FF FF FF: mov dword ptr [ebp - 0xdc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 24 FF FF FF: mov eax, dword ptr [ebp - 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 20 FF FF FF: mov ecx, dword ptr [ebp - 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F9 A2 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 14 01 00 00: mov edx, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 18 FF FF FF: mov dword ptr [ebp - 0xe8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 14 01 00 00: mov ecx, dword ptr [eax + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C AD DD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xad
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 83 E9 06: sub ecx, 6
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x06
        ; Exact mapped bytes 89 8D 1C FF FF FF: mov dword ptr [ebp - 0xe4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 1C FF FF FF: mov edx, dword ptr [ebp - 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 18 FF FF FF: mov ecx, dword ptr [ebp - 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 BF A2 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 A0 01 00 00: jmp 0x586eb427
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 00: imul ecx, eax, 0
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 0A 88 00 00 00: mov eax, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 14 FF FF FF: mov dword ptr [ebp - 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 14 FF FF FF: mov ecx, dword ptr [ebp - 0xec]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 94 A2 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D1 00: imul edx, ecx, 0
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 10 FF FF FF: mov dword ptr [ebp - 0xf0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 10 FF FF FF: mov ecx, dword ptr [ebp - 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 6F A2 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 0C FF FF FF: mov dword ptr [ebp - 0xf4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 0C FF FF FF: mov ecx, dword ptr [ebp - 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 4A A2 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 45 E8 00 00 00 00: mov dword ptr [ebp - 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eb309
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 E8: mov dword ptr [ebp - 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 83 7D E8 0F: cmp dword ptr [ebp - 0x18], 0xf
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0x0f
        ; Exact mapped bytes 7D 23: jge 0x586eb332
        __asm _emit 0x7d
        __asm _emit 0x23
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 94 81 A4 00 00 00: mov edx, dword ptr [ecx + eax*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 08 FF FF FF: mov dword ptr [ebp - 0xf8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 08 FF FF FF: mov ecx, dword ptr [ebp - 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 11 A2 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB CE: jmp 0x586eb300
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes C7 45 E8 00 00 00 00: mov dword ptr [ebp - 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586eb344
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 83 7D E8 03: cmp dword ptr [ebp - 0x18], 3
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 7D 23: jge 0x586eb36d
        __asm _emit 0x7d
        __asm _emit 0x23
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 84 8A 98 00 00 00: mov eax, dword ptr [edx + ecx*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 04 FF FF FF: mov dword ptr [ebp - 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 04 FF FF FF: mov ecx, dword ptr [ebp - 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D6 A1 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB CE: jmp 0x586eb33b
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 E0 00 00 00: mov edx, dword ptr [ecx + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 00 FF FF FF: mov dword ptr [ebp - 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 00 FF FF FF: mov ecx, dword ptr [ebp - 0x100]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B7 A1 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 88 E4 00 00 00: mov ecx, dword ptr [eax + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D FC FE FF FF: mov dword ptr [ebp - 0x104], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D FC FE FF FF: mov ecx, dword ptr [ebp - 0x104]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 9B A1 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 F8 FE FF FF: mov dword ptr [ebp - 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D F8 FE FF FF: mov ecx, dword ptr [ebp - 0x108]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 7F A1 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 91 14 01 00 00: mov edx, dword ptr [ecx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 F4 FE FF FF: mov dword ptr [ebp - 0x10c], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D F4 FE FF FF: mov ecx, dword ptr [ebp - 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 63 A1 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes BA FF E0 00 00: mov edx, 0xe0ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 05 00 00: mov eax, 0x500
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes B8 FE FF 00 00: mov eax, 0xfffe
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes EB 6C: jmp 0x586eb495
        __asm _emit 0xeb
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 83 F9 05: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 55: jne 0x586eb495
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes 83 3D 50 5D 96 58 0C: cmp dword ptr [0x58965d50], 0xc
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x0c
        ; Exact mapped bytes 75 3D: jne 0x586eb486
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 15 04 06 96 58: mov edx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 50 38: mov edx, dword ptr [eax + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x38
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 04 06 96 58: mov eax, dword ptr [0x58960604]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 34: mov eax, dword ptr [edx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x34
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes B8 FB FF 00 00: mov eax, 0xfffb
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes EB 0F: jmp 0x586eb495
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 15 50 5D 96 58: mov edx, dword ptr [0x58965d50]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 15 50 5D 96 58: mov dword ptr [0x58965d50], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 78 3C 00: cmp dword ptr [eax + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x3c
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x586eb4b6
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 51 3C: mov edx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x3c
        ; Exact mapped bytes 81 3A 00 00 01 00: cmp dword ptr [edx], 0x10000
        __asm _emit 0x81
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 77 0A: ja 0x586eb4b6
        __asm _emit 0x77
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 40 3C 00 00 00 00: mov dword ptr [eax + 0x3c], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 51 3C: mov edx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x3c
        ; Exact mapped bytes 89 55 F0: mov dword ptr [ebp - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 83 7D F0 00: cmp dword ptr [ebp - 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf0
        __asm _emit 0x00
        ; Exact mapped bytes 74 60: je 0x586eb525
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 81 38 00 00 01 00: cmp dword ptr [eax], 0x10000
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 77 09: ja 0x586eb4d9
        __asm _emit 0x77
        __asm _emit 0x09
        ; Exact mapped bytes C7 45 F0 00 00 00 00: mov dword ptr [ebp - 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E6: jmp 0x586eb4bf
        __asm _emit 0xeb
        __asm _emit 0xe6
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 2F A1 DA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa1
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 3B 51 3C: cmp edx, dword ptr [ecx + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x3c
        ; Exact mapped bytes 75 12: jne 0x586eb4fd
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB 2A: jmp 0x586eb525
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x586eb523
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 0B A1 DA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa1
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 8D F0 FE FF FF: mov dword ptr [ebp - 0x110], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 85 F0 FE FF FF: mov eax, dword ptr [ebp - 0x110]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes EB 9A: jmp 0x586eb4bf
        __asm _emit 0xeb
        __asm _emit 0x9a
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
