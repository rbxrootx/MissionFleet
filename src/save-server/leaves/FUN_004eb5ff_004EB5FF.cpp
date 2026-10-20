// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB5FF .. +0x378 bytes.
extern "C" __declspec(naked) void FUN_004eb5ff_004EB5FF() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 46 CF 58 00: push 0x58cf46
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xcf
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 30: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x30
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D CC: mov dword ptr [ebp - 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x4eb64b
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 33 7E FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 14: jne 0x4eb64b
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 08 01 00 00: push 0x108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 41 67 00: push 0x6741e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA D6 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4eb64b
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
        ; Exact mapped bytes 75 CF: jne 0x4eb620
        __asm _emit 0x75
        __asm _emit 0xcf
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E8 6C A0 03 00: call 0x5256c5
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 14: jne 0x4eb671
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 09 01 00 00: push 0x109
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 41 67 00: push 0x6741e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 D6 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4eb671
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DA: jne 0x4eb651
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x4eb6a1
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 81 78 08 FF FF 00 00: cmp dword ptr [eax + 8], 0xffff
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x4eb6a1
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 2C 42 67 00: push 0x67422c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x42
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 7C 4F FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4f
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E8 58 78 FB FF: call 0x4a2ef9
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E8 5E FC FF FF: call 0x4eb309
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 45 E4: lea eax, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E8 2C A4 03 00: call 0x525ae3
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 FF 7F 00 00: cmp ecx, 0x7fff
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x4eb6d6
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8D 55 EC: lea edx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E8 6A A4 03 00: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x4eb6f7
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 25 00 80 00 00: and eax, 0x8000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 10: shl eax, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 E5 7F: and ch, 0x7f
        __asm _emit 0x80
        __asm _emit 0xe5
        __asm _emit 0x7f
        ; Exact mapped bytes 0B C1: or eax, ecx
        __asm _emit 0x0b
        __asm _emit 0xc1
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 81 E2 00 00 00 80: and edx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 28: jne 0x4eb72c
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 83 7D 10 00: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x4eb71d
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E8 95 96 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 0C 04 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 38 02 00 00: jmp 0x4eb964
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 81 E2 FF FF 00 00: and edx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FA FF FF 00 00: cmp edx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x4eb85c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 F0: lea eax, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 28 E2 FF FF: call 0x4e9976
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 83 7D E8 00: cmp dword ptr [ebp - 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x4eb76a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E8 48 96 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes E8 BF 03 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 25 FF FF FF 7F: and eax, 0x7fffffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 3B 45 F0: cmp eax, dword ptr [ebp - 0x10]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x4eb822
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 81 E2 00 00 00 80: and edx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 15: jne 0x4eb7a3
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E8 11 96 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes E8 88 03 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7F: jmp 0x4eb822
        __asm _emit 0xeb
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 83 78 38 00: cmp dword ptr [eax + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 4D: jne 0x4eb7f9
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 68 3D 01 00 00: push 0x13d
        __asm _emit 0x68
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 41 67 00: push 0x6741e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 6A 1C: push 0x1c
        __asm _emit 0x6a
        __asm _emit 0x1c
        ; Exact mapped bytes E8 42 09 FE FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 D0: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D D0 00: cmp dword ptr [ebp - 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x4eb7dc
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 4D D0: mov ecx, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E8 69 BE FD FF: call 0x4c7640
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 C8: mov dword ptr [ebp - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes EB 07: jmp 0x4eb7e3
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 C8 00 00 00 00: mov dword ptr [ebp - 0x38], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D C8: mov ecx, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 89 4D D4: mov dword ptr [ebp - 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 CC: mov edx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 45 D4: mov eax, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 89 42 38: mov dword ptr [edx + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        ; Exact mapped bytes 68 3E 01 00 00: push 0x13e
        __asm _emit 0x68
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 41 67 00: push 0x6741e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 51 38: mov edx, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x38
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 51 EA FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 CC: mov edx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 4A 38: mov ecx, dword ptr [edx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x38
        ; Exact mapped bytes E8 AA BD 03 00: call 0x5275cc
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E8 C6 F7 FF FF: call 0x4eaff0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 51 30: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x30
        ; Exact mapped bytes 89 55 C4: mov dword ptr [ebp - 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 8B 45 C4: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 51 30: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x30
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 89 50 30: mov dword ptr [eax + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x30
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 49 34: mov ecx, dword ptr [ecx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x34
        ; Exact mapped bytes E8 2C 3B FD FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x4eb911
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 81 E2 FF FF FF 7F: and edx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 89 55 DC: mov dword ptr [ebp - 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 83 7D DC 00: cmp dword ptr [ebp - 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xdc
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x4eb87e
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 48 34: mov ecx, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x34
        ; Exact mapped bytes E8 42 AB 03 00: call 0x5263bb
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 39 45 DC: cmp dword ptr [ebp - 0x24], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 76 13: jbe 0x4eb891
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E8 21 95 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 98 02 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D DC: mov ecx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 CC: mov edx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 4A 34: mov ecx, dword ptr [edx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x34
        ; Exact mapped bytes E8 46 AB 03 00: call 0x5263e6
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 83 7D E8 00: cmp dword ptr [ebp - 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4eb8bd
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 4E 01 00 00: push 0x14e
        __asm _emit 0x68
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 41 67 00: push 0x6741e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 88 D4 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4eb8bd
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
        ; Exact mapped bytes 75 E0: jne 0x4eb8a3
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes C7 45 E0 00 00 00 00: mov dword ptr [ebp - 0x20], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 F0 00 00 00 00: mov dword ptr [ebp - 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 83 79 38 00: cmp dword ptr [ecx + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x4eb8fc
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8D 55 D8: lea edx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 49 38: mov ecx, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x38
        ; Exact mapped bytes E8 03 C2 FD FF: call 0x4c7af0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 E0: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 83 7D E0 00: cmp dword ptr [ebp - 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x4eb8fc
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 55 D8: mov edx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 89 55 F0: mov dword ptr [ebp - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 83 7D E0 00: cmp dword ptr [ebp - 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x4eb911
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 81 E1 FF FF FF 7F: and ecx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 89 4D F0: mov dword ptr [ebp - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x4eb93a
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 07 EC FE FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 13: jne 0x4eb93a
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E8 78 94 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes E8 EF 01 00 00: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D 0C 00: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x4eb94a
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB 09: jmp 0x4eb953
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 55 CC: mov edx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 89 42 0C: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 83 7D 10 00: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x4eb961
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
