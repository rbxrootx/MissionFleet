// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3243 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58810CB0 .. +0xCAB bytes.
extern "C" __declspec(naked) void FUN_58810cb0_segment_00() {
    __asm {
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 80 CC 02 00 00: mov eax, dword ptr [eax + 0x2cc]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 3D 00 00 00 40: cmp eax, 0x40000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 75 25: jne 0x58810cea
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 5B: cmp dword ptr [eax + 0x164], 0x5b
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5b
        ; Exact mapped bytes 7E 40: jle 0x58810d13
        __asm _emit 0x7e
        __asm _emit 0x40
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x58810d13
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 6C 01 00 00: mov eax, dword ptr [ecx + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x58810d15
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 5D: jne 0x58810d4b
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 5A: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5a
        ; Exact mapped bytes 7E 17: jle 0x58810d13
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58810d13
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 68 01 00 00: mov eax, dword ptr [ecx + 0x168]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58810d15
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E BC 00 00 00: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 29: je 0x58810d4b
        __asm _emit 0x74
        __asm _emit 0x29
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
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
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
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 80 40 03 00 00: mov eax, dword ptr [eax + 0x340]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 6A 05 00 00: jne 0x588112dd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 5C: cmp dword ptr [eax + 0x164], 0x5c
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5c
        ; Exact mapped bytes 7E 17: jle 0x58810d98
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58810d98
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 70 01 00 00: mov eax, dword ptr [ecx + 0x170]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58810d9a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E B8 00 00 00: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x58810dcf
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
        ; Exact mapped bytes 8B 86 D4 00 00 00: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 FC 00 00 00: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 DC 00 00 00: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E4 00 00 00: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D8 00 00 00: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 00 01 00 00: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E0 00 00 00: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E8 00 00 00: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8A 86 B4 00 00 00: mov al, byte ptr [esi + 0xb4]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7B 5E: lea edi, [ebx + 0x5e]
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x5e
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x58810f37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
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
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F4 00 00 00: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 7C: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        ; Exact mapped bytes 66 83 B9 A4 00 00 00 00: cmp word ptr [ecx + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 44: jne 0x58810ebf
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x58810e9a
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58810e9a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 7C 01 00 00: mov eax, dword ptr [edx + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58810e9c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E DC 00 00 00: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 18 08 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 7C: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 91 AC 00 00 00: mov edx, dword ptr [ecx + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 BC 00 00 00: mov eax, dword ptr [edx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 44: jmp 0x58810f03
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 83 B8 64 01 00 00 60: cmp dword ptr [eax + 0x164], 0x60
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        ; Exact mapped bytes 7E 17: jle 0x58810edf
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58810edf
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 80 01 00 00: mov eax, dword ptr [ecx + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58810ee1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E DC 00 00 00: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D3 07 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 7C: mov eax, dword ptr [edx + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 88 B0 00 00 00: mov ecx, dword ptr [eax + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 BC 00 00 00: mov edx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8E E4 00 00 00: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 52 64 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 98 01 00 00: mov ecx, dword ptr [eax + 0x198]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 8B 8E CC 00 00 00: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 38 64 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x588110de
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A8 10: test al, 0x10
        __asm _emit 0xa8
        __asm _emit 0x10
        ; Exact mapped bytes 8B 86 C4 00 00 00: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4F 01 00 00: je 0x58811094
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F4 00 00 00: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x58810f8b
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58810f8b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 7C 01 00 00: mov eax, dword ptr [eax + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58810f8d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E DC 00 00 00: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 27 07 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 80 00 00 00: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 A8 00 00 00: mov eax, dword ptr [edx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 BC 00 00 00: mov ecx, dword ptr [eax + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E E4 00 00 00: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A3 63 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x63
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 7C: mov eax, dword ptr [edx + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x7c
        ; Exact mapped bytes 66 83 B8 A4 00 00 00 00: cmp word ptr [eax + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x58810ff5
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 B8 64 01 00 00 67: cmp dword ptr [eax + 0x164], 0x67
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x67
        ; Exact mapped bytes 7E 37: jle 0x58811015
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x58811015
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 9C 01 00 00: mov eax, dword ptr [ecx + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x58811017
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 83 B8 64 01 00 00 66: cmp dword ptr [eax + 0x164], 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x66
        ; Exact mapped bytes 7E 17: jle 0x58811015
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58811015
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 98 01 00 00: mov eax, dword ptr [edx + 0x198]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58811017
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E F4 00 00 00: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9D 06 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 7C: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        ; Exact mapped bytes 66 83 B9 A6 00 00 00 00: cmp word ptr [ecx + 0xa6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x5881105a
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 B8 64 01 00 00 65: cmp dword ptr [eax + 0x164], 0x65
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x65
        ; Exact mapped bytes 7E 37: jle 0x5881107a
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x5881107a
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 94 01 00 00: mov eax, dword ptr [edx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x5881107c
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 83 B8 64 01 00 00 64: cmp dword ptr [eax + 0x164], 0x64
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes 7E 17: jle 0x5881107a
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5881107a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881107c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E EC 00 00 00: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 38 06 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 4A: jmp 0x588110de
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F4 00 00 00: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D4 00 00 00: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 FC 00 00 00: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 DC 00 00 00: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E4 00 00 00: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8A 86 B4 00 00 00: mov al, byte ptr [esi + 0xb4]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes A8 02: test al, 2
        __asm _emit 0xa8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x588111de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C8 00 00 00: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D0 00 00 00: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F0 00 00 00: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 84 00 00 00: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 A4 00 00 00 00: cmp word ptr [ecx + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 47: jne 0x5881117c
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x58811154
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58811154
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 7C 01 00 00: mov eax, dword ptr [edx + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58811156
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E E0 00 00 00: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5E 05 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 84 00 00 00: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 AC 00 00 00: mov edx, dword ptr [ecx + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 BC 00 00 00: mov eax, dword ptr [edx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 47: jmp 0x588111c3
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 83 B8 64 01 00 00 60: cmp dword ptr [eax + 0x164], 0x60
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        ; Exact mapped bytes 7E 17: jle 0x5881119c
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5881119c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 80 01 00 00: mov eax, dword ptr [ecx + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881119e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E E0 00 00 00: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 16 05 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 84 00 00 00: mov eax, dword ptr [edx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 B0 00 00 00: mov ecx, dword ptr [eax + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 BC 00 00 00: mov edx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8E E8 00 00 00: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 61 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 9C 01 00 00: mov ecx, dword ptr [eax + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7E 05 00 00: jmp 0x5881175c
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A8 20: test al, 0x20
        __asm _emit 0xa8
        __asm _emit 0x20
        ; Exact mapped bytes 8B 86 C8 00 00 00: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F1 06 00 00: je 0x588118dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D0 00 00 00: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F0 00 00 00: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x58811232
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58811232
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 7C 01 00 00: mov eax, dword ptr [eax + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58811234
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E E0 00 00 00: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 80 04 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 88 00 00 00: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 A8 00 00 00: mov eax, dword ptr [edx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 BC 00 00 00: mov ecx, dword ptr [eax + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E E8 00 00 00: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 60 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 88 00 00 00: mov eax, dword ptr [edx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B8 A4 00 00 00 00: cmp word ptr [eax + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x5881129f
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 B8 64 01 00 00 67: cmp dword ptr [eax + 0x164], 0x67
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x67
        ; Exact mapped bytes 7E 37: jle 0x588112bf
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x588112bf
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 9C 01 00 00: mov eax, dword ptr [ecx + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x588112c1
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 83 B8 64 01 00 00 66: cmp dword ptr [eax + 0x164], 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x66
        ; Exact mapped bytes 7E 17: jle 0x588112bf
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588112bf
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 98 01 00 00: mov eax, dword ptr [edx + 0x198]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588112c1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E F8 00 00 00: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F3 03 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 88 00 00 00: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 97 05 00 00: jmp 0x58811874
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 3D 06 00 00: jne 0x58811927
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 5D: cmp dword ptr [eax + 0x164], 0x5d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5d
        ; Exact mapped bytes 7E 17: jle 0x5881130f
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5881130f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 74 01 00 00: mov eax, dword ptr [eax + 0x174]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58811311
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E B8 00 00 00: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x58811346
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
        ; Exact mapped bytes 8B 86 D4 00 00 00: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 FC 00 00 00: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 DC 00 00 00: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E4 00 00 00: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D8 00 00 00: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 00 01 00 00: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E0 00 00 00: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E8 00 00 00: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8A 86 B4 00 00 00: mov al, byte ptr [esi + 0xb4]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 5F 00 00 00: mov edi, 0x5f
        __asm _emit 0xbf
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes A8 04: test al, 4
        __asm _emit 0xa8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x588114b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C4 00 00 00: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F4 00 00 00: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 8C 00 00 00: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 A4 00 00 00 00: cmp word ptr [ecx + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 47: jne 0x58811439
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x58811411
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58811411
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 7C 01 00 00: mov eax, dword ptr [edx + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58811413
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E DC 00 00 00: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A1 02 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 8C 00 00 00: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 AC 00 00 00: mov edx, dword ptr [ecx + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 BC 00 00 00: mov eax, dword ptr [edx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 47: jmp 0x58811480
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 83 B8 64 01 00 00 60: cmp dword ptr [eax + 0x164], 0x60
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        ; Exact mapped bytes 7E 17: jle 0x58811459
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58811459
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 80 01 00 00: mov eax, dword ptr [ecx + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881145b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E DC 00 00 00: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 59 02 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 8C 00 00 00: mov eax, dword ptr [edx + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 B0 00 00 00: mov ecx, dword ptr [eax + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 BC 00 00 00: mov edx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8E E4 00 00 00: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D5 5E 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 A0 01 00 00: mov ecx, dword ptr [eax + 0x1a0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 8B 8E CC 00 00 00: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BB 5E 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E9 AD 01 00 00: jmp 0x58811661
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A8 40: test al, 0x40
        __asm _emit 0xa8
        __asm _emit 0x40
        ; Exact mapped bytes 8B 86 C4 00 00 00: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x58811617
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F4 00 00 00: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x58811508
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58811508
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 7C 01 00 00: mov eax, dword ptr [eax + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881150a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E DC 00 00 00: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AA 01 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 90 00 00 00: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 A8 00 00 00: mov eax, dword ptr [edx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 BC 00 00 00: mov ecx, dword ptr [eax + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E E4 00 00 00: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 5E 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 90 00 00 00: mov eax, dword ptr [edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B8 A4 00 00 00 00: cmp word ptr [eax + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x58811575
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 B8 64 01 00 00 67: cmp dword ptr [eax + 0x164], 0x67
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x67
        ; Exact mapped bytes 7E 37: jle 0x58811595
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x58811595
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 9C 01 00 00: mov eax, dword ptr [ecx + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x58811597
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 83 B8 64 01 00 00 66: cmp dword ptr [eax + 0x164], 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x66
        ; Exact mapped bytes 7E 17: jle 0x58811595
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58811595
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 98 01 00 00: mov eax, dword ptr [edx + 0x198]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58811597
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E F4 00 00 00: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1D 01 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 90 00 00 00: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 A6 00 00 00 00: cmp word ptr [ecx + 0xa6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x588115dd
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 B8 64 01 00 00 65: cmp dword ptr [eax + 0x164], 0x65
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x65
        ; Exact mapped bytes 7E 37: jle 0x588115fd
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x588115fd
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 94 01 00 00: mov eax, dword ptr [edx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x588115ff
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 83 B8 64 01 00 00 64: cmp dword ptr [eax + 0x164], 0x64
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes 7E 17: jle 0x588115fd
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588115fd
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588115ff
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E EC 00 00 00: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B5 00 F2 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 4A: jmp 0x58811661
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 CC 00 00 00: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 EC 00 00 00: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F4 00 00 00: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D4 00 00 00: mov eax, dword ptr [esi + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 FC 00 00 00: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 DC 00 00 00: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E4 00 00 00: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8A 86 B4 00 00 00: mov al, byte ptr [esi + 0xb4]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes A8 08: test al, 8
        __asm _emit 0xa8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x5881177a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C8 00 00 00: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D0 00 00 00: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F0 00 00 00: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 94 00 00 00: mov ecx, dword ptr [eax + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 A4 00 00 00 00: cmp word ptr [ecx + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 47: jne 0x588116ff
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588116d7
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588116d7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 7C 01 00 00: mov eax, dword ptr [edx + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588116d9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E E0 00 00 00: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DB FF F1 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 94 00 00 00: mov ecx, dword ptr [eax + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 AC 00 00 00: mov edx, dword ptr [ecx + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 BC 00 00 00: mov eax, dword ptr [edx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 47: jmp 0x58811746
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 83 B8 64 01 00 00 60: cmp dword ptr [eax + 0x164], 0x60
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        ; Exact mapped bytes 7E 17: jle 0x5881171f
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5881171f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 80 01 00 00: mov eax, dword ptr [ecx + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58811721
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E E0 00 00 00: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 93 FF F1 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 94 00 00 00: mov eax, dword ptr [edx + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 B0 00 00 00: mov ecx, dword ptr [eax + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 BC 00 00 00: mov edx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8E E8 00 00 00: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0F 5C 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 A4 01 00 00: mov ecx, dword ptr [eax + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 64: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 8B 8E D0 00 00 00: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 F5 5B 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5b
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes E9 AD 01 00 00: jmp 0x58811927
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 86 C8 00 00 00: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 89 55 01 00 00: jns 0x588118dd
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D0 00 00 00: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F0 00 00 00: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x588117ce
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588117ce
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 7C 01 00 00: mov eax, dword ptr [eax + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588117d0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E E0 00 00 00: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E4 FE F1 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 98 00 00 00: mov edx, dword ptr [ecx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 A8 00 00 00: mov eax, dword ptr [edx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 BC 00 00 00: mov ecx, dword ptr [eax + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E E8 00 00 00: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 60 5B 0F 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5b
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 98 00 00 00: mov eax, dword ptr [edx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B8 A4 00 00 00 00: cmp word ptr [eax + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x5881183b
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 B8 64 01 00 00 67: cmp dword ptr [eax + 0x164], 0x67
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x67
        ; Exact mapped bytes 7E 37: jle 0x5881185b
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x5881185b
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 9C 01 00 00: mov eax, dword ptr [ecx + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x5881185d
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 83 B8 64 01 00 00 66: cmp dword ptr [eax + 0x164], 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x66
        ; Exact mapped bytes 7E 17: jle 0x5881185b
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5881185b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 98 01 00 00: mov eax, dword ptr [edx + 0x198]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5881185d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E F8 00 00 00: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 57 FE F1 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 98 00 00 00: mov ecx, dword ptr [eax + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 B9 A6 00 00 00 00: cmp word ptr [ecx + 0xa6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 47 A2 58: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 20: jne 0x588118a3
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 B8 64 01 00 00 65: cmp dword ptr [eax + 0x164], 0x65
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x65
        ; Exact mapped bytes 7E 37: jle 0x588118c3
        __asm _emit 0x7e
        __asm _emit 0x37
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x588118c3
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 94 01 00 00: mov eax, dword ptr [edx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x588118c5
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 83 B8 64 01 00 00 64: cmp dword ptr [eax + 0x164], 0x64
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes 7E 17: jle 0x588118c3
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588118c3
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588118c5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E F0 00 00 00: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 EF FD F1 FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 C0 00 00 00: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 4A: jmp 0x58811927
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D0 00 00 00: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F0 00 00 00: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F8 00 00 00: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 D8 00 00 00: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 00 01 00 00: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E0 00 00 00: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 E8 00 00 00: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 80 BE B4 00 00 00 00: cmp byte ptr [esi + 0xb4], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 75 27: jne 0x58811959
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 86 B8 00 00 00: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 86 BC 00 00 00: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B B6 C0 00 00 00: mov esi, dword ptr [esi + 0xc0]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
