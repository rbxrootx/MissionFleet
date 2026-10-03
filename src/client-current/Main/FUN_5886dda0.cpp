// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 8699 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886DDA0 .. +0x21FB bytes.
extern "C" __declspec(naked) void FUN_5886dda0_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 05 61 98 58: push 0x58986105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x61
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
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
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
        ; Exact mapped bytes 8D 44 24 24: lea eax, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
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
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 48: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 4C 24 44: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 54 24 40: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8B 6C 24 3C: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 5C 24 38: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 BE 84 F4 FF: call 0x587b62b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 89 7C 24 30: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes C7 06 D8 ED 99 58: mov dword ptr [esi], 0x5899edd8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xd8
        __asm _emit 0xed
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 BE 38 03 00 00: mov dword ptr [esi + 0x338], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 43 EE 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 01: mov byte ptr [esp + 0x2c], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x01
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 46: je 0x5886de61
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 B4 01 00 00: cmp dword ptr [ecx + 0x164], 0x1b4
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 23: jle 0x5886de50
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes 39 B9 8C 01 00 00: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x5886de50
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 D0 06 00 00: mov ecx, dword ptr [ecx + 0x6d0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 12 3E EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x5886de63
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 01 3E EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886de63
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 90 00 00 00: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 4E 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 90 00 00 00: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF BF 00 00: mov edx, 0xbfff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 BE ED 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xed
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 02: mov byte ptr [esp + 0x2c], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x02
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 46: je 0x5886dee6
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 B3 01 00 00: cmp dword ptr [ecx + 0x164], 0x1b3
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 23: jle 0x5886ded5
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes 39 B9 8C 01 00 00: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x5886ded5
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 CC 06 00 00: mov ecx, dword ptr [ecx + 0x6cc]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8D 3D EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x5886dee8
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7C 3D EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886dee8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 C8 00 00 00: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 8C 00 00 00: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 4D 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 8C 00 00 00: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF BF 00 00: mov edx, 0xbfff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 39 ED 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xed
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 03: mov byte ptr [esp + 0x2c], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x03
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 27: je 0x5886df4e
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 08: lea eax, [ebp + 8]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4B 0C: lea ecx, [ebx + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 63 52 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes EB 02: jmp 0x5886df50
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E A8 00 00 00: mov dword ptr [esi + 0xa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB 4D 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A8 00 00 00: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FB FF 00 00: mov edx, 0xfffb
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 D3 EC 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 04: mov byte ptr [esp + 0x2c], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2E: je 0x5886dfb9
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D 33: lea ecx, [ebp + 0x33]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x33
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 53 6E: lea edx, [ebx + 0x6e]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x6e
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 4D 22: lea ecx, [ebp + 0x22]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x22
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 53 2C: lea edx, [ebx + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x2c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 CB 52 EC FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886dfbb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        ; Exact mapped bytes 89 BE AC 00 00 00: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886dfe2
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 6E 4F 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886dfef
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F1 4E 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 EC 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 05: mov byte ptr [esp + 0x2c], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x05
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x5886e049
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 07: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 7E 17: jle 0x5886e02f
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e02f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 01 00 00: add edx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e031
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 4D 10: lea ecx, [ebp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8B 97 00 00 00: lea ecx, [ebx + 0x97]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B9 90 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e04b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 08 01 00 00: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F1 EB 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xeb
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 06: mov byte ptr [esp + 0x2c], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x5886e07f
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 23 51 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e081
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 94 00 00 00: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB EB 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 07: mov byte ptr [esp + 0x2c], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x07
        ; Exact mapped bytes BB 48 01 00 00: mov ebx, 0x148
        __asm _emit 0xbb
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x5886e0e8
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 99 64 01 00 00: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e0cd
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e0cd
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 8C 01 00 00: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 20 05 00 00: mov ecx, dword ptr [edx + 0x520]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e0cf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7A 3B EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886e0ea
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 9C 00 00 00: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1F 4C 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 37 EB 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xeb
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 08: mov byte ptr [esp + 0x2c], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x08
        ; Exact mapped bytes BF 49 01 00 00: mov edi, 0x149
        __asm _emit 0xbf
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x5886e16c
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 64 01 00 00: cmp dword ptr [ecx + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e151
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e151
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 24 05 00 00: mov ecx, dword ptr [ecx + 0x524]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e153
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F6 3A EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3a
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886e16e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 98 00 00 00: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B 4B 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 B3 EA 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 09: mov byte ptr [esp + 0x2c], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x09
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x5886e1eb
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 99 64 01 00 00: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e1d0
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e1d0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 20 05 00 00: mov ecx, dword ptr [ecx + 0x520]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e1d2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 5C 24 38: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 77 3A EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3a
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x5886e1f1
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 5C 24 38: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A4 00 00 00: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 4B 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A4 00 00 00: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 30 EA 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 0A: mov byte ptr [esp + 0x2c], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0a
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3C: je 0x5886e26a
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 64 01 00 00: cmp dword ptr [ecx + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e253
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e253
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 8C 01 00 00: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 24 05 00 00: mov ecx, dword ptr [edx + 0x524]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e255
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F8 39 EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x39
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886e26c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A0 00 00 00: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9D 4A 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A0 00 00 00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FF 7F 00 00: mov edx, 0x7fff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 B5 E9 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 0B: mov byte ptr [esp + 0x2c], 0xb
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3A: je 0x5886e2e3
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D AC 00 00 00: lea ecx, [ebp + 0xac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 53 6C: lea edx, [ebx + 0x6c]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x6c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8D 9C 00 00 00: lea ecx, [ebp + 0x9c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 53 0C: lea edx, [ebx + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A1 4F EC FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x4f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886e2e5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 46 26: movzx eax, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 89 BE B0 00 00 00: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e305
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 4B 4C 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e312
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 CE 4B 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 35 E9 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 0C: mov byte ptr [esp + 0x2c], 0xc
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 40: je 0x5886e369
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D AB 00 00 00: lea ecx, [ebp + 0xab]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 93 B8 00 00 00: lea edx, [ebx + 0xb8]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8D 9B 00 00 00: lea ecx, [ebp + 0x9b]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 93 9A 00 00 00: lea edx, [ebx + 0x9a]
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1B 4F EC FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886e36b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 46 26: movzx eax, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 89 BE D4 00 00 00: mov dword ptr [esi + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e38b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C5 4B 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e398
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 48 4B 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AC E8 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 0D: mov byte ptr [esp + 0x2c], 0xd
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 49: je 0x5886e3fb
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e3db
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e3db
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 32 00 00: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e3dd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 8D F3 00 00 00: lea ecx, [ebp + 0xf3]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4B 03: lea ecx, [ebx + 3]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 07 8D 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e3fd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F8 00 00 00: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0C 49 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE F8 00 00 00: mov edi, dword ptr [esi + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e436
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1A 4B 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e443
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9D 4A 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 E8 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 0E: mov byte ptr [esp + 0x2c], 0xe
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0e
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 49: je 0x5886e4a6
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e486
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e486
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 32 00 00: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e488
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 8D F3 00 00 00: lea ecx, [ebp + 0xf3]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4B 26: lea ecx, [ebx + 0x26]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x26
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5C 8C 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e4a8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 FC 00 00 00: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 61 48 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE FC 00 00 00: mov edi, dword ptr [esi + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e4e1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 6F 4A 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e4ee
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F2 49 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 E7 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe7
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 0F: mov byte ptr [esp + 0x2c], 0xf
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x0f
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 49: je 0x5886e551
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e531
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e531
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 32 00 00: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e533
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 8D F3 00 00 00: lea ecx, [ebp + 0xf3]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4B 49: lea ecx, [ebx + 0x49]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x49
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B1 8B 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e553
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 00 01 00 00: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B6 47 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE 00 01 00 00: mov edi, dword ptr [esi + 0x100]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e58c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C4 49 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e599
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 47 49 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB E6 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 10: mov byte ptr [esp + 0x2c], 0x10
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 46: je 0x5886e5f9
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 07: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 7E 17: jle 0x5886e5d9
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e5d9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 01 00 00: add edx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e5db
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 8D FA 00 00 00: lea ecx, [ebp + 0xfa]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4B 61: lea ecx, [ebx + 0x61]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x61
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 09 8B 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e5fb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 04 01 00 00: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0E 47 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE 04 01 00 00: mov edi, dword ptr [esi + 0x104]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e634
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1C 49 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e641
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9F 48 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 06 E6 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe6
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 11: mov byte ptr [esp + 0x2c], 0x11
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x11
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 54: je 0x5886e6ac
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 88 03 00 00: cmp dword ptr [ecx + 0x164], 0x388
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e681
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e681
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 20 0E 00 00: mov ecx, dword ptr [ecx + 0xe20]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e683
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 95 0B 01 00 00: lea edx, [ebp + 0x10b]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 53 15: lea edx, [ebx + 0x15]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x15
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 58 01 F1 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886e6ae
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes BA 96 00 00 00: mov edx, 0x96
        __asm _emit 0xba
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 56 26: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 89 BE B0 01 00 00: mov dword ptr [esi + 0x1b0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e6d6
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 7A 48 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e6e3
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 FD 47 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 64 E5 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe5
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 12: mov byte ptr [esp + 0x2c], 0x12
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x12
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 54: je 0x5886e74e
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 86 03 00 00: cmp dword ptr [ecx + 0x164], 0x386
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e723
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e723
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 18 0E 00 00: mov edx, dword ptr [ecx + 0xe18]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e725
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 8D 0B 01 00 00: lea ecx, [ebp + 0x10b]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4B 15: lea ecx, [ebx + 0x15]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x15
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B6 00 F1 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886e750
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B8 96 00 00 00: mov eax, 0x96
        __asm _emit 0xb8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 89 BE AC 01 00 00: mov dword ptr [esi + 0x1ac], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e778
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 D8 47 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e785
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 5B 47 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 C2 E4 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 13: mov byte ptr [esp + 0x2c], 0x13
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x13
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 54: je 0x5886e7f0
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 87 03 00 00: cmp dword ptr [ecx + 0x164], 0x387
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886e7c5
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e7c5
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 1C 0E 00 00: mov edx, dword ptr [ecx + 0xe1c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e7c7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8D 8D 0B 01 00 00: lea ecx, [ebp + 0x10b]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4B 15: lea ecx, [ebx + 0x15]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x15
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 14 00 F1 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886e7f2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B8 96 00 00 00: mov eax, 0x96
        __asm _emit 0xb8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 89 BE A8 01 00 00: mov dword ptr [esi + 0x1a8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e81a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 36 47 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e827
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B9 46 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D E4 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 14: mov byte ptr [esp + 0x2c], 0x14
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 46: je 0x5886e887
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 07: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 7E 17: jle 0x5886e867
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e867
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 01 00 00: add edx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e869
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 8D 1F 01 00 00: lea ecx, [ebp + 0x11f]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4B 14: lea ecx, [ebx + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7B 88 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e889
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 0C 01 00 00: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B0 E3 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 15: mov byte ptr [esp + 0x2c], 0x15
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x15
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 46: je 0x5886e8f4
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 07: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 7E 17: jle 0x5886e8d4
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e8d4
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 01 00 00: add edx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e8d6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 1F 01 00 00: add ebp, 0x11f
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 83 C3 61: add ebx, 0x61
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x61
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0E 88 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e8f6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 08 01 00 00: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D AE 08 01 00 00: lea ebp, [esi + 0x108]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 10 01 00 00: mov dword ptr [esi + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 09 44 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 01 00 00: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 43 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 10 01 00 00: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E9 43 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes BB 03 00 00 00: mov ebx, 3
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 8B 7D 00: mov edi, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e95f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F1 45 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886e96c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 74 45 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 CC: jne 0x5886e940
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 D3 E2 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 16: mov byte ptr [esp + 0x2c], 0x16
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x16
        ; Exact mapped bytes 8D 6B 2D: lea ebp, [ebx + 0x2d]
        __asm _emit 0x8d
        __asm _emit 0x6b
        __asm _emit 0x2d
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 55: je 0x5886e9e3
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 64 01 00 00: cmp dword ptr [ecx + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x5886e9b2
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886e9b2
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 B4 00 00 00: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886e9b4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 81 C1 2E 01 00 00: add ecx, 0x12e
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 40: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 15: add ecx, 0x15
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x15
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 00 CA 9A 3B: push 0x3b9aca00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 21 FE F0 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886e9e5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B8 96 00 00 00: mov eax, 0x96
        __asm _emit 0xb8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 89 BE B4 01 00 00: mov dword ptr [esi + 0x1b4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x5886ea0d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 43 45 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x5886ea1a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C6 44 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 2D E2 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 17: mov byte ptr [esp + 0x2c], 0x17
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x17
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 50: je 0x5886ea81
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 64 01 00 00: cmp dword ptr [ecx + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x5886ea55
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886ea55
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 B4 00 00 00: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ea57
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 48: add ecx, 0x48
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x48
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 40: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 15: add ecx, 0x15
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x15
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 81 FD F0 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5886ea83
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 A4 01 00 00: mov dword ptr [esi + 0x1a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 B8 01 00 00: lea eax, [esi + 0x1b8]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 14 01 00 00: lea ecx, [esi + 0x114]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 18 3E 00 00 00: mov dword ptr [esp + 0x18], 0x3e
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C 44 00 00 00: mov dword ptr [esp + 0x1c], 0x44
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 20 4A 00 00 00: mov dword ptr [esp + 0x20], 0x4a
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 48: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 4C 24 40: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 E1 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 2C 18: mov byte ptr [esp + 0x2c], 0x18
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x18
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x5886eb72
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 06: cmp dword ptr [eax + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 7E 17: jle 0x5886eb02
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886eb02
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 80 01 00 00: add ebp, 0x180
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886eb04
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 48: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C1 EA 02: shr edx, 2
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x02
        ; Exact mapped bytes 8B 44 94 18: mov eax, dword ptr [esp + edx*4 + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x18
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 44 08 02: lea eax, [eax + ecx + 2]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 C2 15: add edx, 0x15
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x15
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 6A 46 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2A: je 0x5886eb74
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 45 20: lea eax, [ebp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886eb74
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 44: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 79 B4: mov dword ptr [ecx - 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0xb4
        ; Exact mapped bytes BA FB FF 00 00: mov edx, 0xfffb
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 79 B4: mov edi, dword ptr [ecx - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0xb4
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886eba8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A8 43 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ebb5
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 2B 43 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8F E0 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 2C 19: mov byte ptr [esp + 0x2c], 0x19
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x19
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 55: je 0x5886ec24
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5886ebef
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5886ebef
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ebf1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 7C 24 3C: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C1 E9 02: shr ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4C 8C 18: mov ecx, dword ptr [esp + ecx*4 + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0x18
        ; Exact mapped bytes 03 CB: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xcb
        ; Exact mapped bytes 8D 4C 39 02: lea ecx, [ecx + edi + 2]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C1 28: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E0 84 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886ec26
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 40: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 7D 04: mov dword ptr [ebp + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ec4e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 02 43 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ec5b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 85 42 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 40 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC DF 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 2C 1A: mov byte ptr [esp + 0x2c], 0x1a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x1a
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 55: je 0x5886ecd7
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5886eca2
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5886eca2
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886eca4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 54 24 48: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 7C 24 3C: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C1 EA 02: shr edx, 2
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x02
        ; Exact mapped bytes 8B 54 94 18: mov edx, dword ptr [esp + edx*4 + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x94
        __asm _emit 0x18
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 8D 54 3A 02: lea edx, [edx + edi + 2]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x3a
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 3C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C2 54: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x54
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 2D 84 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886ecd9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7D 00: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ecfd
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 53 42 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ed0a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 D6 41 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 09 40 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 30 DF 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 2C 1B: mov byte ptr [esp + 0x2c], 0x1b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x1b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 67: je 0x5886ed95
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 2C: cmp dword ptr [ecx + 0x164], 0x2c
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2c
        ; Exact mapped bytes 7E 17: jle 0x5886ed54
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886ed54
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 B0 00 00 00: mov ecx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ed56
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 54 24 48: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 7C 24 3C: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C1 EA 02: shr edx, 2
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x02
        ; Exact mapped bytes 8B 54 94 18: mov edx, dword ptr [esp + edx*4 + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x94
        __asm _emit 0x18
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes 8D 54 3A 06: lea edx, [edx + edi + 6]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x3a
        __asm _emit 0x06
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 40: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 81 C2 87 00 00 00: add edx, 0x87
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 94 00 00 00: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 C4 09 00 00: push 0x9c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 6F FA F0 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfa
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886ed97
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 44: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 7D 2C: mov dword ptr [ebp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x2c
        ; Exact mapped bytes 66 8B 56 26: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C2 33: add dx, 0x33
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x33
        ; Exact mapped bytes 0F B7 C2: movzx eax, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc2
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886edbf
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 91 41 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886edcc
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 14 41 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 7B DE 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xde
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 2C 1C: mov byte ptr [esp + 0x2c], 0x1c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x1c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 67: je 0x5886ee4a
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 2C: cmp dword ptr [ecx + 0x164], 0x2c
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2c
        ; Exact mapped bytes 7E 17: jle 0x5886ee09
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886ee09
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 B0 00 00 00: mov edx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ee0b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 7C 24 3C: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C1 E9 02: shr ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4C 8C 18: mov ecx, dword ptr [esp + ecx*4 + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0x18
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 03 CB: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xcb
        ; Exact mapped bytes 8D 4C 39 06: lea ecx, [ecx + edi + 6]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x39
        __asm _emit 0x06
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 40: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 81 C1 87 00 00 00: add ecx, 0x87
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 C4 09 00 00: push 0x9c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 BA F9 F0 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf9
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886ee4c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7D 00: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ee70
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E0 40 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ee7d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 63 40 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 3E 09 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 44 24 48: inc dword ptr [esp + 0x48]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 83 44 24 40 08: add dword ptr [esp + 0x40], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes B9 FF BF 00 00: mov ecx, 0xbfff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 0E: add ebx, 0xe
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x0e
        ; Exact mapped bytes 81 FB 9A 00 00 00: cmp ebx, 0x9a
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6C 24 44: mov dword ptr [esp + 0x44], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 0F 8C 0B FC FF FF: jl 0x5886eac0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8F DD 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 1D: mov byte ptr [esp + 0x2c], 0x1d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x1d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 48: je 0x5886ef17
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5886eeef
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5886eeef
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886eef1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C1 2C: add ecx, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x2c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 81 C1 86 00 00 00: add ecx, 0x86
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 EB 81 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ef19
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 98 01 00 00: mov dword ptr [esi + 0x198], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 3D 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE 98 01 00 00: mov edi, dword ptr [esi + 0x198]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ef52
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 FE 3F 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ef5f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 81 3F 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 3C: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 FF E5 00 00: mov eax, 0xe5ff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 05 00 00: mov ecx, 0x500
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8D 9E D8 00 00 00: lea ebx, [esi + 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 B6 00 00 00: add ebp, 0xb6
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 48 08 00 00 00: mov dword ptr [esp + 0x48], 8
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 AF DC 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdc
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 2C 1E: mov byte ptr [esp + 0x2c], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x1e
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 38: je 0x5886efe7
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 70 70 00: push 0x707070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 10: lea edx, [ebp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 91 C8 00 00 00: lea edx, [ecx + 0xc8]
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 83 C1 0E: add ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0e
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 9D 42 EC FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x42
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886efe9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7B DC: mov dword ptr [ebx - 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 96 00 00 00: mov eax, 0x96
        __asm _emit 0xb8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886f00e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 42 3F 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886f01b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C5 3E 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 2C DC 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xdc
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 2C 1F: mov byte ptr [esp + 0x2c], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x1f
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3B: je 0x5886f06d
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 70 70 00: push 0x707070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D 10: lea ecx, [ebp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8D 91 B8 00 00 00: lea edx, [ecx + 0xb8]
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 81 C1 9A 00 00 00: add ecx, 0x9a
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 17 42 EC FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x42
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x5886f06f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 96 00 00 00: mov eax, 0x96
        __asm _emit 0xb8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 03 46 26: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886f093
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 BD 3E 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886f0a0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 40 3E 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 0C: add ebp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x0c
        ; Exact mapped bytes 83 6C 24 48 01: sub dword ptr [esp + 0x48], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 E7 FE FF FF: jne 0x5886ef98
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 96 DB 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdb
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 20: mov byte ptr [esp + 0x2c], 0x20
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x20
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 79: je 0x5886f143
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3D: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 7E 17: jle 0x5886f0ef
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
        ; Exact mapped bytes 74 0E: je 0x5886f0ef
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 F4 00 00 00: mov ebp, dword ptr [ecx + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f0f1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 0C: sub eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C1 32: add ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 93 40 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886f145
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886f145
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 28 03 00 00: mov dword ptr [esi + 0x328], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F7 DA 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xda
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 21: mov byte ptr [esp + 0x2c], 0x21
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x21
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 79: je 0x5886f1e2
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3C: cmp dword ptr [eax + 0x164], 0x3c
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3c
        ; Exact mapped bytes 7E 17: jle 0x5886f18e
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
        ; Exact mapped bytes 74 0E: je 0x5886f18e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA F0 00 00 00: mov ebp, dword ptr [edx + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f190
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 0C: sub eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C1 32: add ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 F4 3F 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886f1e4
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886f1e4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 2C 03 00 00: mov dword ptr [esi + 0x32c], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 58 DA 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xda
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 22: mov byte ptr [esp + 0x2c], 0x22
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x22
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 79: je 0x5886f281
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3F: cmp dword ptr [eax + 0x164], 0x3f
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3f
        ; Exact mapped bytes 7E 17: jle 0x5886f22d
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
        ; Exact mapped bytes 74 0E: je 0x5886f22d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 FC 00 00 00: mov ebp, dword ptr [eax + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f22f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 0C: sub eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C1 3E: add ecx, 0x3e
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x3e
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 55 3F 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886f283
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 89 4F 0C: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 14: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 14: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 04: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886f283
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 30 03 00 00: mov dword ptr [esi + 0x330], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B9 D9 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd9
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 23: mov byte ptr [esp + 0x2c], 0x23
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x23
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 79: je 0x5886f320
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3E: cmp dword ptr [eax + 0x164], 0x3e
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3e
        ; Exact mapped bytes 7E 17: jle 0x5886f2cc
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
        ; Exact mapped bytes 74 0E: je 0x5886f2cc
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 F8 00 00 00: mov ebp, dword ptr [ecx + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f2ce
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 0C: sub eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C1 3E: add ecx, 0x3e
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x3e
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B6 3E 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886f322
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886f322
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 2C 03 00 00: mov ecx, dword ptr [esi + 0x32c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 34 03 00 00: mov dword ptr [esi + 0x334], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 39 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 34 03 00 00: mov ecx, dword ptr [esi + 0x334]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D3 39 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes E8 FA D8 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 5C 24 3C: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 2C 24: mov byte ptr [esp + 0x2c], 0x24
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x24
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 16: je 0x5886f37e
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 24 3E 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f380
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 18 02 00 00: mov dword ptr [esi + 0x218], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes E8 B3 D8 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 25: mov byte ptr [esp + 0x2c], 0x25
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x25
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7A: je 0x5886f427
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8F 03 00 00: cmp dword ptr [eax + 0x164], 0x38f
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886f3d5
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
        ; Exact mapped bytes 74 0E: je 0x5886f3d5
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 3C 0E 00 00: mov ebp, dword ptr [edx + 0xe3c]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f3d7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 18 02 00 00: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 AF 3D 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886f429
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886f429
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 20 02 00 00: mov dword ptr [esi + 0x220], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E0 38 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 07 D8 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 26: mov byte ptr [esp + 0x2c], 0x26
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x26
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7C: je 0x5886f4d5
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8E 03 00 00: cmp dword ptr [eax + 0x164], 0x38e
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886f481
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
        ; Exact mapped bytes 74 0E: je 0x5886f481
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 38 0E 00 00: mov ebp, dword ptr [edx + 0xe38]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f483
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 18 02 00 00: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 03 3D 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 27: je 0x5886f4d1
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes EB 02: jmp 0x5886f4d7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 1C 02 00 00: mov dword ptr [esi + 0x21c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 34 38 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes B8 1C 0C 00 00: mov eax, 0xc1c
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C6: sub eax, esi
        __asm _emit 0x2b
        __asm _emit 0xc6
        ; Exact mapped bytes 89 6C 24 48: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8D 9E 24 02 00 00: lea ebx, [esi + 0x224]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 44 D7 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 FD 1F: cmp ebp, 0x1f
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x1f
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 0F 8D A5 00 00 00: jge 0x5886f5bd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 40: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 2C 27: mov byte ptr [esp + 0x2c], 0x27
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x27
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5886f5b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 03 00 00: lea eax, [ebp + 0x390]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1E: jle 0x5886f55b
        __asm _emit 0x7e
        __asm _emit 0x1e
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 1A: jl 0x5886f55b
        __asm _emit 0x7c
        __asm _emit 0x1a
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x5886f55b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 44 24 44: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 2C 08: mov ebp, dword ptr [eax + ecx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x08
        ; Exact mapped bytes EB 02: jmp 0x5886f55d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 3C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 18 02 00 00: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 25 3C 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2F: je 0x5886f5b7
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 8B 6C 24 48: mov ebp, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 44: jmp 0x5886f5f9
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 48: mov ebp, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes EB 3C: jmp 0x5886f5f9
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 28: mov byte ptr [esp + 0x2c], 0x28
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x28
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 2D: je 0x5886f5f7
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 18 02 00 00: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B8 3B 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f5f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes E8 14 37 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes BA F1 FF 00 00: mov edx, 0xfff1
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 FD 20: cmp ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x20
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 89 6C 24 48: mov dword ptr [esp + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 0F 8C D0 FE FF FF: jl 0x5886f503
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 9C 02 00 00: mov eax, dword ptr [esi + 0x29c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 00 00 00 00: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 09 04 00 00: cmp dword ptr [eax + 0x164], 0x409
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886f668
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
        ; Exact mapped bytes 74 0E: je 0x5886f668
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 24 10 00 00: mov eax, dword ptr [eax + 0x1024]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f66a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E A0 02 00 00: mov ecx, dword ptr [esi + 0x2a0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886f69f
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
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 D5 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd5
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 29: mov byte ptr [esp + 0x2c], 0x29
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x29
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 48: je 0x5886f701
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5886f6d9
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5886f6d9
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f6db
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C1 2C: add ecx, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x2c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 81 C1 86 00 00 00: add ecx, 0x86
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 18 02 00 00: mov edx, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 01 7A 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f703
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 9C 01 00 00: mov dword ptr [esi + 0x19c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 36 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B BE 9C 01 00 00: mov edi, dword ptr [esi + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886f73c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 14 38 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886f749
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 97 37 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes E8 FE D4 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 2A: mov byte ptr [esp + 0x2c], 0x2a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x2a
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1A: je 0x5886f77a
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 28 3A 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f77c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A4 02 00 00: mov dword ptr [esi + 0x2a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes E8 B7 D4 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 2B: mov byte ptr [esp + 0x2c], 0x2b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x2b
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7E: je 0x5886f827
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 26 02 00 00: cmp dword ptr [eax + 0x164], 0x226
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886f7d1
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
        ; Exact mapped bytes 74 0E: je 0x5886f7d1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 98 08 00 00: mov ebp, dword ptr [edx + 0x898]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f7d3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 5C 24 3C: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 A4 02 00 00: mov eax, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 AF 39 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2F: je 0x5886f82d
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 06: jmp 0x5886f82d
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 5C 24 3C: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE AC 02 00 00: mov dword ptr [esi + 0x2ac], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC 34 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 03 D4 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 2C: mov byte ptr [esp + 0x2c], 0x2c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x2c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7A: je 0x5886f8d7
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 27 02 00 00: cmp dword ptr [eax + 0x164], 0x227
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886f885
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
        ; Exact mapped bytes 74 0E: je 0x5886f885
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 9C 08 00 00: mov ebp, dword ptr [edx + 0x89c]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f887
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 A4 02 00 00: mov eax, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FF 38 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 6F 50: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x50
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886f8d9
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 83 C5 18: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 1C: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 89 4F 20: mov dword ptr [edi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886f8d9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE A8 02 00 00: mov dword ptr [esi + 0x2a8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 34 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 D3 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 2D: mov byte ptr [esp + 0x2c], 0x2d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x2d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 47: je 0x5886f951
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 23: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        ; Exact mapped bytes 7E 17: jle 0x5886f930
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886f930
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 C0 08 00 00: add ecx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f932
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8D 53 50: lea edx, [ebx + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 3C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C2 20: add edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x20
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E A4 02 00 00: mov ecx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B1 77 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f953
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 DC 02 00 00: mov dword ptr [esi + 0x2dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E6 D2 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 2E: mov byte ptr [esp + 0x2c], 0x2e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x2e
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 47: je 0x5886f9bf
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 23: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        ; Exact mapped bytes 7E 17: jle 0x5886f99e
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886f99e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 08 00 00: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f9a0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 4B 50: lea ecx, [ebx + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C1 70: add ecx, 0x70
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x70
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 A4 02 00 00: mov edx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 43 77 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x77
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886f9c1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E0 02 00 00: mov dword ptr [esi + 0x2e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7B D2 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 48: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 2F: mov byte ptr [esp + 0x2c], 0x2f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x2f
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5886fa6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 01: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 14: jle 0x5886fa0b
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5886fa0b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C5 40: add ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x40
        ; Exact mapped bytes EB 02: jmp 0x5886fa0d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 A4 02 00 00: mov eax, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4B 51: lea ecx, [ebx + 0x51]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 62: add edx, 0x62
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x62
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 73 37 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886fa6c
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886fa6c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE B0 02 00 00: mov dword ptr [esi + 0x2b0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 FB FF 00 00: mov eax, 0xfffb
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B BE B0 02 00 00: mov edi, dword ptr [esi + 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 46 26: movzx eax, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886fa9b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B5 34 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886faa8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 38 34 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C D1 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 30: mov byte ptr [esp + 0x2c], 0x30
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x30
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 47: je 0x5886fb09
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 23: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        ; Exact mapped bytes 7E 17: jle 0x5886fae8
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886fae8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 08 00 00: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886faea
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 83 C3 7E: add ebx, 0x7e
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x7e
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 21: add ecx, 0x21
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x21
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 A4 02 00 00: mov edx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F9 75 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fb0b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 5C 24 3C: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 86 D8 02 00 00: mov dword ptr [esi + 0x2d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 B8 02 00 00: lea eax, [esi + 0x2b8]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E E4 02 00 00: lea ecx, [esi + 0x2e4]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 81 C3 BA 00 00 00: add ebx, 0xba
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 44: mov dword ptr [esp + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C7 44 24 40 07 00 00 00: mov dword ptr [esp + 0x40], 7
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 04 D1 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 2C 31: mov byte ptr [esp + 0x2c], 0x31
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x31
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 47: je 0x5886fba1
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886fb83
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886fb83
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 32 00 00: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fb85
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 35: add ecx, 0x35
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x35
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 A4 02 00 00: mov edx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 61 75 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x75
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fba3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 7C 24 44: mov edi, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 47 04: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes E8 95 D0 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 2C 32: mov byte ptr [esp + 0x2c], 0x32
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x32
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 47: je 0x5886fc10
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886fbf2
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886fbf2
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 32 00 00: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fbf4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 7C: add ecx, 0x7c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x7c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 A4 02 00 00: mov edx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F2 74 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fc12
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 07: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 2E D0 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 34: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes C6 44 24 2C 33: mov byte ptr [esp + 0x2c], 0x33
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x33
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7B: je 0x5886fcad
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 00: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5886fc51
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5886fc51
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fc53
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 A4 02 00 00: mov eax, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 6B: add ecx, 0x6b
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x6b
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 30 35 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886fcaf
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 55 18: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 0C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 89 47 10: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 20: mov ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x20
        ; Exact mapped bytes 8D 45 20: lea eax, [ebp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 14: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 57 18: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886fcaf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 39: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        ; Exact mapped bytes B8 FB FF 00 00: mov eax, 0xfffb
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B 39: mov edi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x39
        ; Exact mapped bytes 0F B7 46 26: movzx eax, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886fcda
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 76 32 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886fce7
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F9 31 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 48 04: add dword ptr [esp + 0x48], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 83 44 24 44 08: add dword ptr [esp + 0x44], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x08
        ; Exact mapped bytes 83 C3 0E: add ebx, 0xe
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x0e
        ; Exact mapped bytes 83 6C 24 40 01: sub dword ptr [esp + 0x40], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 41 FE FF FF: jne 0x5886fb40
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 45 CF 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcf
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C6 44 24 2C 34: mov byte ptr [esp + 0x2c], 0x34
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 51: je 0x5886fd6a
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886fd42
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886fd42
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 32 00 00: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fd44
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 5C 24 3C: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 8B 25 01 00 00: lea ecx, [ebx + 0x125]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C1 35: add ecx, 0x35
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x35
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 A4 02 00 00: mov edx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 98 73 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x5886fd70
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 5C 24 3C: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 1C 03 00 00: mov dword ptr [esi + 0x31c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C9 CE 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 2C 35: mov byte ptr [esp + 0x2c], 0x35
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x35
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4D: je 0x5886fde2
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 60 01 00 00 CB 00 00 00: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886fdbe
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886fdbe
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 32 00 00: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fdc0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8D 8B 25 01 00 00: lea ecx, [ebx + 0x125]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 83 C1 7C: add ecx, 0x7c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x7c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 A4 02 00 00: mov edx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 20 73 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fde4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 20 03 00 00: mov dword ptr [esi + 0x320], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 58 CE 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 2C 36: mov byte ptr [esp + 0x2c], 0x36
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x36
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5886fe8d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 00: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5886fe2b
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5886fe2b
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886fe2d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 54 24 38: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 A4 02 00 00: mov eax, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 20 01 00 00: lea ecx, [ebx + 0x120]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 C2 6B: add edx, 0x6b
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x6b
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 50 33 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 50 00 00 00 00: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 2B: je 0x5886fe8f
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C5 20: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 18: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 89 4F 1C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 57 20: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x5886fe8f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE D4 02 00 00: mov dword ptr [esi + 0x2d4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 FB FF 00 00: mov eax, 0xfffb
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 8B BE D4 02 00 00: mov edi, dword ptr [esi + 0x2d4]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 46 26: movzx eax, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 2C 00: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886febe
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 92 30 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886fecb
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 15 30 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 79 CD 10 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xcd
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 2C 37: mov byte ptr [esp + 0x2c], 0x37
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x37
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 44: je 0x5886ff29
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 00: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 11: jle 0x5886ff05
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x5886ff05
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ff07
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 4C 24 38: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 83 C3 2C: add ebx, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x2c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 81 C1 86 00 00 00: add ecx, 0x86
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 A4 02 00 00: mov edx, dword ptr [esi + 0x2a4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D9 71 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ff2b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 30 00: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A0 01 00 00: mov dword ptr [esi + 0x1a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DE 2D 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE A0 01 00 00: mov edi, dword ptr [esi + 0x1a0]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C0 32: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ff61
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 EF 2F 09 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5886ff6e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 72 2F 09 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 94 00 00 00: mov edx, dword ptr [esi + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 89 8E 24 03 00 00: mov word ptr [esi + 0x324], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 88 00 00 00: mov dword ptr [esi + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
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
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
