// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541D6F .. +0x1FA bytes.
extern "C" __declspec(naked) void FUN_00541d6f_00541D6F() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 48: sub esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x48
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D B8: mov dword ptr [ebp - 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 68 73 01 00 00: push 0x173
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 57 67 00: push 0x675764
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 B8: mov eax, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D2 84 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x541da8
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 74 01 00 00: push 0x174
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 57 67 00: push 0x675764
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 9D 6F FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x541da8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 E0: jne 0x541d8e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 FF FC FE FF: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 68 F1 00 00 00: push 0xf1
        __asm _emit 0x68
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D F4 00: cmp dword ptr [ebp - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x541dd9
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 87 01 00 00: jmp 0x541f60
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 83 7D E4 00: cmp dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x541df7
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x541f60
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 04 BA 68 00: call dword ptr [0x68ba04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 83 7D F0 00: cmp dword ptr [ebp - 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf0
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x541e11
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x541f60
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 83 FA 01: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x541e32
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 68 83 01 00 00: push 0x183
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 57 67 00: push 0x675764
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 6F FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x541e32
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 D9: jne 0x541e11
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes 68 85 01 00 00: push 0x185
        __asm _emit 0x68
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 57 67 00: push 0x675764
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        ; Exact mapped bytes C1 E2 02: shl edx, 2
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7F A2 F8 FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 D0: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes C7 45 E8 00 00 00 00: mov dword ptr [ebp - 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x541e72
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        ; Exact mapped bytes 39 45 E8: cmp dword ptr [ebp - 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 7D 1C: jge 0x541e9c
        __asm _emit 0x7d
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 98 05 00 00: call 0x542420
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 14 48: mov dx, word ptr [eax + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x48
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 89 14 81: mov dword ptr [ecx + eax*4], edx
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x81
        ; Exact mapped bytes EB CD: jmp 0x541e69
        __asm _emit 0xeb
        __asm _emit 0xcd
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D B8: mov ecx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes E8 C1 02 00 00: call 0x542173
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 55 CC: mov dword ptr [ebp - 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E5 A5 F8 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 7D EC 00: cmp dword ptr [ebp - 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0x00
        ; Exact mapped bytes 74 7D: je 0x541f4a
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4D DC: lea ecx, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes E8 C7 FC FE FF: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 83 C0 07: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 83 C2 07: add edx, 7
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes E8 A5 FC FE FF: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 DC: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 89 45 C4: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 89 4D C8: mov dword ptr [ebp - 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 55 C8: mov edx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 C4: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 89 4D BC: mov dword ptr [ebp - 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes 8B 55 D8: mov edx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D B8: mov ecx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes E8 A2 FB FF FF: call 0x541add
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D B8: mov ecx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes E8 22 00 00 00: call 0x541f69
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7D 78 F0 FF: call 0x4497d0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
