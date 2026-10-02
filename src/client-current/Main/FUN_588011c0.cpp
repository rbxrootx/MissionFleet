// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 12934 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588011C0 .. +0x94D bytes.
extern "C" __declspec(naked) void FUN_588011c0_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 86 2B 98 58: push 0x58982b86
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x2b
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
        ; Exact mapped bytes 83 EC 18: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x18
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
        ; Exact mapped bytes 8D 44 24 2C: lea eax, [esp + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
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
        ; Exact mapped bytes 89 74 24 18: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 50: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4C 24 4C: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 54 24 48: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 6C 24 44: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 5C 24 40: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 40: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
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
        ; Exact mapped bytes E8 8E 1F 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x1f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 00 C5 98 58: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes BF 00 01 00 00: mov edi, 0x100
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 5E 50: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x50
        ; Exact mapped bytes 89 6E 54: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x54
        ; Exact mapped bytes 89 7E 58: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x58
        ; Exact mapped bytes 89 46 5C: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes C7 06 80 D1 99 58: mov dword ptr [esi], 0x5899d180
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 86 B8 04 01 00: mov dword ptr [esi + 0x104b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A8 04 01 00: mov dword ptr [esi + 0x104a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes B8 00 02 00 00: mov eax, 0x200
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 10 00 00 00: mov edx, 0x10
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 90 C1: seto cl
        __asm _emit 0x0f
        __asm _emit 0x90
        __asm _emit 0xc1
        ; Exact mapped bytes C7 86 A0 04 01 00 88 BD 99 58: mov dword ptr [esi + 0x104a0], 0x5899bd88
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x88
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C7 86 A4 04 01 00 00 02 00 00: mov dword ptr [esi + 0x104a4], 0x200
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 D9: neg ecx
        __asm _emit 0xf7
        __asm _emit 0xd9
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 B9 02 17 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B4 04 01 00: mov dword ptr [esi + 0x104b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 86 AC 04 01 00: mov dword ptr [esi + 0x104ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B0 04 01 00: mov dword ptr [esi + 0x104b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A8 04 01 00: mov dword ptr [esi + 0x104a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 50: lea eax, [esp + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 50: lea edx, [esp + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8E 04 05 01 00: lea ecx, [esi + 0x10504]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes C6 44 24 3C 01: mov byte ptr [esp + 0x3c], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes E8 34 E1 FF FF: call 0x587ff3e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes C7 86 58 05 01 00 00 00 00 00: mov dword ptr [esi + 0x10558], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8C B9 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 03: mov byte ptr [esp + 0x34], 3
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x03
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x588012db
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 17 52 0D 00: call 0x588d64f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588012dd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 46 7C: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes C6 46 74 01: mov byte ptr [esi + 0x74], 1
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes 89 5E 50: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x50
        ; Exact mapped bytes 89 6E 54: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x54
        ; Exact mapped bytes 89 7E 58: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x58
        ; Exact mapped bytes C7 46 5C 00 00 00 00: mov dword ptr [esi + 0x5c], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E B9 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb9
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 04: mov byte ptr [esp + 0x34], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 1A: je 0x5880132c
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C7 07 FC C1 99 58: mov dword ptr [edi], 0x5899c1fc
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 0C: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x0c
        ; Exact mapped bytes 89 5F 08: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact mapped bytes 89 5F 04: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x04
        ; Exact mapped bytes E8 76 B7 FC FF: call 0x587ccaa0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x58801330
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE 54 0D 02 00: mov dword ptr [esi + 0x20d54], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 0C B9 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb9
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 05: mov byte ptr [esp + 0x34], 5
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x05
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 18: je 0x5880136c
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C7 07 04 C2 99 58: mov dword ptr [edi], 0x5899c204
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 0C: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x0c
        ; Exact mapped bytes 89 5F 08: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x08
        ; Exact mapped bytes 89 5F 04: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x04
        ; Exact mapped bytes E8 36 B7 FC FF: call 0x587ccaa0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880136e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 84 00 00 00: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE 58 0D 02 00: mov dword ptr [esi + 0x20d58], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB B8 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb8
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 06: mov byte ptr [esp + 0x34], 6
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x06
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x588013d6
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 26: cmp dword ptr [ecx + 0x164], 0x26
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        ; Exact mapped bytes 7E 16: jle 0x588013b8
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588013b8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 98 00 00 00: mov ecx, dword ptr [ecx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588013ba
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 08 52 00 00: push 0x5208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 D0 00 00 00: push 0xd0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 2F 01 00 00: push 0x12f
        __asm _emit 0x68
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 BC D4 F6 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588013d8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes BD 01 01 00 00: mov ebp, 0x101
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 00 0C 01 00: mov dword ptr [esi + 0x10c00], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 19 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 00 0C 01 00: mov eax, dword ptr [esi + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 68 78: mov dword ptr [eax + 0x78], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x78
        ; Exact mapped bytes 8B 86 00 0C 01 00: mov eax, dword ptr [esi + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
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
        ; Exact mapped bytes 68 84 00 00 00: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3C B8 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb8
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 07: mov byte ptr [esp + 0x34], 7
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x07
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x58801465
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 64 01 00 00 27: cmp dword ptr [ecx + 0x164], 0x27
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        ; Exact mapped bytes 7E 16: jle 0x58801447
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801447
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 9C 00 00 00: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801449
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 08 52 00 00: push 0x5208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 7B 01 00 00: push 0x17b
        __asm _emit 0x68
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 6E 01 00 00: push 0x16e
        __asm _emit 0x68
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 2D D4 F6 FF: call 0x5876e890
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58801467
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 04 0C 01 00: mov dword ptr [esi + 0x10c04], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 18 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 0C 01 00: mov eax, dword ptr [esi + 0x10c04]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 68 78: mov dword ptr [eax + 0x78], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x78
        ; Exact mapped bytes 8B 86 04 0C 01 00: mov eax, dword ptr [esi + 0x10c04]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
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
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 B5 B7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb7
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 08: mov byte ptr [esp + 0x34], 8
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 52: je 0x588014fb
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8E 04 0C 01 00: mov ecx, dword ptr [esi + 0x10c04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 10 46 A2 58: mov edx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BA 64 01 00 00 28: cmp dword ptr [edx + 0x164], 0x28
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        ; Exact mapped bytes 8B 79 08: mov edi, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 7E 16: jle 0x588014da
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 9A 8C 01 00 00: cmp dword ptr [edx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588014da
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 92 8C 01 00 00: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 92 A0 00 00 00: mov edx, dword ptr [edx + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588014dc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 09 52 00 00: push 0x5209
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 12: add edi, 0x12
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x12
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 EE 02 00 00: push 0x2ee
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 07 D3 F7 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd3
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588014fd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 08 0C 01 00: mov dword ptr [esi + 0x10c08], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F B7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb7
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 09: mov byte ptr [esp + 0x34], 9
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x09
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x5880152f
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 73 1C 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801531
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 4C 0B 01 00: mov dword ptr [esi + 0x10b4c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B B7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb7
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 0A: mov byte ptr [esp + 0x34], 0xa
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3D: je 0x58801590
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 8C 06 00 00: cmp dword ptr [ecx + 0x164], 0x68c
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x5880157b
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880157b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 30 1A 00 00: mov ecx, dword ptr [ecx + 0x1a30]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x30
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880157d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 31: push 0x31
        __asm _emit 0x6a
        __asm _emit 0x31
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D2 06 F3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58801592
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 CC 0B 01 00: mov dword ptr [esi + 0x10bcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 7B 17 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 CC 0B 01 00: mov eax, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 93 B6 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb6
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 0B: mov byte ptr [esp + 0x34], 0xb
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x5880160b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 8D 06 00 00: cmp dword ptr [ecx + 0x164], 0x68d
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588015f3
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588015f3
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 34 1A 00 00: mov ecx, dword ptr [ecx + 0x1a34]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588015f5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 CC 0B 01 00: mov edx, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 31: push 0x31
        __asm _emit 0x6a
        __asm _emit 0x31
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 57 06 F3 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880160d
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 D0 0B 01 00: mov dword ptr [esi + 0x10bd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 16 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x16
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D0 0B 01 00: mov eax, dword ptr [esi + 0x10bd0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 11 B6 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb6
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 0C: mov byte ptr [esp + 0x34], 0xc
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x58801690
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 2A: cmp dword ptr [ecx + 0x160], 0x2a
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 16: jle 0x58801672
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801672
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 0A 00 00: add ecx, 0xa80
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801674
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 CC 0B 01 00: mov edx, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 91 02 00 00: push 0x291
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 74 5A 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58801692
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE D4 0B 01 00: mov dword ptr [esi + 0x10bd4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588016b3
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9D 18 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588016c0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 20 18 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 84 B5 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 0D: mov byte ptr [esp + 0x34], 0xd
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0d
        ; Exact mapped bytes BF 2B 00 00 00: mov edi, 0x2b
        __asm _emit 0xbf
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x5880171f
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 60 01 00 00: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801703
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801703
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 0A 00 00: add edx, 0xac0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801705
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E D4 0B 01 00: mov ecx, dword ptr [esi + 0x10bd4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 91 02 00 00: push 0x291
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 E3 59 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801721
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 E8 0B 01 00: mov dword ptr [esi + 0x10be8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 B5 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb5
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 0E: mov byte ptr [esp + 0x34], 0xe
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0e
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x58801789
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 2A: cmp dword ptr [ecx + 0x160], 0x2a
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 16: jle 0x5880176b
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880176b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 0A 00 00: add ecx, 0xa80
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880176d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 CC 0B 01 00: mov edx, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 63 03 00 00: push 0x363
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7B 59 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes EB 02: jmp 0x5880178b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 AE D8 0B 01 00: mov dword ptr [esi + 0x10bd8], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 40: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588017ac
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 A4 17 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 30: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588017b9
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 27 17 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B B4 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 0F: mov byte ptr [esp + 0x34], 0xf
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x58801813
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 60 01 00 00: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588017f7
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588017f7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 0A 00 00: add edx, 0xac0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588017f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E D8 0B 01 00: mov ecx, dword ptr [esi + 0x10bd8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 63 03 00 00: push 0x363
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 EF 58 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801815
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 EC 0B 01 00: mov dword ptr [esi + 0x10bec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 24 B4 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb4
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 10: mov byte ptr [esp + 0x34], 0x10
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x10
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x5880187d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 2A: cmp dword ptr [ecx + 0x160], 0x2a
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 16: jle 0x5880185f
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880185f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 0A 00 00: add ecx, 0xa80
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801861
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 CC 0B 01 00: mov edx, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 E8 01 00 00: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 87 58 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes EB 02: jmp 0x5880187f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 AE DC 0B 01 00: mov dword ptr [esi + 0x10bdc], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 40: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588018a0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 B0 16 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x16
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 30: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588018ad
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 33 16 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x16
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 97 B3 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb3
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 11: mov byte ptr [esp + 0x34], 0x11
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x11
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x58801907
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 60 01 00 00: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588018eb
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588018eb
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 0A 00 00: add edx, 0xac0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588018ed
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E DC 0B 01 00: mov ecx, dword ptr [esi + 0x10bdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 E8 01 00 00: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 FB 57 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801909
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 F0 0B 01 00: mov dword ptr [esi + 0x10bf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 B3 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb3
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 12: mov byte ptr [esp + 0x34], 0x12
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x12
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 43: je 0x58801971
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 2A: cmp dword ptr [ecx + 0x160], 0x2a
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 16: jle 0x58801953
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801953
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 0A 00 00: add ecx, 0xa80
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801955
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 CC 0B 01 00: mov edx, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 A0 00 00 00: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 93 57 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes EB 02: jmp 0x58801973
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 AE E0 0B 01 00: mov dword ptr [esi + 0x10be0], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 40: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801994
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 BC 15 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 30: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588019a1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 3F 15 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A3 B2 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb2
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 13: mov byte ptr [esp + 0x34], 0x13
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x13
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x588019fb
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 60 01 00 00: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588019df
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588019df
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 C0 0A 00 00: add edx, 0xac0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588019e1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E E0 0B 01 00: mov ecx, dword ptr [esi + 0x10be0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 33: push 0x33
        __asm _emit 0x6a
        __asm _emit 0x33
        ; Exact mapped bytes 68 A0 00 00 00: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 07 57 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588019fd
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 F4 0B 01 00: mov dword ptr [esi + 0x10bf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 3C B2 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb2
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 14: mov byte ptr [esp + 0x34], 0x14
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x14
        ; Exact mapped bytes BF 22 00 00 00: mov edi, 0x22
        __asm _emit 0xbf
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 42: je 0x58801a69
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 60 01 00 00: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801a4b
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801a4b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 08 00 00: add ecx, 0x880
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801a4d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 CC 0B 01 00: mov edx, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 4A: push 0x4a
        __asm _emit 0x6a
        __asm _emit 0x4a
        ; Exact mapped bytes 68 AC 03 00 00: push 0x3ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 9B 56 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes EB 02: jmp 0x58801a6b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 AE E4 0B 01 00: mov dword ptr [esi + 0x10be4], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 40: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801a8c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 C4 14 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 30: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801a99
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 47 14 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB B1 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb1
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 15: mov byte ptr [esp + 0x34], 0x15
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x15
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x58801af3
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B9 60 01 00 00: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801ad7
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801ad7
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 08 00 00: add edx, 0x880
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801ad9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E CC 0B 01 00: mov ecx, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 68 AC 03 00 00: push 0x3ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 0F 56 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801af5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 F8 0B 01 00: mov dword ptr [esi + 0x10bf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE E8 0B 01 00: lea edi, [esi + 0x10be8]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BB 04 00 00 00: mov ebx, 4
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x58801b10
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58801B10 .. +0x19F8 bytes.
extern "C" __declspec(naked) void FUN_588011c0_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 4F EC: mov ecx, dword ptr [edi - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xec
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 12 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 EC: mov eax, dword ptr [edi - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xec
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
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 EB 11 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2F: mov ebp, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 4D 40: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x40
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 26: mov word ptr [ebp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x58801b4b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 05 14 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 30: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x58801b58
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 88 13 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
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
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 A5: jne 0x58801b10
        __asm _emit 0x75
        __asm _emit 0xa5
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 B0 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb0
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 16: mov byte ptr [esp + 0x34], 0x16
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x16
        ; Exact mapped bytes 8D 6B 32: lea ebp, [ebx + 0x32]
        __asm _emit 0x8d
        __asm _emit 0x6b
        __asm _emit 0x32
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3C: je 0x58801bc4
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 60 01 00 00: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801bac
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801bac
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 0C 00 00: add edx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801bae
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 35: push 0x35
        __asm _emit 0x6a
        __asm _emit 0x35
        ; Exact mapped bytes 68 8C 00 00 00: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 40 55 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58801bc6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE F0 0D 02 00: mov dword ptr [esi + 0x20df0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E1 2E 00 00: mov edx, 0x2ee1
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801be7
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 69 13 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801bf4
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 EC 12 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F0 0D 02 00: mov ecx, dword ptr [esi + 0x20df0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C 11 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 40 B0 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb0
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 17: mov byte ptr [esp + 0x34], 0x17
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x17
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3C: je 0x58801c5a
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 60 01 00 00: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801c42
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801c42
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 0C 00 00: add edx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801c44
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 34: push 0x34
        __asm _emit 0x6a
        __asm _emit 0x34
        ; Exact mapped bytes 68 91 02 00 00: push 0x291
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AA 54 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58801c5c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE F4 0D 02 00: mov dword ptr [esi + 0x20df4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801c7d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 D3 12 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801c8a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 56 12 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F4 0D 02 00: mov ecx, dword ptr [esi + 0x20df4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 10 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AA AF 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xaf
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 18: mov byte ptr [esp + 0x34], 0x18
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x18
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3C: je 0x58801cf0
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 60 01 00 00: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801cd8
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801cd8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 0C 00 00: add edx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801cda
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 46: push 0x46
        __asm _emit 0x6a
        __asm _emit 0x46
        ; Exact mapped bytes 68 98 03 00 00: push 0x398
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 14 54 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58801cf2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B9 E1 2E 00 00: mov ecx, 0x2ee1
        __asm _emit 0xb9
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE EC 0D 02 00: mov dword ptr [esi + 0x20dec], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801d13
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3D 12 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801d20
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C0 11 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E EC 0D 02 00: mov ecx, dword ptr [esi + 0x20dec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 0F 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 14 AF 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xaf
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 19: mov byte ptr [esp + 0x34], 0x19
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x19
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3C: je 0x58801d86
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 60 01 00 00: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801d6e
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801d6e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 0C 00 00: add edx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801d70
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 35: push 0x35
        __asm _emit 0x6a
        __asm _emit 0x35
        ; Exact mapped bytes 68 C7 01 00 00: push 0x1c7
        __asm _emit 0x68
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 7E 53 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x53
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58801d88
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE D0 0D 02 00: mov dword ptr [esi + 0x20dd0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E1 2E 00 00: mov edx, 0x2ee1
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801da9
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A7 11 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801db6
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 2A 11 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8E AE 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 1A: mov byte ptr [esp + 0x34], 0x1a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x1a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3C: je 0x58801e0c
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 A9 60 01 00 00: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58801df4
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801df4
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 0C 00 00: add edx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801df6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 35: push 0x35
        __asm _emit 0x6a
        __asm _emit 0x35
        ; Exact mapped bytes 68 EC 01 00 00: push 0x1ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F8 52 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x52
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58801e0e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE D4 0D 02 00: mov dword ptr [esi + 0x20dd4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801e2f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 21 11 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58801e3c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A4 10 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 89 9E D8 0D 02 00: mov dword ptr [esi + 0x20dd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E DC 0D 02 00: mov dword ptr [esi + 0x20ddc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E0 0D 02 00: mov dword ptr [esi + 0x20de0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E4 0D 02 00: mov dword ptr [esi + 0x20de4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 F3 AD 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xad
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 1B: mov byte ptr [esp + 0x34], 0x1b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x1b
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 6F: je 0x58801edc
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 68: cmp dword ptr [eax + 0x164], 0x68
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x68
        ; Exact mapped bytes 7E 16: jle 0x58801e91
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801e91
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 A0 01 00 00: mov ebp, dword ptr [ecx + 0x1a0]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801e93
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 5A: push 0x5a
        __asm _emit 0x6a
        __asm _emit 0x5a
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FA 12 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x12
        __asm _emit 0x10
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x58801ede
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
        ; Exact mapped bytes EB 02: jmp 0x58801ede
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE 00 0E 02 00: mov dword ptr [esi + 0x20e00], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B 0E 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 00 0E 02 00: mov eax, dword ptr [esi + 0x20e00]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 43 AD 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xad
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 1C: mov byte ptr [esp + 0x34], 0x1c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x1c
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 72: je 0x58801f8f
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 6A: cmp dword ptr [eax + 0x164], 0x6a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6a
        ; Exact mapped bytes 7E 16: jle 0x58801f41
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801f41
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 A8 01 00 00: mov ebp, dword ptr [eax + 0x1a8]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801f43
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 8C 00 00 00: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 47 12 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x12
        __asm _emit 0x10
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x58801f91
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
        ; Exact mapped bytes EB 02: jmp 0x58801f91
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE 04 0E 02 00: mov dword ptr [esi + 0x20e04], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 78 0D 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 0E 02 00: mov eax, dword ptr [esi + 0x20e04]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0e
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 90 AC 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 1D: mov byte ptr [esp + 0x34], 0x1d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x1d
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 6E: je 0x5880203e
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 67: cmp dword ptr [eax + 0x164], 0x67
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x67
        ; Exact mapped bytes 7E 16: jle 0x58801ff4
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58801ff4
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 9C 01 00 00: mov ebp, dword ptr [edx + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58801ff6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 5A: push 0x5a
        __asm _emit 0x6a
        __asm _emit 0x5a
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 97 11 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x11
        __asm _emit 0x10
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x58802040
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x58802040
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE F8 0D 02 00: mov dword ptr [esi + 0x20df8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC AB 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xab
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 1E: mov byte ptr [esp + 0x34], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x1e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 72: je 0x588020d6
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 69: cmp dword ptr [eax + 0x164], 0x69
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x69
        ; Exact mapped bytes 7E 16: jle 0x58802088
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58802088
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 A4 01 00 00: mov ebp, dword ptr [ecx + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880208a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 8C 00 00 00: push 0x8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 00 11 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x10
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588020d8
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
        ; Exact mapped bytes EB 02: jmp 0x588020d8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE FC 0D 02 00: mov dword ptr [esi + 0x20dfc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 61 AB 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xab
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 1F: mov byte ptr [esp + 0x34], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x1f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3B: je 0x58802138
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 0F: cmp dword ptr [ecx + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 7E 16: jle 0x58802122
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58802122
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 C0 03 00 00: add ecx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58802124
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 6E: push 0x6e
        __asm _emit 0x6a
        __asm _emit 0x6e
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 AA 45 FB FF: call 0x587b66e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880213a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 3C 02: mov byte ptr [esp + 0x3c], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 10 0E 02 00: mov dword ptr [esi + 0x20e10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 20 43 FB FF: call 0x587b6470
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 10 0E 02 00: mov ecx, dword ptr [esi + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C0 0B 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 10 0E 02 00: mov eax, dword ptr [esi + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
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
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D5 AA 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xaa
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 20: mov byte ptr [esp + 0x34], 0x20
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x20
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3E: je 0x588021c7
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 11: cmp dword ptr [ecx + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        ; Exact mapped bytes 7E 16: jle 0x588021ae
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588021ae
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 40 04 00 00: add ecx, 0x440
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588021b0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A0 00 00 00: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1B 45 FB FF: call 0x587b66e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588021c9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 3C 02: mov byte ptr [esp + 0x3c], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 14 0E 02 00: mov dword ptr [esi + 0x20e14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 91 42 FB FF: call 0x587b6470
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 14 0E 02 00: mov ecx, dword ptr [esi + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 31 0B 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 14 0E 02 00: mov eax, dword ptr [esi + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
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
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 46 AA 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xaa
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 21: mov byte ptr [esp + 0x34], 0x21
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x21
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3B: je 0x58802253
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 0E: cmp dword ptr [ecx + 0x160], 0xe
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        ; Exact mapped bytes 7E 16: jle 0x5880223d
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880223d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 80 03 00 00: add ecx, 0x380
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880223f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 6E: push 0x6e
        __asm _emit 0x6a
        __asm _emit 0x6e
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8F 44 FB FF: call 0x587b66e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58802255
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 3C 02: mov byte ptr [esp + 0x3c], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 08 0E 02 00: mov dword ptr [esi + 0x20e08], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 42 FB FF: call 0x587b6470
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 08 0E 02 00: mov ecx, dword ptr [esi + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 0A 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 08 0E 02 00: mov eax, dword ptr [esi + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
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
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BA A9 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa9
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 22: mov byte ptr [esp + 0x34], 0x22
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x22
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3E: je 0x588022e2
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 10: cmp dword ptr [ecx + 0x160], 0x10
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 7E 16: jle 0x588022c9
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588022c9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 00 04 00 00: add ecx, 0x400
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588022cb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A0 00 00 00: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 00 44 FB FF: call 0x587b66e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588022e4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 28: push 0x28
        __asm _emit 0x6a
        __asm _emit 0x28
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 44 24 3C 02: mov byte ptr [esp + 0x3c], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 0C 0E 02 00: mov dword ptr [esi + 0x20e0c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 76 41 FB FF: call 0x587b6470
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 0C 0E 02 00: mov ecx, dword ptr [esi + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 0A 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 0E 02 00: mov eax, dword ptr [esi + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 86 10 0E 02 00: mov eax, dword ptr [esi + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 7C: mov dword ptr [eax + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 86 14 0E 02 00: mov eax, dword ptr [esi + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 7C: mov dword ptr [eax + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 86 08 0E 02 00: mov eax, dword ptr [esi + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 7C: mov dword ptr [eax + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 86 0C 0E 02 00: mov eax, dword ptr [esi + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 7C: mov dword ptr [eax + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x7c
        ; Exact mapped bytes E8 07 A9 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa9
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 23: mov byte ptr [esp + 0x34], 0x23
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x23
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 55: je 0x588023ac
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 08: cmp dword ptr [ecx + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 16: jle 0x5880237c
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880237c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 00 02 00 00: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880237e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 7C 24 44: mov edi, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 6C 24 40: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 57 5A: lea edx, [edi + 0x5a]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x5a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 55 64: lea edx, [ebp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 8C 47 A2 58: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 F6 B9 F5 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x588023b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 7C 24 44: mov edi, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 6C 24 40: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 18 0E 02 00: mov dword ptr [esi + 0x20e18], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 83 A8 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 24: mov byte ptr [esp + 0x34], 0x24
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x24
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 50: je 0x5880242b
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 08: cmp dword ptr [ecx + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 16: jle 0x58802400
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58802400
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 00 02 00 00: add edx, 0x200
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58802402
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F 8C 00 00 00: lea ecx, [edi + 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4D 64: lea ecx, [ebp + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0x64
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 15 98 47 A2 58: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 77 B9 F5 FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880242d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 18 0E 02 00: mov ecx, dword ptr [esi + 0x20e18]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 1C 0E 02 00: mov dword ptr [esi + 0x20e1c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 08 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 0E 02 00: mov ecx, dword ptr [esi + 0x20e1c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C8 08 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 18 0E 02 00: mov eax, dword ptr [esi + 0x20e18]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 86 1C 0E 02 00: mov eax, dword ptr [esi + 0x20e1c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D1 A7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa7
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 25: mov byte ptr [esp + 0x34], 0x25
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x25
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 11: je 0x5880249e
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 68 E0 2E 00 00: push 0x2ee0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 94 B2 0A 00: call 0x588ad730
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb2
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588024a0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 30 09 00 00: push 0x930
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 FC 0B 01 00: mov dword ptr [esi + 0x10bfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 99 A7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa7
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 26: mov byte ptr [esp + 0x34], 0x26
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x26
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x588024ce
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 B4 62 F8 FF: call 0x58788780
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588024d0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 1C: push 0x1c
        __asm _emit 0x6a
        __asm _emit 0x1c
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 4C 1C 02 00: mov dword ptr [esi + 0x21c4c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C A7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa7
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 27: mov byte ptr [esp + 0x34], 0x27
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x27
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x588024fb
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 47 30 FA FF: call 0x587a5540
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588024fd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 50 1C 02 00: mov dword ptr [esi + 0x21c50], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F A7 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa7
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 28: mov byte ptr [esp + 0x34], 0x28
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x28
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 18: je 0x58802537
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 96 4C 0B 01 00: mov edx, dword ptr [esi + 0x10b4c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 6D 0C 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58802539
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 50 0B 01 00: mov dword ptr [esi + 0x10b50], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 E0 2E 00 00: mov eax, 0x2ee0
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x5880255a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F6 09 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58802567
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 79 09 10 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 3C 30 01 00 00: mov dword ptr [esp + 0x3c], 0x130
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 48 C0 04 00 00: mov dword ptr [esp + 0x48], 0x4c0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9E 54 0B 01 00: lea ebx, [esi + 0x10b54]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 14 02 00 00 00: mov dword ptr [esp + 0x14], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 C2 A6 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa6
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 1C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C6 44 24 34 29: mov byte ptr [esp + 0x34], 0x29
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x29
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 7D: je 0x5880261b
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes A1 78 47 A2 58: mov eax, dword ptr [0x58a24778]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1C: jle 0x588025cb
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 18: jl 0x588025cb
        __asm _emit 0x7c
        __asm _emit 0x18
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x588025cb
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 48: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 2C 0A: mov ebp, dword ptr [edx + ecx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 02: jmp 0x588025cd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 50 0B 01 00: mov eax, dword ptr [esi + 0x10b50]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 6A 46: push 0x46
        __asm _emit 0x6a
        __asm _emit 0x46
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 BB 0B 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0b
        __asm _emit 0x10
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
        ; Exact mapped bytes 74 2B: je 0x5880261d
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
        ; Exact mapped bytes EB 02: jmp 0x5880261d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 83 44 24 48 04: add dword ptr [esp + 0x48], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 44 24 3C: add dword ptr [esp + 0x3c], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 3B: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3b
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 29 44 24 14: sub dword ptr [esp + 0x14], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 46 FF FF FF: jne 0x58802585
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 08 A6 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa6
        __asm _emit 0x17
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
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes C6 44 24 34 2A: mov byte ptr [esp + 0x34], 0x2a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x2a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 48: je 0x588026a0
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 78 47 A2 58: mov ecx, dword ptr [0x58a24778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 32 01 00 00: cmp dword ptr [ecx + 0x164], 0x132
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x58802680
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58802680
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 C8 04 00 00: mov ecx, dword ptr [ecx + 0x4c8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58802682
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 96 50 0B 01 00: mov edx, dword ptr [esi + 0x10b50]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 57: push 0x57
        __asm _emit 0x6a
        __asm _emit 0x57
        ; Exact mapped bytes 6A 6E: push 0x6e
        __asm _emit 0x6a
        __asm _emit 0x6e
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF E0 F5 05: push 0x5f5e0ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0x05
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 62 C1 F7 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588026a2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 54 0B 01 00: mov ecx, dword ptr [esi + 0x10b54]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 5C 0B 01 00: mov dword ptr [esi + 0x10b5c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 63 06 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 54 0B 01 00: mov eax, dword ptr [esi + 0x10b54]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 8B 8E 5C 0B 01 00: mov ecx, dword ptr [esi + 0x10b5c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 44 06 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 5C 0B 01 00: mov eax, dword ptr [esi + 0x10b5c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes E8 5C A5 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa5
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 2B: mov byte ptr [esp + 0x34], 0x2b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x2b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 16: je 0x58802718
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 8E 50 0B 01 00: mov ecx, dword ptr [esi + 0x10b50]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8A 0A 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880271a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 60 0B 01 00: mov dword ptr [esi + 0x10b60], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D AE 64 0B 01 00: lea ebp, [esi + 0x10b64]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 48 02 00 00 00: mov dword ptr [esp + 0x48], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 A5 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa5
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 2C: mov byte ptr [esp + 0x34], 0x2c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x2c
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 2A: je 0x58802776
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 86 60 0B 01 00: mov eax, dword ptr [esi + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E0 01 00 00: push 0x1e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4D 03 00 00: push 0x34d
        __asm _emit 0x68
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 38 0A 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 5F 54: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x54
        ; Exact mapped bytes EB 02: jmp 0x58802778
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7D 00: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 48 01: sub dword ptr [esp + 0x48], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 75 A9: jne 0x58802733
        __asm _emit 0x75
        __asm _emit 0xa9
        ; Exact mapped bytes 8D AE 6C 0B 01 00: lea ebp, [esi + 0x10b6c]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 48 02 00 00 00: mov dword ptr [esp + 0x48], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 AF A4 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa4
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 2D: mov byte ptr [esp + 0x34], 0x2d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x2d
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 27: je 0x588027d8
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 86 60 0B 01 00: mov eax, dword ptr [esi + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E0 01 00 00: push 0x1e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3E 03 00 00: push 0x33e
        __asm _emit 0x68
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D3 09 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x588027da
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7D 00: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 48 01: sub dword ptr [esp + 0x48], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 75 AC: jne 0x58802798
        __asm _emit 0x75
        __asm _emit 0xac
        ; Exact mapped bytes 8D AE 74 0B 01 00: lea ebp, [esi + 0x10b74]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 48 02 00 00 00: mov dword ptr [esp + 0x48], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 47 A4 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa4
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 2E: mov byte ptr [esp + 0x34], 0x2e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x2e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 27: je 0x58802840
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 86 60 0B 01 00: mov eax, dword ptr [esi + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 E0 01 00 00: push 0x1e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4D 03 00 00: push 0x34d
        __asm _emit 0x68
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 6B 09 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x58802842
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7D 00: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 48 01: sub dword ptr [esp + 0x48], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 75 AC: jne 0x58802800
        __asm _emit 0x75
        __asm _emit 0xac
        ; Exact mapped bytes 6A 74: push 0x74
        __asm _emit 0x6a
        __asm _emit 0x74
        ; Exact mapped bytes E8 F3 A3 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa3
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 2F: mov byte ptr [esp + 0x34], 0x2f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x2f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 4A: je 0x588028b5
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 96 4C 1C 02 00: mov edx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 0C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 83 BA 64 01 00 00 4A: cmp dword ptr [edx + 0x164], 0x4a
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4a
        ; Exact mapped bytes 7E 12: jle 0x5880288f
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 92 8C 01 00 00: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 74 08: je 0x5880288f
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 92 28 01 00 00: mov edx, dword ptr [edx + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58802891
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 60 0B 01 00: mov ecx, dword ptr [esi + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 68 44 02 00 00: push 0x244
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 77 03 00 00: push 0x377
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 7F 96 98 00: push 0x98967f
        __asm _emit 0x68
        __asm _emit 0x7f
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 4D BF F7 FF: call 0x5877e800
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588028b7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E 74 0B 01 00: mov ecx, dword ptr [esi + 0x10b74]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 7C 0B 01 00: mov dword ptr [esi + 0x10b7c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E 04 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 0B 01 00: mov ecx, dword ptr [esi + 0x10b64]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 3E 04 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 68 0B 01 00: mov ecx, dword ptr [esi + 0x10b68]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2E 04 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 6C 0B 01 00: mov ecx, dword ptr [esi + 0x10b6c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 1E 04 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 0B 01 00: mov ecx, dword ptr [esi + 0x10b74]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 0E 04 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 86 D9 18 02 00 00: mov byte ptr [esi + 0x218d9], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E DC 18 02 00: mov dword ptr [esi + 0x218dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 28 A3 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa3
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 30: mov byte ptr [esp + 0x34], 0x30
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x30
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 7B: je 0x588029b3
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 19: cmp dword ptr [eax + 0x164], 0x19
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        ; Exact mapped bytes 7E 13: jle 0x58802959
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58802959
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6A 64: mov ebp, dword ptr [edx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes EB 02: jmp 0x5880295b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 44 24 44: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 4C 24 40: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 68 10 27 00 00: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C0 64: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 C1 00 02 00 00: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 23 08 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x10
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x588029b5
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
        ; Exact mapped bytes EB 02: jmp 0x588029b5
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE C0 0B 01 00: mov dword ptr [esi + 0x10bc0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 03 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C0 0B 01 00: mov eax, dword ptr [esi + 0x10bc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 8B 86 C0 0B 01 00: mov eax, dword ptr [esi + 0x10bc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
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
        ; Exact mapped bytes 89 9E C4 0B 01 00: mov dword ptr [esi + 0x10bc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 57 A2 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa2
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 31: mov byte ptr [esp + 0x34], 0x31
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x31
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 7A: je 0x58802a83
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 1A: cmp dword ptr [eax + 0x164], 0x1a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1a
        ; Exact mapped bytes 7E 13: jle 0x58802a2a
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58802a2a
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 68 68: mov ebp, dword ptr [eax + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x68
        ; Exact mapped bytes EB 02: jmp 0x58802a2c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
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
        ; Exact mapped bytes 68 10 27 00 00: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 83 C1 64: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x64
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 81 C2 60 01 00 00: add edx, 0x160
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 52 07 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x10
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x58802a85
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x58802a85
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE C8 0B 01 00: mov dword ptr [esi + 0x10bc8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 84 02 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 C8 0B 01 00: mov eax, dword ptr [esi + 0x10bc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 8B 86 C8 0B 01 00: mov eax, dword ptr [esi + 0x10bc8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D A1 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 32: mov byte ptr [esp + 0x34], 0x32
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x32
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x58802ae1
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C1 06 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58802ae3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 BC 1D 00 00: push 0x1dbc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 F8 04 01 00: mov dword ptr [esi + 0x104f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 A1 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa1
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 33: mov byte ptr [esp + 0x34], 0x33
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x33
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 17: je 0x58802b1f
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 00 03 00 00: push 0x300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 A3 17 FC FF: call 0x587c42c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58802b21
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 24 05 01 00: mov dword ptr [esi + 0x10524], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 42 0F 00: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 42 0F 00: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 3C 02: mov byte ptr [esp + 0x3c], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes E8 06 AE 10 00: call 0x5890d950
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 24 05 01 00: mov edx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F8 03 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes B8 AA AA AA AA: mov eax, 0xaaaaaaaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 9E 48 05 01 00: mov dword ptr [esi + 0x10548], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 44 05 01 00: mov dword ptr [esi + 0x10544], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 4C 05 01 00: mov dword ptr [esi + 0x1054c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 50 05 01 00: mov dword ptr [esi + 0x10550], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 70 01 00 00 0B: cmp dword ptr [eax + 0x170], 0xb
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        ; Exact mapped bytes 7E 13: jle 0x58802b96
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 39 98 94 01 00 00: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58802b96
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 2C: mov eax, dword ptr [eax + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x2c
        ; Exact mapped bytes EB 02: jmp 0x58802b98
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 89 46 68: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes E8 AC A0 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa0
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 34: mov byte ptr [esp + 0x34], 0x34
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x34
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x58802bda
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 99 70 01 00 00: cmp dword ptr [ecx + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 10: jle 0x58802bd0
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 39 99 94 01 00 00: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x58802bd0
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 19: mov ebx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x19
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E8 4E 10 00: call 0x58907ac0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58802bdc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 AC 04 01 00: mov dword ptr [esi + 0x104ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B0 04 01 00: mov dword ptr [esi + 0x104b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A8 04 01 00: mov dword ptr [esi + 0x104a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B9 FF E5 00 00: mov ecx, 0xe5ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 89 86 58 04 01 00: mov dword ptr [esi + 0x10458], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 6C 1C 02 00: mov dword ptr [esi + 0x21c6c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B8 00 00 00: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 BC 00 00 00: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C0 00 00 00: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C4 00 00 00: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 88 03 00 00: mov dword ptr [esi + 0x388], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 84 0B 01 00: mov dword ptr [esi + 0x10b84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 88 86 A8 03 00 00: mov byte ptr [esi + 0x3a8], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 94 03 00 00: mov dword ptr [esi + 0x394], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A4 03 00 00: mov dword ptr [esi + 0x3a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes B8 00 0A 00 00: mov eax, 0xa00
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB B8 02 00 00: mov ebx, 0x2b8
        __asm _emit 0xbb
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C6: sub eax, esi
        __asm _emit 0x2b
        __asm _emit 0xc6
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes C7 86 88 0B 01 00 00 00 00 40: mov dword ptr [esi + 0x10b88], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 89 5C 24 44: mov dword ptr [esp + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8D BE E0 00 00 00: lea edi, [esi + 0xe0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes C7 44 24 40 08 00 00 00: mov dword ptr [esp + 0x40], 8
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes C7 47 B8 00 00 00 00: mov dword ptr [edi - 0x48], 0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C0 9F 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9f
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 3C: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 34 35: mov byte ptr [esp + 0x34], 0x35
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x35
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 26: je 0x58802cc6
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 68 D6 2E 00 00: push 0x2ed6
        __asm _emit 0x68
        __asm _emit 0xd6
        __asm _emit 0x2e
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
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 EB 04 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 45 00 74 CA 98 58: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 45 50: mov dword ptr [ebp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x50
        ; Exact mapped bytes 89 45 54: mov dword ptr [ebp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x54
        ; Exact mapped bytes EB 02: jmp 0x58802cc8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 2F: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2f
        ; Exact mapped bytes E8 45 00 10 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
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
        ; Exact mapped bytes E8 61 9F 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9f
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 6C 24 3C: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 34 36: mov byte ptr [esp + 0x34], 0x36
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x36
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 84 7C 00 00 00: je 0x58802d7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 64 01 00 00: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1C: jle 0x58802d2c
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 7C 18: jl 0x58802d2c
        __asm _emit 0x7c
        __asm _emit 0x18
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x58802d2c
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 44 24 48: add eax, dword ptr [esp + 0x48]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 8B 1C 38: mov ebx, dword ptr [eax + edi]
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x38
        ; Exact mapped bytes EB 02: jmp 0x58802d2e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 68 D6 2E 00 00: push 0x2ed6
        __asm _emit 0x68
        __asm _emit 0xd6
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 6A FE: push -2
        __asm _emit 0x6a
        __asm _emit 0xfe
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 5B 04 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 00 5C C5 98 58: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5D 50: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0x50
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 26: je 0x58802d79
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4B 10: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x10
        ; Exact mapped bytes 89 4D 0C: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 53 14: mov edx, dword ptr [ebx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x14
        ; Exact mapped bytes 8D 43 18: lea eax, [ebx + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x18
        ; Exact mapped bytes 89 55 10: mov dword ptr [ebp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 4D 14: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 55 18: mov dword ptr [ebp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4D 1C: mov dword ptr [ebp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 89 55 20: mov dword ptr [ebp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x20
        ; Exact mapped bytes 8B 5C 24 44: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes EB 02: jmp 0x58802d81
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 6F 20: mov dword ptr [edi + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x20
        ; Exact mapped bytes E8 8B FF 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 20: mov eax, dword ptr [edi + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x20
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 40 01: sub dword ptr [esp + 0x40], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        ; Exact mapped bytes 89 5C 24 44: mov dword ptr [esp + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 0F 85 C1 FE FF FF: jne 0x58802c80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 8C 0B 01 00 9C FF FF FF: mov dword ptr [esi + 0x10b8c], 0xffffff9c
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9E 6C 04 01 00: mov dword ptr [esi + 0x1046c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 70 04 01 00: mov dword ptr [esi + 0x10470], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 88 9E 84 04 01 00: mov byte ptr [esi + 0x10484], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 9C 04 01 00: mov dword ptr [esi + 0x1049c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 90 04 01 00: mov dword ptr [esi + 0x10490], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 94 04 01 00: mov dword ptr [esi + 0x10494], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 80 04 01 00: mov dword ptr [esi + 0x10480], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E BC 04 01 00: mov dword ptr [esi + 0x104bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 CC 04 01 00 30 00 00 00: mov dword ptr [esi + 0x104cc], 0x30
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 C8 04 01 00 FF FF FF FF: mov dword ptr [esi + 0x104c8], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 9E D0 04 01 00: mov dword ptr [esi + 0x104d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 0C 0C 01 00 06 00 00 00: mov dword ptr [esi + 0x10c0c], 6
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 8C 04 01 00: mov dword ptr [esi + 0x1048c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 A0 00 00 00: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 10 0C 02 00: mov dword ptr [esi + 0x20c10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 14 9E 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9e
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 37: mov byte ptr [esp + 0x34], 0x37
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x37
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x58802e53
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 6F 27 FA FF: call 0x587a55c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x27
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58802e55
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 9C 0C 02 00: mov dword ptr [esi + 0x20c9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 28 0D 02 00: lea eax, [esi + 0x20d28]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 89 9E 0C 09 01 00: mov dword ptr [esi + 0x1090c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 48 74 00 00 00: mov dword ptr [esp + 0x48], 0x74
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 44 D0 01 00 00: mov dword ptr [esp + 0x44], 0x1d0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes C7 44 24 3C 02 00 00 00: mov dword ptr [esp + 0x3c], 2
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 BF 9D 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9d
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 1C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C6 44 24 34 38: mov byte ptr [esp + 0x34], 0x38
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x38
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 76: je 0x58802f17
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1B: jle 0x58802ecd
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 7C 17: jl 0x58802ecd
        __asm _emit 0x7c
        __asm _emit 0x17
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x58802ecd
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 44: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 2C 01: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x01
        ; Exact mapped bytes EB 02: jmp 0x58802ecf
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 6F 02 00 00: push 0x26f
        __asm _emit 0x68
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 BF 02 10 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x10
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x58802f19
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
        ; Exact mapped bytes EB 02: jmp 0x58802f19
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 40: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 3A: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 38 4A 00 00: mov eax, 0x4a38
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58802f3a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 16 00 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58802f47
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 99 FF 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 44 24 44: add dword ptr [esp + 0x44], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 01 44 24 40: add dword ptr [esp + 0x40], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 44 24 48: add dword ptr [esp + 0x48], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 29 44 24 3C: sub dword ptr [esp + 0x3c], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 85 21 FF FF FF: jne 0x58802e88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 28 0D 02 00: mov ecx, dword ptr [esi + 0x20d28]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A9 FD 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 28 0D 02 00: mov eax, dword ptr [esi + 0x20d28]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x02
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
        ; Exact mapped bytes 68 0C 01 00 00: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BE 9C 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 39: mov byte ptr [esp + 0x34], 0x39
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x39
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 30: je 0x58802fd0
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 01 01 01 00: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF FF FF 00: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 8A 02 00 00: push 0x28a
        __asm _emit 0x68
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 C0 01 00 00: push 0x1c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 7B 02 00 00: push 0x27b
        __asm _emit 0x68
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 29: push 0x29
        __asm _emit 0x6a
        __asm _emit 0x29
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C4 E0 F5 FF: call 0x58761090
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58802fd2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE 30 0D 02 00: mov dword ptr [esi + 0x20d30], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 20 4E 00 00: mov eax, 0x4e20
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58802ff3
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 5D FF 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803000
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E0 FE 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 30 0D 02 00: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 41: push 0x41
        __asm _emit 0x6a
        __asm _emit 0x41
        ; Exact mapped bytes E8 33 5E F4 FF: call 0x58748e40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5e
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 30 0D 02 00: mov eax, dword ptr [esi + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 68 9C 00 00 00: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 28 9C 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9c
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 3A: mov byte ptr [esp + 0x34], 0x3a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x3a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5880305e
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 15 34 45 A2 58: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A8 02 00 00: push 0x2a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 62 02 00 00: push 0x262
        __asm _emit 0x68
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 14: push 0x14
        __asm _emit 0x6a
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D4 8C 10 00: call 0x5890bd30
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803060
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 34 0D 02 00: mov dword ptr [esi + 0x20d34], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 34 0D 02 00: mov eax, dword ptr [esi + 0x20d34]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 68 01 01 01 00: mov dword ptr [eax + 0x68], 0x10101
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 34 0D 02 00: mov eax, dword ptr [esi + 0x20d34]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 98 00 00 00 0C 00 00 00: mov dword ptr [eax + 0x98], 0xc
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 34 0D 02 00: mov eax, dword ptr [esi + 0x20d34]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 90 00 00 00 B8 0B 00 00: mov dword ptr [eax + 0x90], 0xbb8
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 34 0D 02 00: mov edi, dword ptr [esi + 0x20d34]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA 20 4E 00 00: mov edx, 0x4e20
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588030bd
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 93 FE 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588030ca
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 16 FE 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 68 9C 00 00 00: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 40 0D 02 00: mov dword ptr [esi + 0x20d40], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 9B 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 3B: mov byte ptr [esp + 0x34], 0x3b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x3b
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x58803112
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 00 FF FF 00: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 03 00 00: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 00 00 00: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 6E: push 0x6e
        __asm _emit 0x6a
        __asm _emit 0x6e
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 20 8C 10 00: call 0x5890bd30
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803114
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 38 0D 02 00: mov dword ptr [esi + 0x20d38], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 38 0D 02 00: mov eax, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 68 01 01 01 00: mov dword ptr [eax + 0x68], 0x10101
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 38 0D 02 00: mov eax, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BB 05 00 00 00: mov ebx, 5
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 98 98 00 00 00: mov dword ptr [eax + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 38 0D 02 00: mov eax, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 88 13 00 00: mov ebp, 0x1388
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 A8 90 00 00 00: mov dword ptr [eax + 0x90], ebp
        __asm _emit 0x89
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 38 0D 02 00: mov edi, dword ptr [esi + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 20 4E 00 00: mov eax, 0x4e20
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x58803173
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 DD FD 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x58803180
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 60 FD 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 68 9C 00 00 00: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C4 9A 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9a
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 3C: mov byte ptr [esp + 0x34], 0x3c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x588031c6
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 04 00 00: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 00 00 00: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 8A 02 00 00: push 0x28a
        __asm _emit 0x68
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 6C 8B 10 00: call 0x5890bd30
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588031c8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 3C 0D 02 00: mov dword ptr [esi + 0x20d3c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 3C 0D 02 00: mov eax, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 68 01 01 01 00: mov dword ptr [eax + 0x68], 0x10101
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 3C 0D 02 00: mov eax, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 98 98 00 00 00: mov dword ptr [eax + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 3C 0D 02 00: mov eax, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 A8 90 00 00 00: mov dword ptr [eax + 0x90], ebp
        __asm _emit 0x89
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 3C 0D 02 00: mov edi, dword ptr [esi + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 20 4E 00 00: mov eax, 0x4e20
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5880321d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 33 FD 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5880322a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B6 FC 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1A 9A 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9a
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 3D: mov byte ptr [esp + 0x34], 0x3d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x3d
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x58803256
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 7C D3 99 58: push 0x5899d37c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0xd3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1C 0B 0F 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803258
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 54 1C 02 00: mov dword ptr [esi + 0x21c54], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 58 1C 02 00: lea eax, [esi + 0x21c58]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 D7 99 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x99
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 40: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 34 3E: mov byte ptr [esp + 0x34], 0x3e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x3e
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 6E: je 0x588032f7
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 86 54 1C 02 00: mov eax, dword ptr [esi + 0x21c54]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 64 01 00 00: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 13: jle 0x588032aa
        __asm _emit 0x7e
        __asm _emit 0x13
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 7C 0F: jl 0x588032aa
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x588032aa
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 2C 98: mov ebp, dword ptr [eax + ebx*4]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x98
        ; Exact mapped bytes EB 02: jmp 0x588032ac
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 68 E1 2E 00 00: push 0x2ee1
        __asm _emit 0x68
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A FD: push -3
        __asm _emit 0x6a
        __asm _emit 0xfd
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 DF FE 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0x0f
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
        ; Exact mapped bytes 74 2B: je 0x588032f9
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
        ; Exact mapped bytes EB 02: jmp 0x588032f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 44: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 FB 02: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 0F 8C 52 FF FF FF: jl 0x58803270
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 58 1C 02 00: mov ecx, dword ptr [esi + 0x21c58]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F2 F9 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 5C 1C 02 00: mov ecx, dword ptr [esi + 0x21c5c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E2 F9 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 99 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x99
        __asm _emit 0x17
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
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes C6 44 24 34 3F: mov byte ptr [esp + 0x34], 0x3f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x3f
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3B: je 0x58803395
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 29: cmp dword ptr [ecx + 0x160], 0x29
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        ; Exact mapped bytes 7E 16: jle 0x5880337f
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880337f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 40 0A 00 00: add ecx, 0xa40
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803381
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 6A 5A: push 0x5a
        __asm _emit 0x6a
        __asm _emit 0x5a
        ; Exact mapped bytes 68 89 03 00 00: push 0x389
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 6D 3D 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803397
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 60 1C 02 00: mov dword ptr [esi + 0x21c60], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 A2 98 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x98
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 40: mov byte ptr [esp + 0x34], 0x40
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x40
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 3B: je 0x588033f7
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 29: cmp dword ptr [ecx + 0x160], 0x29
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        ; Exact mapped bytes 7E 16: jle 0x588033e1
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588033e1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 40 0A 00 00: add edx, 0xa40
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588033e3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 6A 5A: push 0x5a
        __asm _emit 0x6a
        __asm _emit 0x5a
        ; Exact mapped bytes 68 B1 03 00 00: push 0x3b1
        __asm _emit 0x68
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 0B 3D 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588033f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 64 1C 02 00: mov dword ptr [esi + 0x21c64], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 60 1C 02 00: mov edi, dword ptr [esi + 0x21c60]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA E1 2E 00 00: mov edx, 0x2ee1
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803420
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 30 FB 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x5880342d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B3 FA 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 64 1C 02 00: mov edi, dword ptr [esi + 0x21c64]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 E1 2E 00 00: mov eax, 0x2ee1
        __asm _emit 0xb8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803449
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 07 FB 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803456
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 8A FA 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 44 0D 02 00: mov dword ptr [esi + 0x20d44], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 5C 05 01 00: mov dword ptr [esi + 0x1055c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 8C 03 00 00: mov dword ptr [esi + 0x38c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA FF E5 00 00: mov edx, 0xe5ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xe5
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
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 8D 4C 24 20: lea ecx, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes C7 44 24 24 01 00 00 00: mov dword ptr [esp + 0x24], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 28: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 89 5C 24 2C: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes FF 15 80 C0 98 58: call dword ptr [0x5898c080]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 86 94 00 00 00: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 38 0E 02 00: mov dword ptr [esi + 0x20e38], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 3C 0E 02 00: mov dword ptr [esi + 0x20e3c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 30 0E 02 00: mov dword ptr [esi + 0x20e30], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x30
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 D4 00 00 00: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 34 0E 02 00: mov dword ptr [esi + 0x20e34], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 97 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 41: mov byte ptr [esp + 0x34], 0x41
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x41
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 18: je 0x588034eb
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 54 01 00 00: push 0x154
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 00 00 00: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D7 25 07 00: call 0x58875ac0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588034ed
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 86 38 0E 02 00: mov dword ptr [esi + 0x20e38], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 89 9E 3C 0E 02 00: mov dword ptr [esi + 0x20e3c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE F0 18 02 00: lea edi, [esi + 0x218f0]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x58803510
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58803510 .. +0xF41 bytes.
extern "C" __declspec(naked) void FUN_588011c0_segment_02() {
    __asm {
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 33 30 04 00 00 00: mov byte ptr [ebx + esi + 0x430], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2C 97 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x97
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 42: mov byte ptr [esp + 0x34], 0x42
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x42
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 17: je 0x58803549
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
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
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1B 06 0B 00: call 0x588b3b60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B E8: mov ebp, eax
        __asm _emit 0x8b
        __asm _emit 0xe8
        ; Exact mapped bytes EB 02: jmp 0x5880354b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 89 2F: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 4D 40: mov ecx, dword ptr [ebp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x40
        ; Exact mapped bytes BA 38 4A 00 00: mov edx, 0x4a38
        __asm _emit 0xba
        __asm _emit 0x38
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x58803568
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 E8 F9 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 30: mov ecx, dword ptr [ebp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x30
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x58803575
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 6B F9 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
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
        ; Exact mapped bytes C7 87 20 06 00 00 00 00 00 00: mov dword ptr [edi + 0x620], 0
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 FB 08: cmp ebx, 8
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x08
        ; Exact mapped bytes 0F 8C 6E FF FF FF: jl 0x58803510
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 A5 96 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x96
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes C6 44 24 34 43: mov byte ptr [esp + 0x34], 0x43
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x43
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 6C: je 0x58803629
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes A1 14 46 A2 58: mov eax, dword ptr [0x58a24614]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C7 02 00 00: cmp dword ptr [eax + 0x164], 0x2c7
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588035e4
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588035e4
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 1C 0B 00 00: mov ebp, dword ptr [eax + 0xb1c]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588035e6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 AC FB 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x5880362b
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
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
        ; Exact mapped bytes EB 02: jmp 0x5880362b
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE 40 05 01 00: mov dword ptr [esi + 0x10540], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 DE F6 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 40 05 01 00: mov eax, dword ptr [esi + 0x10540]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 F6 95 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 44: mov byte ptr [esp + 0x34], 0x44
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x44
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 64: je 0x588036ce
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes A1 D0 46 A2 58: mov eax, dword ptr [0x58a246d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 64 01 00 00: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x58803689
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x58803689
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2A: mov ebp, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x2a
        ; Exact mapped bytes EB 02: jmp 0x5880368b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 07 FB 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x588036d0
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x588036d0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE 80 00 00 00: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC F5 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B BE 80 00 00 00: mov edi, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA F8 2A 00 00: mov edx, 0x2af8
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x5880370f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 41 F8 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x5880371c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C4 F7 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B BE 80 00 00 00: mov edi, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes BA F8 2A 00 00: mov edx, 0x2af8
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803747
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 09 F8 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803754
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 8C F7 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
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
        ; Exact mapped bytes 89 9E 48 0D 02 00: mov dword ptr [esi + 0x20d48], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 4C 0D 02 00: mov dword ptr [esi + 0x20d4c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes C7 86 28 05 01 00 E8 03 00 00: mov dword ptr [esi + 0x10528], 0x3e8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 94 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x94
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 45: mov byte ptr [esp + 0x34], 0x45
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x45
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x588037a0
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 00 90 9C 58: mov edx, dword ptr [0x589c9000]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 52 6C 10 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588037a2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 94 0B 01 00: mov dword ptr [esi + 0x10b94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 9A 94 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x94
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 46: mov byte ptr [esp + 0x34], 0x46
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x46
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x588037d4
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 04 90 9C 58: mov ecx, dword ptr [0x589c9004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1E 6C 10 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588037d6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 98 0B 01 00: mov dword ptr [esi + 0x10b98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 66 94 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x94
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 47: mov byte ptr [esp + 0x34], 0x47
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x47
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x58803808
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 08 90 9C 58: mov edx, dword ptr [0x589c9008]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 EA 6B 10 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880380a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 9C 0B 01 00: mov dword ptr [esi + 0x10b9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 94 0B 01 00: mov eax, dword ptr [esi + 0x10b94]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 90 0B 01 00: mov dword ptr [esi + 0x10b90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A0 0B 01 00: mov dword ptr [esi + 0x10ba0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A4 0B 01 00 0B 00 00 00: mov dword ptr [esi + 0x10ba4], 0xb
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A8 0B 01 00 14 00 00 00: mov dword ptr [esi + 0x10ba8], 0x14
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E AC 0B 01 00: mov dword ptr [esi + 0x10bac], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E B0 0B 01 00: mov dword ptr [esi + 0x10bb0], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E B4 0B 01 00: mov dword ptr [esi + 0x10bb4], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 2C 0E 02 00: mov dword ptr [esi + 0x20e2c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 20 0E 02 00: mov dword ptr [esi + 0x20e20], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 28 0E 02 00: mov dword ptr [esi + 0x20e28], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 28 0A 01 00: mov dword ptr [esi + 0x10a28], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A4 18 02 00: mov dword ptr [esi + 0x218a4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A8 18 02 00: mov dword ptr [esi + 0x218a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 9C 17 02 00: mov dword ptr [esi + 0x2179c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 90 00 00 00: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E AC 18 02 00: mov dword ptr [esi + 0x218ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E AC 03 00 00: mov dword ptr [esi + 0x3ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B0 03 00 00: mov dword ptr [esi + 0x3b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B4 03 00 00: mov dword ptr [esi + 0x3b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B8 03 00 00: mov dword ptr [esi + 0x3b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 BC 03 00 00: mov dword ptr [esi + 0x3bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C0 03 00 00: mov dword ptr [esi + 0x3c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C4 03 00 00: mov dword ptr [esi + 0x3c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C8 03 00 00: mov dword ptr [esi + 0x3c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 CC 03 00 00: mov dword ptr [esi + 0x3cc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D0 03 00 00: mov dword ptr [esi + 0x3d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D4 03 00 00: mov dword ptr [esi + 0x3d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D8 03 00 00: mov dword ptr [esi + 0x3d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 DC 03 00 00: mov dword ptr [esi + 0x3dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E0 03 00 00: mov dword ptr [esi + 0x3e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E4 03 00 00: mov dword ptr [esi + 0x3e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E8 03 00 00: mov dword ptr [esi + 0x3e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 EC 03 00 00: mov dword ptr [esi + 0x3ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F0 03 00 00: mov dword ptr [esi + 0x3f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F4 03 00 00: mov dword ptr [esi + 0x3f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F8 03 00 00: mov dword ptr [esi + 0x3f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 FC 03 00 00: mov dword ptr [esi + 0x3fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 00 04 00 00: mov dword ptr [esi + 0x400], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 04 04 00 00: mov dword ptr [esi + 0x404], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 08 04 00 00: mov dword ptr [esi + 0x408], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 0C 04 00 00: mov dword ptr [esi + 0x40c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 10 04 00 00: mov dword ptr [esi + 0x410], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 14 04 00 00: mov dword ptr [esi + 0x414], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 18 04 00 00: mov dword ptr [esi + 0x418], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 1C 04 00 00: mov dword ptr [esi + 0x41c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 20 04 00 00: mov dword ptr [esi + 0x420], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 24 04 00 00: mov dword ptr [esi + 0x424], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 28 04 00 00: mov dword ptr [esi + 0x428], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 2C 04 00 00: mov dword ptr [esi + 0x42c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E0 18 02 00: mov dword ptr [esi + 0x218e0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E4 18 02 00: mov dword ptr [esi + 0x218e4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E E8 18 02 00: mov dword ptr [esi + 0x218e8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E EC 18 02 00: mov dword ptr [esi + 0x218ec], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 34 1C 02 00: mov dword ptr [esi + 0x21c34], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 89 86 3C 1C 02 00: mov dword ptr [esi + 0x21c3c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 44 1C 02 00: mov dword ptr [esi + 0x21c44], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 10 19 02 00: mov dword ptr [esi + 0x21910], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BD 02 00 00 00: mov ebp, 2
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE E4 1C 02 00: mov dword ptr [esi + 0x21ce4], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E E8 1C 02 00: mov dword ptr [esi + 0x21ce8], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 1C 1D 02 00: mov dword ptr [esi + 0x21d1c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 EC 1C 02 00: mov dword ptr [esi + 0x21cec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F0 1C 02 00: mov dword ptr [esi + 0x21cf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F4 1C 02 00: mov dword ptr [esi + 0x21cf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 F8 1C 02 00: mov dword ptr [esi + 0x21cf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 FC 1C 02 00: mov dword ptr [esi + 0x21cfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 00 1D 02 00: mov dword ptr [esi + 0x21d00], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 04 1D 02 00: mov dword ptr [esi + 0x21d04], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 08 1D 02 00: mov dword ptr [esi + 0x21d08], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 0C 1D 02 00: mov dword ptr [esi + 0x21d0c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 10 1D 02 00: mov dword ptr [esi + 0x21d10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 14 1D 02 00: mov dword ptr [esi + 0x21d14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 18 1D 02 00: mov dword ptr [esi + 0x21d18], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 63 92 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x92
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 48: mov byte ptr [esp + 0x34], 0x48
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x48
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 2D: je 0x58803a28
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 B9 B9 B9 00: push 0xb9b9b9
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0xb9
        __asm _emit 0xb9
        __asm _emit 0x00
        ; Exact mapped bytes 68 8A 02 00 00: push 0x28a
        __asm _emit 0x68
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 C0 01 00 00: push 0x1c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 7B 02 00 00: push 0x27b
        __asm _emit 0x68
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 00 00 00: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 5A F8 F2 FF: call 0x58733280
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58803a2a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 24 1D 02 00: mov dword ptr [esi + 0x21d24], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B BE 24 1D 02 00: mov edi, dword ptr [esi + 0x21d24]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 20 4E 00 00: mov eax, 0x4e20
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803a5a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F6 F4 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803a67
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 79 F4 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 10 09 01 00: mov dword ptr [esi + 0x10910], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 38 1C 02 00: mov dword ptr [esi + 0x21c38], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C6 86 40 0E 02 00 00: mov byte ptr [esi + 0x20e40], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC 00 00 00: push 0xbc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 24 01 00 00: mov dword ptr [esi + 0x124], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 28 01 00 00: mov dword ptr [esi + 0x128], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 2C 01 00 00: mov dword ptr [esi + 0x12c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 30 01 00 00: mov dword ptr [esi + 0x130], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 34 01 00 00: mov dword ptr [esi + 0x134], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 38 01 00 00: mov dword ptr [esi + 0x138], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 3C 01 00 00: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 40 01 00 00: mov dword ptr [esi + 0x140], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 44 01 00 00: mov dword ptr [esi + 0x144], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 48 01 00 00: mov dword ptr [esi + 0x148], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 4C 01 00 00: mov dword ptr [esi + 0x14c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 50 01 00 00: mov dword ptr [esi + 0x150], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 54 01 00 00: mov dword ptr [esi + 0x154], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 58 01 00 00: mov dword ptr [esi + 0x158], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 5C 01 00 00: mov dword ptr [esi + 0x15c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 60 01 00 00: mov dword ptr [esi + 0x160], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 64 01 00 00: mov dword ptr [esi + 0x164], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 68 01 00 00: mov dword ptr [esi + 0x168], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 6C 01 00 00: mov dword ptr [esi + 0x16c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 70 01 00 00: mov dword ptr [esi + 0x170], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 52 91 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x91
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 49: mov byte ptr [esp + 0x34], 0x49
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x49
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 12: je 0x58803b1e
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 D6 42 F7 FF: call 0x58777df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x42
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x58803b20
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B9 08 52 00 00: mov ecx, 0x5208
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 48 1C 02 00: mov dword ptr [esi + 0x21c48], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803b41
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 0F F4 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x58803b4e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 92 F3 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes E8 F9 90 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 4A: mov byte ptr [esp + 0x34], 0x4a
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x4a
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 10: je 0x58803b75
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 2D F6 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf6
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803b77
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 AC 1C 02 00: mov dword ptr [esi + 0x21cac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 B0 1C 02 00: lea eax, [esi + 0x21cb0]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes C7 44 24 40 52 00 00 00: mov dword ptr [esp + 0x40], 0x52
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 44 48 01 00 00: mov dword ptr [esp + 0x44], 0x148
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 6C 24 3C: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 A7 90 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x90
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 1C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C6 44 24 34 4B: mov byte ptr [esp + 0x34], 0x4b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x4b
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58803c3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 40: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1B: jle 0x58803be9
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 7C 17: jl 0x58803be9
        __asm _emit 0x7c
        __asm _emit 0x17
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x58803be9
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 44: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 8B 2C 10: mov ebp, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x58803beb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 AC 1C 02 00: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 27 02 00 00: push 0x227
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4F 03 00 00: push 0x34f
        __asm _emit 0x68
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 99 F5 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x58803c3f
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
        ; Exact mapped bytes EB 02: jmp 0x58803c3f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 48: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 83 44 24 44 04: add dword ptr [esp + 0x44], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x04
        ; Exact mapped bytes 89 38: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 44 24 40: add dword ptr [esp + 0x40], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 29 44 24 3C: sub dword ptr [esp + 0x3c], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 37 FF FF FF: jne 0x58803ba0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BF 5C 03 00 00: mov edi, 0x35c
        __asm _emit 0xbf
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D AE B8 1C 02 00: lea ebp, [esi + 0x21cb8]
        __asm _emit 0x8d
        __asm _emit 0xae
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 00 00 00: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D0 8F 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8f
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 4C: mov byte ptr [esp + 0x34], 0x4c
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x4c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 40: je 0x58803cce
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 2A: cmp dword ptr [ecx + 0x160], 0x2a
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 16: jle 0x58803cb3
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 90 01 00 00: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58803cb3
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 90 01 00 00: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 80 0A 00 00: add edx, 0xa80
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803cb5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E AC 1C 02 00: mov ecx, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C 02 00 00: push 0x22c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 34 34 10 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803cd0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 45 00: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 2D: add edi, 0x2d
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x2d
        ; Exact mapped bytes 83 C5 04: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x04
        ; Exact mapped bytes 81 FF B6 03 00 00: cmp edi, 0x3b6
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 34 02: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 7C 8E: jl 0x58803c74
        __asm _emit 0x7c
        __asm _emit 0x8e
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 8F 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8f
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 4D: mov byte ptr [esp + 0x34], 0x4d
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x4d
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7B 00 00 00: je 0x58803d7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 13: cmp dword ptr [eax + 0x160], 0x13
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        ; Exact mapped bytes 7E 16: jle 0x58803d27
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58803d27
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 C0 04 00 00: add ebp, 0x4c0
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803d29
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 AC 1C 02 00: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 27 02 00 00: push 0x227
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 35 03 00 00: push 0x335
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 5B F4 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x58803d80
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
        ; Exact mapped bytes EB 02: jmp 0x58803d80
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE C0 1C 02 00: mov dword ptr [esi + 0x21cc0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 BC 8E 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 4E: mov byte ptr [esp + 0x34], 0x4e
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x4e
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 7A 00 00 00: je 0x58803e22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 12: cmp dword ptr [eax + 0x160], 0x12
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        ; Exact mapped bytes 7E 16: jle 0x58803dcc
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58803dcc
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C5 80 04 00 00: add ebp, 0x480
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803dce
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 AC 1C 02 00: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 27 02 00 00: push 0x227
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 35 03 00 00: push 0x335
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B6 F3 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x58803e24
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
        ; Exact mapped bytes EB 02: jmp 0x58803e24
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE C4 1C 02 00: mov dword ptr [esi + 0x21cc4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E C8 1C 02 00: mov dword ptr [esi + 0x21cc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B0 1C 02 00: mov eax, dword ptr [esi + 0x21cb0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x1c
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 86 C0 1C 02 00: mov eax, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E B0 1C 02 00: mov ecx, dword ptr [esi + 0x21cb0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes E8 C0 EE 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 1C 02 00: mov ecx, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B0 EE 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xee
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 D7 8D 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8d
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 4F: mov byte ptr [esp + 0x34], 0x4f
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x4f
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 77 00 00 00: je 0x58803f04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 78: cmp dword ptr [eax + 0x164], 0x78
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x78
        ; Exact mapped bytes 7E 16: jle 0x58803eb1
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58803eb1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 E0 01 00 00: mov ebp, dword ptr [eax + 0x1e0]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803eb3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 AC 1C 02 00: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 27 02 00 00: push 0x227
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4F 03 00 00: push 0x34f
        __asm _emit 0x68
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 D1 F2 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf2
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x58803f06
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
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
        ; Exact mapped bytes EB 02: jmp 0x58803f06
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE D4 1C 02 00: mov dword ptr [esi + 0x21cd4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 36 8D 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8d
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 50: mov byte ptr [esp + 0x34], 0x50
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x50
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 77 00 00 00: je 0x58803fa5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 47 A2 58: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 79: cmp dword ptr [eax + 0x164], 0x79
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x79
        ; Exact mapped bytes 7E 16: jle 0x58803f52
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58803f52
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A8 E4 01 00 00: mov ebp, dword ptr [eax + 0x1e4]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58803f54
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 AC 1C 02 00: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 27 02 00 00: push 0x227
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4F 03 00 00: push 0x34f
        __asm _emit 0x68
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 30 F2 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf2
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x58803fa7
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 57 10: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
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
        ; Exact mapped bytes EB 02: jmp 0x58803fa7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE D8 1C 02 00: mov dword ptr [esi + 0x21cd8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xd8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 95 8C 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 51: mov byte ptr [esp + 0x34], 0x51
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x51
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 27: je 0x58803ff2
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 86 AC 1C 02 00: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 4A 02 00 00: push 0x24a
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4F 03 00 00: push 0x34f
        __asm _emit 0x68
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B9 F1 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x58803ff4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE DC 1C 02 00: mov dword ptr [esi + 0x21cdc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 48 8C 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 52: mov byte ptr [esp + 0x34], 0x52
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x52
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 27: je 0x5880403f
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 86 AC 1C 02 00: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 4A 02 00 00: push 0x24a
        __asm _emit 0x68
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 4F 03 00 00: push 0x34f
        __asm _emit 0x68
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 6C F1 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 5C C5 98 58: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes EB 02: jmp 0x58804041
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BE E0 1C 02 00: mov dword ptr [esi + 0x21ce0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 D4 1C 02 00: mov eax, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 8E D4 1C 02 00: mov ecx, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes E8 B5 EC 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 DC 1C 02 00: mov eax, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x1c
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 8E DC 1C 02 00: mov ecx, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 96 EC 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 F0 1E 02 00 FF FF FF FF: mov dword ptr [esi + 0x21ef0], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes B8 F5 7F 00 00: mov eax, 0x7ff5
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588040b0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A0 EE 0F 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xee
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 06: je 0x588040bd
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 23 EE 0F 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xee
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 8A 8B 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8b
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 53: mov byte ptr [esp + 0x34], 0x53
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x53
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5880415a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 46 A2 58: mov ecx, dword ptr [0x58a2460c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 0E 01 00 00: cmp dword ptr [ecx + 0x164], 0x10e
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 7E 16: jle 0x58804107
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x58804107
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 38 04 00 00: mov ebp, dword ptr [ecx + 0x438]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58804109
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 66 8B 50 26: mov dx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x26
        ; Exact mapped bytes 66 42: inc dx
        __asm _emit 0x66
        __asm _emit 0x42
        ; Exact mapped bytes 0F B7 CA: movzx ecx, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xca
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 7B F0 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf0
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x5880415c
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x5880415c
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
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE F4 1E 02 00: mov dword ptr [esi + 0x21ef4], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 AD EB 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F4 1E 02 00: mov eax, dword ptr [esi + 0x21ef4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x02
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
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 C5 8A 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8a
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 54: mov byte ptr [esp + 0x34], 0x54
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x54
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58804220
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 46 A2 58: mov ecx, dword ptr [0x58a2460c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B9 64 01 00 00 0F 01 00 00: cmp dword ptr [ecx + 0x164], 0x10f
        __asm _emit 0x81
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 7E 16: jle 0x588041cc
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 99 8C 01 00 00: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588041cc
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 91 8C 01 00 00: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 3C 04 00 00: mov ebp, dword ptr [edx + 0x43c]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588041ce
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 41: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 B6 EF 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xef
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2B: je 0x58804222
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
        ; Exact mapped bytes EB 02: jmp 0x58804222
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes B8 FE FF 00 00: mov eax, 0xfffe
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE F8 1E 02 00: mov dword ptr [esi + 0x21ef8], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 68 B0 00 00 00: push 0xb0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes E8 0E 8A 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8a
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 55: mov byte ptr [esp + 0x34], 0x55
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x55
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x58804259
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 89 88 FC FF: call 0x587ccae0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5880425b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 7C: push 0x7c
        __asm _emit 0x6a
        __asm _emit 0x7c
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 04 1F 02 00: mov dword ptr [esi + 0x21f04], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 89 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x89
        __asm _emit 0x17
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
        ; Exact mapped bytes C6 44 24 34 56: mov byte ptr [esp + 0x34], 0x56
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x56
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x58804286
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 9C 87 F5 FF: call 0x5875ca20
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58804288
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 86 08 1F 02 00: mov dword ptr [esi + 0x21f08], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 28 1D 02 00: mov dword ptr [esi + 0x21d28], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 9E 2C 1D 02 00: mov dword ptr [esi + 0x21d2c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 8E CC 18 02 00: mov word ptr [esi + 0x218cc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F 89 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 57: mov byte ptr [esp + 0x34], 0x57
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x57
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 74 00 00 00: je 0x58804339
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C5 00 00 00: cmp dword ptr [eax + 0x164], 0xc5
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x588042ec
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588042ec
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AA 14 03 00 00: mov ebp, dword ptr [edx + 0x314]
        __asm _emit 0x8b
        __asm _emit 0xaa
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588042ee
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 96 00 00 00: push 0x96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 84 01 00 00: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 9C EE 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xee
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x5880433b
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 8D 45 18: lea eax, [ebp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x18
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
        ; Exact mapped bytes EB 02: jmp 0x5880433b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes 89 BE BC 18 02 00: mov dword ptr [esi + 0x218bc], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 89 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes C6 44 24 34 58: mov byte ptr [esp + 0x34], 0x58
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x58
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 84 75 00 00 00: je 0x588043d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C6 00 00 00: cmp dword ptr [eax + 0x164], 0xc6
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x5880438a
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 98 8C 01 00 00: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5880438a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 18 03 00 00: mov ebp, dword ptr [ecx + 0x318]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5880438c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 96 00 00 00: push 0x96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 84 01 00 00: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 FE ED 0F 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xed
        __asm _emit 0x0f
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
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 27: je 0x588043d6
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
        ; Exact mapped bytes 8B DF: mov ebx, edi
        __asm _emit 0x8b
        __asm _emit 0xdf
        ; Exact mapped bytes 89 9E C0 18 02 00: mov dword ptr [esi + 0x218c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 18 02 00: mov eax, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 C0 18 02 00: mov eax, dword ptr [esi + 0x218c0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E BC 18 02 00: mov ecx, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 24 38 02: mov byte ptr [esp + 0x38], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        ; Exact mapped bytes E8 12 E9 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 18 02 00: mov ecx, dword ptr [esi + 0x218c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 02 E9 0F 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 BC 18 02 00: mov eax, dword ptr [esi + 0x218bc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 86 C0 18 02 00: mov eax, dword ptr [esi + 0x218c0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4C 24 2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x2c
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
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
