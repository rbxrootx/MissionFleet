// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 9811 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F2DD0 .. +0x708 bytes.
extern "C" __declspec(naked) void FUN_587f2dd0_segment_00() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 E4 F8: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xf8
        ; Exact mapped bytes 81 EC 74 01 00 00: sub esp, 0x174
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x74
        __asm _emit 0x01
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
        ; Exact mapped bytes 89 84 24 70 01 00 00: mov dword ptr [esp + 0x170], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 68 DC 00 00 00: push 0xdc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 18 09 01 00: lea eax, [esi + 0x10918]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 46 9E 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 68 C8 01 00 00: push 0x1c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 44 07 01 00: lea eax, [esi + 0x10744]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 33 9E 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 90 54 03 00 00: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes C7 86 14 0A 01 00 FF FF FF FF: mov dword ptr [esi + 0x10a14], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 80 8C 12 00 00: mov eax, dword ptr [eax + 0x128c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 06 A1 8B 7C: xor eax, 0x7c8ba106
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0xa1
        __asm _emit 0x8b
        __asm _emit 0x7c
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C7 44 24 4C 01 00 00 00: mov dword ptr [esp + 0x4c], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 86 44 0E 02 00: cmp dword ptr [esi + 0x20e44], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x587f2e80
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 C8 6C FC FF: call 0x587b9b30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 58 78: cmp dword ptr [eax + 0x78], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x78
        ; Exact mapped bytes 75 0E: jne 0x587f2e80
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes C7 40 78 01 00 00 00: mov dword ptr [eax + 0x78], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 7C FA 00 00 00: mov dword ptr [eax + 0x7c], 0xfa
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 67 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x587f300d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 3F 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 84 2B 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x587f3007
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E FC 1E 02 00: cmp dword ptr [esi + 0x21efc], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x587f2f26
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8A 86 00 1F 02 00: mov al, byte ptr [esi + 0x21f00]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 23: je 0x587f2f1b
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 89 54 03 00 00: movzx ecx, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B3 01: mov bl, 1
        __asm _emit 0xb3
        __asm _emit 0x01
        ; Exact mapped bytes D2 E3: shl bl, cl
        __asm _emit 0xd2
        __asm _emit 0xe3
        ; Exact mapped bytes 84 D8: test al, bl
        __asm _emit 0x84
        __asm _emit 0xd8
        ; Exact mapped bytes 74 0B: je 0x587f2f1b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 89 8E 14 0A 01 00: mov dword ptr [esi + 0x10a14], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F 05 00 00: jmp 0x587f342a
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 14 0A 01 00: mov dword ptr [esi + 0x10a14], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 05 00 00: jmp 0x587f342a
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F4 09 01 00: mov eax, dword ptr [esi + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 74 0C: je 0x587f2f3f
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 08: jle 0x587f2f3f
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 89 BE 14 0A 01 00: mov dword ptr [esi + 0x10a14], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F8 09 01 00: mov eax, dword ptr [esi + 0x109f8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 74 10: je 0x587f2f5c
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 7D 0C: jge 0x587f2f5c
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes C7 86 14 0A 01 00 01 00 00 00: mov dword ptr [esi + 0x10a14], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 FC 09 01 00: mov eax, dword ptr [esi + 0x109fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 74 10: je 0x587f2f79
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 7D 0C: jge 0x587f2f79
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes C7 86 14 0A 01 00 02 00 00 00: mov dword ptr [esi + 0x10a14], 2
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 00 0A 01 00: mov eax, dword ptr [esi + 0x10a00]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 74 0C: je 0x587f2f92
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 7D 08: jge 0x587f2f92
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 89 96 14 0A 01 00: mov dword ptr [esi + 0x10a14], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 04 0A 01 00: mov eax, dword ptr [esi + 0x10a04]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 74 10: je 0x587f2faf
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 7D 0C: jge 0x587f2faf
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes C7 86 14 0A 01 00 04 00 00 00: mov dword ptr [esi + 0x10a14], 4
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 08 0A 01 00: mov eax, dword ptr [esi + 0x10a08]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 74 10: je 0x587f2fcc
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 7D 0C: jge 0x587f2fcc
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes C7 86 14 0A 01 00 05 00 00 00: mov dword ptr [esi + 0x10a14], 5
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 0A 01 00: mov eax, dword ptr [esi + 0x10a0c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 74 10: je 0x587f2fe9
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 7D 0C: jge 0x587f2fe9
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes C7 86 14 0A 01 00 06 00 00 00: mov dword ptr [esi + 0x10a14], 6
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 10 0A 01 00: mov eax, dword ptr [esi + 0x10a10]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 0F 84 30 04 00 00: je 0x587f342a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 8D 28 04 00 00: jge 0x587f342a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 19 04 00 00: jmp 0x587f3420
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 75 71: jne 0x587f307e
        __asm _emit 0x75
        __asm _emit 0x71
        ; Exact mapped bytes 8B 96 08 1F 02 00: mov edx, dword ptr [esi + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 70: mov eax, dword ptr [edx + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x70
        ; Exact mapped bytes 89 86 14 0A 01 00: mov dword ptr [esi + 0x10a14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 05 04 00 00: jne 0x587f342a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 59 0C: mov ebx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 84 EF 02 00 00: je 0x587f3347
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 81 36 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x36
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x587f3072
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F B6 93 54 03 00 00: movzx edx, byte ptr [ebx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 94 2C 01 00 00 00: mov dword ptr [esp + edx*4 + 0x2c], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5B 78: mov ebx, dword ptr [ebx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x5b
        __asm _emit 0x78
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 DF: jne 0x587f3058
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes E9 C9 02 00 00: jmp 0x587f3347
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 6F 02 00 00: jne 0x587f32f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F B6 88 54 03 00 00: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 0C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 4C 24 20: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 4C 24 24: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 89 4C 24 68: mov dword ptr [esp + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 89 4C 24 6C: mov dword ptr [esp + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 89 4C 24 70: mov dword ptr [esp + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 89 4C 24 74: mov dword ptr [esp + 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 89 7C 24 58: mov dword ptr [esp + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 89 4C 24 5C: mov dword ptr [esp + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 89 4C 24 60: mov dword ptr [esp + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 89 5C 24 64: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 71: je 0x587f3158
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 5C 24 20: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 BA 38 04 00 00: cmp dword ptr [edx + 0x438], edi
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4D: je 0x587f3145
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 0F B6 8A 54 03 00 00: movzx ecx, byte ptr [edx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 01 7C 4C 58: add word ptr [esp + ecx*2 + 0x58], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7c
        __asm _emit 0x4c
        __asm _emit 0x58
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 19: je 0x587f3121
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 39 BA B4 63 00 00: cmp dword ptr [edx + 0x63b4], edi
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0xb4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x587f3118
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 39 BA B0 63 00 00: cmp dword ptr [edx + 0x63b0], edi
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0xb0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2D: jne 0x587f3145
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 0F B6 8A 54 03 00 00: movzx ecx, byte ptr [edx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x587f313c
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 0F B6 8A 54 03 00 00: movzx ecx, byte ptr [edx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 75 19: jne 0x587f3145
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 39 BA B4 63 00 00: cmp dword ptr [edx + 0x63b4], edi
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0xb4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x587f313c
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 39 BA B0 63 00 00: cmp dword ptr [edx + 0x63b0], edi
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0xb0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x587f3145
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 01 7C 4C 68: add word ptr [esp + ecx*2 + 0x68], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7c
        __asm _emit 0x4c
        __asm _emit 0x68
        ; Exact mapped bytes 8D 4C 4C 68: lea ecx, [esp + ecx*2 + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x4c
        __asm _emit 0x68
        ; Exact mapped bytes 8B 52 78: mov edx, dword ptr [edx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x78
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 A4: jne 0x587f30f0
        __asm _emit 0x75
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 5C 24 64: mov ebx, dword ptr [esp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4C 24 60: mov ecx, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 8B 7C 24 58: mov edi, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 10: je 0x587f316d
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 7C 24 68: cmp di, word ptr [esp + 0x68]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x68
        ; Exact mapped bytes 74 09: je 0x587f316d
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes EB 04: jmp 0x587f3171
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 54 24 24: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 7C 24 5A: mov di, word ptr [esp + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x5a
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 10: je 0x587f318b
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 7C 24 6A: cmp di, word ptr [esp + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x6a
        ; Exact mapped bytes 74 09: je 0x587f318b
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes C7 44 24 30 01 00 00 00: mov dword ptr [esp + 0x30], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 66 83 7C 24 5C 00: cmp word ptr [esp + 0x5c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x587f31a8
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 7C 24 5C: mov di, word ptr [esp + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 66 3B 7C 24 6C: cmp di, word ptr [esp + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x6c
        ; Exact mapped bytes 74 09: je 0x587f31a8
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes C7 44 24 34 01 00 00 00: mov dword ptr [esp + 0x34], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 66 8B 7C 24 5E: mov di, word ptr [esp + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x5e
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 18: je 0x587f31ca
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 3B 7C 24 6E: cmp di, word ptr [esp + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x6e
        ; Exact mapped bytes 74 11: je 0x587f31ca
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 38 01 00 00 00: mov dword ptr [esp + 0x38], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes EB 05: jmp 0x587f31cf
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BF 01 00 00 00: mov edi, 1
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x587f31e1
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B 4C 24 70: cmp cx, word ptr [esp + 0x70]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 74 06: je 0x587f31e1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 89 7C 24 3C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 66 8B 4C 24 62: mov cx, word ptr [esp + 0x62]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x62
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x587f31f8
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B 4C 24 72: cmp cx, word ptr [esp + 0x72]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x72
        ; Exact mapped bytes 74 06: je 0x587f31f8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 89 7C 24 40: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 0D: je 0x587f320a
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B 5C 24 74: cmp bx, word ptr [esp + 0x74]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x74
        ; Exact mapped bytes 74 06: je 0x587f320a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B DF: mov ebx, edi
        __asm _emit 0x8b
        __asm _emit 0xdf
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes EB 04: jmp 0x587f320e
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 5C 24 44: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 66 8B 4C 24 66: mov cx, word ptr [esp + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x66
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x587f3225
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B 4C 24 76: cmp cx, word ptr [esp + 0x76]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x76
        ; Exact mapped bytes 74 06: je 0x587f3225
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes EB 04: jmp 0x587f3229
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 48: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 75: jne 0x587f32a3
        __asm _emit 0x75
        __asm _emit 0x75
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 0A: jne 0x587f323c
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 14 0A 01 00 00 00 00 00: mov dword ptr [esi + 0x10a14], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 7C 24 30: cmp dword ptr [esp + 0x30], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 75 06: jne 0x587f3248
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 BE 14 0A 01 00: mov dword ptr [esi + 0x10a14], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 39 7C 24 34: cmp dword ptr [esp + 0x34], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 75 0A: jne 0x587f3258
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 14 0A 01 00 02 00 00 00: mov dword ptr [esi + 0x10a14], 2
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 7C 24 38: cmp dword ptr [esp + 0x38], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 75 0A: jne 0x587f3268
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 14 0A 01 00 03 00 00 00: mov dword ptr [esi + 0x10a14], 3
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 7C 24 3C: cmp dword ptr [esp + 0x3c], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 75 0A: jne 0x587f3278
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 14 0A 01 00 04 00 00 00: mov dword ptr [esi + 0x10a14], 4
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 7C 24 40: cmp dword ptr [esp + 0x40], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 75 0A: jne 0x587f3288
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 14 0A 01 00 05 00 00 00: mov dword ptr [esi + 0x10a14], 5
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 75 0A: jne 0x587f3296
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 14 0A 01 00 06 00 00 00: mov dword ptr [esi + 0x10a14], 6
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 85 8C 01 00 00: jne 0x587f342a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x587f3420
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9E 4C 1C 02 00: mov ebx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 93 10 09 00 00: mov edx, dword ptr [ebx + 0x910]
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 38: mov edi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 80 BF CC 00 00 00 00: cmp byte ptr [edi + 0xcc], 0
        __asm _emit 0x80
        __asm _emit 0xbf
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x587f32cc
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 F9 06: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 7C EC: jl 0x587f32b3
        __asm _emit 0x7c
        __asm _emit 0xec
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x587f342a
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 8A: mov edx, dword ptr [edx + ecx*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x8a
        ; Exact mapped bytes 8B 8A B8 00 00 00: mov ecx, dword ptr [edx + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 0B: jne 0x587f32e6
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 F8 08: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 7C F6: jl 0x587f32d7
        __asm _emit 0x7c
        __asm _emit 0xf6
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x587f342a
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 14 0A 01 00: mov dword ptr [esi + 0x10a14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 83 2C 09 00 00: mov dword ptr [ebx + 0x92c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x587f342a
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 59 0C: mov ebx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 89 44 24 34: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 89 44 24 38: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 89 44 24 3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 89 44 24 40: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 44: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 89 44 24 48: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 74 21: je 0x587f3347
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 B3 33 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x33
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x587f3340
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F B6 93 54 03 00 00: movzx edx, byte ptr [ebx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x93
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 94 2C 01 00 00 00: mov dword ptr [esp + edx*4 + 0x2c], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5B 78: mov ebx, dword ptr [ebx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x5b
        __asm _emit 0x78
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 DF: jne 0x587f3326
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes 8B 86 6C 0A 01 00: mov eax, dword ptr [esi + 0x10a6c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 12: jbe 0x587f3363
        __asm _emit 0x76
        __asm _emit 0x12
        ; Exact mapped bytes 39 7C 24 2C: cmp dword ptr [esp + 0x2c], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 74 0C: je 0x587f3363
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C7 86 14 0A 01 00 00 00 00 00: mov dword ptr [esi + 0x10a14], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 70 0A 01 00: mov eax, dword ptr [esi + 0x10a70]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 13: jbe 0x587f3380
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x587f3380
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C7 86 14 0A 01 00 01 00 00 00: mov dword ptr [esi + 0x10a14], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 74 0A 01 00: mov eax, dword ptr [esi + 0x10a74]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 13: jbe 0x587f339d
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes 83 7C 24 34 00: cmp dword ptr [esp + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x587f339d
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C7 86 14 0A 01 00 02 00 00 00: mov dword ptr [esi + 0x10a14], 2
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 0A 01 00: mov eax, dword ptr [esi + 0x10a78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 13: jbe 0x587f33ba
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes 83 7C 24 38 00: cmp dword ptr [esp + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x587f33ba
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C7 86 14 0A 01 00 03 00 00 00: mov dword ptr [esi + 0x10a14], 3
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 7C 0A 01 00: mov eax, dword ptr [esi + 0x10a7c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 13: jbe 0x587f33d7
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes 83 7C 24 3C 00: cmp dword ptr [esp + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x587f33d7
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C7 86 14 0A 01 00 04 00 00 00: mov dword ptr [esi + 0x10a14], 4
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 0A 01 00: mov eax, dword ptr [esi + 0x10a80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 13: jbe 0x587f33f4
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes 83 7C 24 40 00: cmp dword ptr [esp + 0x40], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x587f33f4
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C7 86 14 0A 01 00 05 00 00 00: mov dword ptr [esi + 0x10a14], 5
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 84 0A 01 00: mov eax, dword ptr [esi + 0x10a84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 13: jbe 0x587f3411
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes 83 7C 24 44 00: cmp dword ptr [esp + 0x44], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x587f3411
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes C7 86 14 0A 01 00 06 00 00 00: mov dword ptr [esi + 0x10a14], 6
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 BE 88 0A 01 00: cmp dword ptr [esi + 0x10a88], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 76 11: jbe 0x587f342a
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes 83 7C 24 48 00: cmp dword ptr [esp + 0x48], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x587f342a
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 14 0A 01 00 07 00 00 00: mov dword ptr [esi + 0x10a14], 7
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE C8 18 02 00 00: cmp dword ptr [esi + 0x218c8], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x587f343c
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 BE C4 18 02 00 00: cmp dword ptr [esi + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x587f3467
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 83 BE D4 18 02 00 01: cmp dword ptr [esi + 0x218d4], 1
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
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
        ; Exact mapped bytes 75 09: jne 0x587f3456
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 0F B6 91 54 03 00 00: movzx edx, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587f3461
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 38 91 54 03 00 00: cmp byte ptr [ecx + 0x354], dl
        __asm _emit 0x38
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 94 C2: sete dl
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc2
        ; Exact mapped bytes 89 96 14 0A 01 00: mov dword ptr [esi + 0x10a14], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 24: je 0x587f3498
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 1E: je 0x587f3498
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 18: je 0x587f3498
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 12: je 0x587f3498
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 0C: je 0x587f3498
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 06: je 0x587f3498
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 75 31: jne 0x587f34c9
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 25: je 0x587f34c9
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 88 70 12 00 00: mov ecx, dword ptr [eax + 0x1270]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 88 A4 12 00 00: add ecx, dword ptr [eax + 0x12a4]
        __asm _emit 0x03
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 88 70 12 00 00: mov dword ptr [eax + 0x1270], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 78: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x78
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 DB: jne 0x587f34a4
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7A 0C: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 35: je 0x587f350b
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes EB 08: jmp 0x587f34e0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F34E0 .. +0x1358 bytes.
extern "C" __declspec(naked) void FUN_587f2dd0_segment_01() {
    __asm {
        ; Exact mapped bytes 0F B6 87 54 03 00 00: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 14 0A 01 00: cmp eax, dword ptr [esi + 0x10a14]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x587f34fa
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 EA 31 0E 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x31
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 09: jne 0x587f3503
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 DF: jne 0x587f34e0
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes EB 08: jmp 0x587f350b
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 4C 00 00 00 00: mov dword ptr [esp + 0x4c], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 38 1F 02 00: mov ecx, dword ptr [esi + 0x21f38]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 30 1F 02 00: mov edx, dword ptr [esi + 0x21f30]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 B0 05 01 00: movzx eax, word ptr [esi + 0x105b0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 E1 01: and ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 83 E2 01: and edx, 1
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        ; Exact mapped bytes 0B CA: or ecx, edx
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C1 E1 08: shl ecx, 8
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x08
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F B6 82 54 03 00 00: movzx eax, byte ptr [edx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 74 08 01 00: mov edx, dword ptr [esi + 0x10874]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 81 E2 0F F0 FC FF: and edx, 0xfffcf00f
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 0B CA: or ecx, edx
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 89 8E 74 08 01 00: mov dword ptr [esi + 0x10874], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9E D0 0A 01 00: lea ebx, [esi + 0x10ad0]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xd0
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 CC 0A 01 00: mov dword ptr [esi + 0x10acc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 10 1F 02 00: mov dword ptr [esi + 0x21f10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 03: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 89 86 14 1F 02 00: mov dword ptr [esi + 0x21f14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D4 0A 01 00: mov dword ptr [esi + 0x10ad4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 18 1F 02 00: mov dword ptr [esi + 0x21f18], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D8 0A 01 00: mov dword ptr [esi + 0x10ad8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 1C 1F 02 00: mov dword ptr [esi + 0x21f1c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 DC 0A 01 00: mov dword ptr [esi + 0x10adc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 20 1F 02 00: mov dword ptr [esi + 0x21f20], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E0 0A 01 00: mov dword ptr [esi + 0x10ae0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 24 1F 02 00: mov dword ptr [esi + 0x21f24], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E4 0A 01 00: mov dword ptr [esi + 0x10ae4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 28 1F 02 00: mov dword ptr [esi + 0x21f28], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E8 0A 01 00: mov dword ptr [esi + 0x10ae8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 2C 1F 02 00: mov dword ptr [esi + 0x21f2c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 0C: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x0c
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x587f373b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 0F B6 91 54 03 00 00: movzx edx, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 96 10 1F 02 00: lea eax, [esi + edx*4 + 0x21f10]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 50 66 00 00: mov edx, dword ptr [ecx + 0x6650]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x50
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 10: add dword ptr [eax], edx
        __asm _emit 0x01
        __asm _emit 0x10
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 70 12 00 00: mov edx, dword ptr [ecx + 0x1270]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BC 86 CC 0A 01 00: lea edi, [esi + eax*4 + 0x10acc]
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 01 17: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        ; Exact mapped bytes 8B 81 64 12 00 00: mov eax, dword ptr [ecx + 0x1264]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 01 86 DC 09 01 00: add dword ptr [esi + 0x109dc], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 68 12 00 00: mov edx, dword ptr [ecx + 0x1268]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 01 96 E0 09 01 00: add dword ptr [esi + 0x109e0], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 6C 12 00 00: mov edx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 01 96 E4 09 01 00: add dword ptr [esi + 0x109e4], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 64 12 00 00: mov edx, dword ptr [ecx + 0x1264]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 8D 84 C6 1C 09 01 00: lea eax, [esi + eax*8 + 0x1091c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 01 10: add dword ptr [eax], edx
        __asm _emit 0x01
        __asm _emit 0x10
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 68 12 00 00: mov edx, dword ptr [ecx + 0x1268]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 0C 0B 00 00: add eax, 0xb0c
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 8D 04 C6: lea eax, [esi + eax*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xc6
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 01 10: add dword ptr [eax], edx
        __asm _emit 0x01
        __asm _emit 0x10
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 6C 12 00 00: mov edx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 8D BC C6 24 09 01 00: lea edi, [esi + eax*8 + 0x10924]
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xc6
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 01 17: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        ; Exact mapped bytes 8B 81 44 14 00 00: mov eax, dword ptr [ecx + 0x1444]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5A: je 0x587f3717
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 83 F8 28: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        ; Exact mapped bytes 7E 3C: jle 0x587f36fe
        __asm _emit 0x7e
        __asm _emit 0x3c
        ; Exact mapped bytes 83 F8 50: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x50
        ; Exact mapped bytes 7E 1E: jle 0x587f36e5
        __asm _emit 0x7e
        __asm _emit 0x1e
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 74 64: je 0x587f3730
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes FE 86 D8 09 01 00: inc byte ptr [esi + 0x109d8]
        __asm _emit 0xfe
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 8D 84 C6 18 09 01 00: lea eax, [esi + eax*8 + 0x10918]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x587f372e
        __asm _emit 0xeb
        __asm _emit 0x49
        ; Exact mapped bytes FE 86 D9 09 01 00: inc byte ptr [esi + 0x109d9]
        __asm _emit 0xfe
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 40: lea edx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x40
        ; Exact mapped bytes 8D 84 D6 19 09 01 00: lea eax, [esi + edx*8 + 0x10919]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x587f372e
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes FE 86 DA 09 01 00: inc byte ptr [esi + 0x109da]
        __asm _emit 0xfe
        __asm _emit 0x86
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 8D 84 C6 1A 09 01 00: lea eax, [esi + eax*8 + 0x1091a]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x587f372e
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes FE 86 DB 09 01 00: inc byte ptr [esi + 0x109db]
        __asm _emit 0xfe
        __asm _emit 0x86
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 81 54 03 00 00: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 40: lea edx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x40
        ; Exact mapped bytes 8D 84 D6 1B 09 01 00: lea eax, [esi + edx*8 + 0x1091b]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FE 00: inc byte ptr [eax]
        __asm _emit 0xfe
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 78: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x78
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 95 FE FF FF: jne 0x587f35d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes B9 02 00 00 00: mov ecx, 2
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f375d
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 96 48 1C 02 00: mov edx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 50: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x50
        ; Exact mapped bytes 83 BA 34 01 00 00 00: cmp dword ptr [edx + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x587f3765
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 FC: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xfc
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 89 50 FC: mov dword ptr [eax - 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xfc
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f3780
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 96 48 1C 02 00: mov edx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 50: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x50
        ; Exact mapped bytes 83 BA 34 01 00 00 00: cmp dword ptr [edx + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x587f3786
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 89 10: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f37a1
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 96 48 1C 02 00: mov edx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 50: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x50
        ; Exact mapped bytes 83 BA 34 01 00 00 00: cmp dword ptr [edx + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x587f37a9
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 89 50 04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x587f37c4
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 96 48 1C 02 00: mov edx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 50: mov edx, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x50
        ; Exact mapped bytes 83 BA 34 01 00 00 00: cmp dword ptr [edx + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x587f37cc
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 89 50 08: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 83 C0 10: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x10
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 6A FF FF FF: jne 0x587f3742
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 24: je 0x587f3809
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 1E: je 0x587f3809
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 18: je 0x587f3809
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 12: je 0x587f3809
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 0C: je 0x587f3809
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 06: je 0x587f3809
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 75 54: jne 0x587f385d
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes 83 BE 14 0A 01 00 08: cmp dword ptr [esi + 0x10a14], 8
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 75 4B: jne 0x587f385d
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 83 7C 24 4C 00: cmp dword ptr [esp + 0x4c], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x00
        ; Exact mapped bytes 74 44: je 0x587f385d
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 86 EC 0A 01 00: mov eax, dword ptr [esi + 0x10aec]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 86 EC 0A 01 00: fild dword ptr [esi + 0x10aec]
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587f382f
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 80 D7 98 58: fmul qword ptr [0x5898d780]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 44 24 10: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes D9 6C 24 20: fldcw word ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DF 7C 24 58: fistp qword ptr [esp + 0x58]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 58: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 89 8E EC 0A 01 00: mov dword ptr [esi + 0x10aec], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 96 F4 09 01 00: mov edx, dword ptr [esi + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 28 09 01 00: mov dword ptr [esi + 0x10928], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 6C 0A 01 00: mov eax, dword ptr [esi + 0x10a6c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 2C 09 01 00: mov dword ptr [esi + 0x1092c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F8 09 01 00: mov ecx, dword ptr [esi + 0x109f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 8E 40 09 01 00: mov dword ptr [esi + 0x10940], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 70 0A 01 00: mov edx, dword ptr [esi + 0x10a70]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 44 09 01 00: mov dword ptr [esi + 0x10944], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 FC 09 01 00: mov eax, dword ptr [esi + 0x109fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 86 58 09 01 00: mov dword ptr [esi + 0x10958], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 0A 01 00: mov ecx, dword ptr [esi + 0x10a74]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 5C 09 01 00: mov dword ptr [esi + 0x1095c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 00 0A 01 00: mov edx, dword ptr [esi + 0x10a00]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 70 09 01 00: mov dword ptr [esi + 0x10970], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 0A 01 00: mov eax, dword ptr [esi + 0x10a78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 74 09 01 00: mov dword ptr [esi + 0x10974], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 0A 01 00: mov ecx, dword ptr [esi + 0x10a04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 8E 88 09 01 00: mov dword ptr [esi + 0x10988], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 7C 0A 01 00: mov edx, dword ptr [esi + 0x10a7c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 8C 09 01 00: mov dword ptr [esi + 0x1098c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 08 0A 01 00: mov eax, dword ptr [esi + 0x10a08]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 86 A0 09 01 00: mov dword ptr [esi + 0x109a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 0A 01 00: mov ecx, dword ptr [esi + 0x10a80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E A4 09 01 00: mov dword ptr [esi + 0x109a4], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 0A 01 00: mov edx, dword ptr [esi + 0x10a0c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 B8 09 01 00: mov dword ptr [esi + 0x109b8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 84 0A 01 00: mov eax, dword ptr [esi + 0x10a84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 BC 09 01 00: mov dword ptr [esi + 0x109bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 10 0A 01 00: mov ecx, dword ptr [esi + 0x10a10]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 8E D0 09 01 00: mov dword ptr [esi + 0x109d0], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 88 0A 01 00: mov edx, dword ptr [esi + 0x10a88]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 D4 09 01 00: mov dword ptr [esi + 0x109d4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 64 0D 02 00 00: cmp byte ptr [esi + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 5B: je 0x587f39af
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 8E E0 0D 02 00: mov ecx, dword ptr [esi + 0x20de0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 2B 8E D8 0D 02 00: sub ecx, dword ptr [esi + 0x20dd8]
        __asm _emit 0x2b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 03 8E DC 0D 02 00: add ecx, dword ptr [esi + 0x20ddc]
        __asm _emit 0x03
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 16: je 0x587f3988
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 88 12 00 00 00: cmp dword ptr [eax + 0x1288], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x587f3981
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 88 88 12 00 00: mov dword ptr [eax + 0x1288], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 78: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x78
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 EA: jne 0x587f3972
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 83 BE C8 0D 02 00 00: cmp dword ptr [esi + 0x20dc8], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x587f39a6
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 83 BE CC 0D 02 00 00: cmp dword ptr [esi + 0x20dcc], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x587f39a6
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C6 86 74 04 01 00 20: mov byte ptr [esi + 0x10474], 0x20
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes E9 63 00 00 00: jmp 0x587f3a09
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 86 74 04 01 00 10: mov byte ptr [esi + 0x10474], 0x10
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes EB 5A: jmp 0x587f3a09
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 8E 14 0A 01 00: mov ecx, dword ptr [esi + 0x10a14]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 FF: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 74 3A: je 0x587f39f4
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 86 74 04 01 00: mov eax, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 04 00 00: test eax, 0x400
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x587f39d7
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 25 2F FF FF FF: and eax, 0xffffff2f
        __asm _emit 0x25
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C8 20: or eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x20
        ; Exact mapped bytes 89 86 74 04 01 00: mov dword ptr [esi + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x587f3a09
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes A9 00 03 00 00: test eax, 0x300
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x587f3a09
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 3B 4C 24 18: cmp ecx, dword ptr [esp + 0x18]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 75 E3: jne 0x587f39c7
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 25 1F FF FF FF: and eax, 0xffffff1f
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C8 10: or eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x10
        ; Exact mapped bytes 89 86 74 04 01 00: mov dword ptr [esi + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x587f3a09
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8B 8E 74 04 01 00: mov ecx, dword ptr [esi + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 2F FF FF FF: and ecx, 0xffffff2f
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C9 20: or ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x20
        ; Exact mapped bytes 89 8E 74 04 01 00: mov dword ptr [esi + 0x10474], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 88 94 03 00 00: mov ecx, dword ptr [eax + 0x394]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 0A: shr ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 89 8E 44 07 01 00: mov dword ptr [esi + 0x10744], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x587f3af3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 41: je 0x587f3a79
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 3B: je 0x587f3a79
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 35: je 0x587f3a79
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 2F: je 0x587f3a79
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 29: je 0x587f3a79
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 23: je 0x587f3a79
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 84 96 8C 0A 01 00: mov eax, dword ptr [esi + edx*4 + 0x10a8c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 5C 93 0E 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x93
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x587f3c98
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 70 00 00 00: je 0x587f3af3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 66 00 00 00: je 0x587f3af3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 60: je 0x587f3af3
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 5A: je 0x587f3af3
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 54: je 0x587f3af3
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F B6 8F 54 03 00 00: movzx ecx, byte ptr [edi + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8f
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 A4 8E 4C 0A 01 00: mul dword ptr [esi + ecx*4 + 0x10a4c]
        __asm _emit 0xf7
        __asm _emit 0xa4
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 84 96 8C 0A 01 00: mov eax, dword ptr [esi + edx*4 + 0x10a8c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes C1 E9 05: shr ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 97 0C 10 00 00: mov edx, dword ptr [edi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 62 68: mul dword ptr [edx + 0x68]
        __asm _emit 0xf7
        __asm _emit 0x62
        __asm _emit 0x68
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 0F AF CA: imul ecx, edx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E2 92 0E 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x92
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x587f3c98
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B BB 0C 10 00 00: mov edi, dword ptr [ebx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 4F 04: mov cx, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 8B 84 86 8C 0A 01 00: mov eax, dword ptr [esi + eax*4 + 0x10a8c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 66 83 F9 01: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x587f3c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 2B 01 00 00: je 0x587f3c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x587f3c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x587f3c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 08: cmp cx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x587f3c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x587f3c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 68: mov ecx, dword ptr [edi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x68
        ; Exact mapped bytes 81 F9 98 3A 00 00: cmp ecx, 0x3a98
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x98
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3b67
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 00 C5 99 58: fld dword ptr [0x5899c500]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 80 3E 00 00: cmp ecx, 0x3e80
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3b7a
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 FC C4 99 58: fld dword ptr [0x5899c4fc]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 68 42 00 00: cmp ecx, 0x4268
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3b8d
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 F8 C4 99 58: fld dword ptr [0x5899c4f8]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 50 46 00 00: cmp ecx, 0x4650
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3ba0
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 F4 C4 99 58: fld dword ptr [0x5899c4f4]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 38 4A 00 00: cmp ecx, 0x4a38
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x38
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3bb3
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 F0 C4 99 58: fld dword ptr [0x5899c4f0]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 20 4E 00 00: cmp ecx, 0x4e20
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x20
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3bc6
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 F8 CF 98 58: fld dword ptr [0x5898cff8]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 08 52 00 00: cmp ecx, 0x5208
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3bd9
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 EC C4 99 58: fld dword ptr [0x5899c4ec]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 7D 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 F0 55 00 00: cmp ecx, 0x55f0
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xf0
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 0B: jae 0x587f3bec
        __asm _emit 0x73
        __asm _emit 0x0b
        ; Exact mapped bytes D9 05 7C D7 98 58: fld dword ptr [0x5898d77c]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 6A 00 00 00: jmp 0x587f3c56
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 D8 59 00 00: cmp ecx, 0x59d8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xd8
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 08: jae 0x587f3bfc
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes D9 05 E8 C4 99 58: fld dword ptr [0x5899c4e8]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 5A: jmp 0x587f3c56
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes 81 F9 C0 5D 00 00: cmp ecx, 0x5dc0
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xc0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 08: jae 0x587f3c0c
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes D9 05 50 30 9A 58: fld dword ptr [0x589a3050]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes EB 4A: jmp 0x587f3c56
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 81 F9 A8 61 00 00: cmp ecx, 0x61a8
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xa8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 08: jae 0x587f3c1c
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes D9 05 E4 C4 99 58: fld dword ptr [0x5899c4e4]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 3A: jmp 0x587f3c56
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 81 F9 90 65 00 00: cmp ecx, 0x6590
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 08: jae 0x587f3c2c
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes D9 05 F0 CF 98 58: fld dword ptr [0x5898cff0]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 2A: jmp 0x587f3c56
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes 81 F9 78 69 00 00: cmp ecx, 0x6978
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x78
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 08: jae 0x587f3c3c
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes D9 05 E0 C4 99 58: fld dword ptr [0x5899c4e0]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 1A: jmp 0x587f3c56
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 81 F9 60 6D 00 00: cmp ecx, 0x6d60
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x60
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 08: jae 0x587f3c4c
        __asm _emit 0x73
        __asm _emit 0x08
        ; Exact mapped bytes D9 05 F4 CF 98 58: fld dword ptr [0x5898cff4]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 0A: jmp 0x587f3c56
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes D9 05 DC C4 99 58: fld dword ptr [0x5899c4dc]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x587f3c56
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 02: jge 0x587f3c60
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 B4 8E 4C 0A 01 00: div dword ptr [esi + ecx*4 + 0x10a4c]
        __asm _emit 0xf7
        __asm _emit 0xb4
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 47 68: imul eax, dword ptr [edi + 0x68]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x47
        __asm _emit 0x68
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes DB 44 24 58: fild dword ptr [esp + 0x58]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587f3c83
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 14 90 18 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 3A 91 0E 00: call 0x588dcdd0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 8F 8C 12 00 00: mov ecx, dword ptr [edi + 0x128c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 8D 21 02 00 00: jge 0x587f3ec7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 39 96 14 0A 01 00: cmp dword ptr [esi + 0x10a14], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 17 01 00 00: jne 0x587f3dd4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x587f3da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x587f3da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x587f3da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x587f3da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x587f3da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x587f3da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x587f3da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 96 78 1C 02 00: mov edx, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D1: xor edx, ecx
        __asm _emit 0x33
        __asm _emit 0xd1
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 33 F8: xor edi, eax
        __asm _emit 0x33
        __asm _emit 0xf8
        ; Exact mapped bytes 89 BE 78 1C 02 00: mov dword ptr [esi + 0x21c78], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 0C 10 00 00: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 50 04: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 80 E2 1F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x1f
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 81 01 00 00: jne 0x587f3edd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 74 01 00 00: jne 0x587f3edd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 50 08 01 00: mov edx, dword ptr [esi + 0x10850]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 33 F9: xor edi, ecx
        __asm _emit 0x33
        __asm _emit 0xf9
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 FD 00 00 00 00: lea edx, [edi*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x587f3eb4
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C9 64: imul ecx, ecx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x64
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x587f3ea8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x587f3e7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 4E: je 0x587f3e32
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 48: je 0x587f3e32
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 42: je 0x587f3e32
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 3C: je 0x587f3e32
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 36: je 0x587f3e32
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 30: je 0x587f3e32
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 6B C9 5A: imul ecx, ecx, 0x5a
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x5a
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 6B C0 5A: imul eax, eax, 0x5a
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x5a
        ; Exact mapped bytes E9 76 00 00 00: jmp 0x587f3ea8
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 45: je 0x587f3e7d
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 3F: je 0x587f3e7d
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 39: je 0x587f3e7d
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 33: je 0x587f3e7d
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 2D: je 0x587f3e7d
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 6B C9 37: imul ecx, ecx, 0x37
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x37
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 6B C0 37: imul eax, eax, 0x37
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x37
        ; Exact mapped bytes EB 2B: jmp 0x587f3ea8
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 6B C9 55: imul ecx, ecx, 0x55
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x55
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 6B C0 55: imul eax, eax, 0x55
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x55
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes B8 AD 8B DB 68: mov eax, 0x68db8bad
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x8b
        __asm _emit 0xdb
        __asm _emit 0x68
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 0C: sar edx, 0xc
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 33 D0: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xd0
        ; Exact mapped bytes 89 96 78 1C 02 00: mov dword ptr [esi + 0x21c78], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x587f3edd
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 50 08 01 00 00 00 00 00: mov dword ptr [esi + 0x10850], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 78 1C 02 00: mov dword ptr [esi + 0x21c78], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 64 0D 02 00 00: cmp byte ptr [esi + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 46: je 0x587f3f2c
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 86 AC 18 02 00: mov eax, dword ptr [esi + 0x218ac]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 05: je 0x587f3ef6
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 36: jne 0x587f3f2c
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 86 50 08 01 00: mov eax, dword ptr [esi + 0x10850]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 33 D0: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xd0
        ; Exact mapped bytes 89 96 78 1C 02 00: mov dword ptr [esi + 0x21c78], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 50 08 01 00: mov eax, dword ptr [esi + 0x10850]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D C4 C3 98 58: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 C8: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 8E 78 1C 02 00: mov dword ptr [esi + 0x21c78], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 39 86 14 0A 01 00: cmp dword ptr [esi + 0x10a14], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 EE 02 00 00: jne 0x587f4256
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 64 0D 02 00 00: cmp byte ptr [esi + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E1 02 00 00: jne 0x587f4256
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 86 F4 09 01 00: mov eax, dword ptr [esi + eax*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 7E 0E: jle 0x587f3f91
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes 3B 86 18 0A 01 00: cmp eax, dword ptr [esi + 0x10a18]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 76 06: jbe 0x587f3f91
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes 89 86 18 0A 01 00: mov dword ptr [esi + 0x10a18], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x587f4049
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 40: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 68 CC C4 99 58: push 0x5899c4cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 80 C1 98 58: call dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A3 D4 B4 A0 58: mov dword ptr [0x58a0b4d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8C 86 F4 09 01 00: mov ecx, dword ptr [esi + eax*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes F7 B6 18 0A 01 00: div dword ptr [esi + 0x10a18]
        __asm _emit 0xf7
        __asm _emit 0xb6
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 50 08 01 00: mov edi, dword ptr [esi + 0x10850]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 48 28: lea ecx, [eax + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x28
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D7: imul edx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd7
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 84 24 84 00 00 00: lea eax, [esp + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A8 C4 99 58: push 0x5899c4a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 5C: lea ecx, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 80 00 00 00: lea edx, [esp + 0x80]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 84 00 00 00: lea eax, [esp + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 84 76 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 84 6C 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 58 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x587f41ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 64 0D 02 00 00: cmp byte ptr [esi + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 1B 02 00 00: jne 0x587f42d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 18 0A 01 00: mov edi, dword ptr [esi + 0x10a18]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 86 0D 02 00 00: jbe 0x587f42d2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x587f416b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 48 1C 02 00: mov eax, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 83 B9 34 01 00 00 03: cmp dword ptr [ecx + 0x134], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 EA 01 00 00: jne 0x587f42d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 84 96 F4 09 01 00: mov eax, dword ptr [esi + edx*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 8B 9E 78 1C 02 00: mov ebx, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C1 3C: add ecx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x3c
        ; Exact mapped bytes 0F AF 8E 50 08 01 00: imul ecx, dword ptr [esi + 0x10850]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 89 96 50 08 01 00: mov dword ptr [esi + 0x10850], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 84 96 F4 09 01 00: mov eax, dword ptr [esi + edx*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 D9: xor ebx, ecx
        __asm _emit 0x33
        __asm _emit 0xd9
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 C2 3C: add edx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x3c
        ; Exact mapped bytes 0F AF D3: imul edx, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd3
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 33 CA: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xca
        ; Exact mapped bytes 89 8E 78 1C 02 00: mov dword ptr [esi + 0x21c78], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x587f42d2
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 84 86 F4 09 01 00: mov eax, dword ptr [esi + eax*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 8B 9E 78 1C 02 00: mov ebx, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C1 3C: add ecx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x3c
        ; Exact mapped bytes 0F AF 8E 50 08 01 00: imul ecx, dword ptr [esi + 0x10850]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 89 96 50 08 01 00: mov dword ptr [esi + 0x10850], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 84 96 F4 09 01 00: mov eax, dword ptr [esi + edx*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 D9: xor ebx, ecx
        __asm _emit 0x33
        __asm _emit 0xd9
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 83 C2 3C: add edx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x3c
        ; Exact mapped bytes 0F AF D3: imul edx, ebx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd3
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 33 CA: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xca
        ; Exact mapped bytes 89 8E 78 1C 02 00: mov dword ptr [esi + 0x21c78], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x587f42d2
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 4C 00: cmp dword ptr [esp + 0x4c], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x587f42d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 90 1C 02 00: mov ecx, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 50 08 01 00: mov edx, dword ptr [esi + 0x10850]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 14 52: lea edx, [edx + edx*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x52
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 33 F8: xor edi, eax
        __asm _emit 0x33
        __asm _emit 0xf8
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 86 50 08 01 00: mov dword ptr [esi + 0x10850], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 F9: xor edi, ecx
        __asm _emit 0x33
        __asm _emit 0xf9
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 33 C8: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xc8
        ; Exact mapped bytes 89 8E 78 1C 02 00: mov dword ptr [esi + 0x21c78], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 7C 00 00 00: jmp 0x587f42d2
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 6F 00 00 00: je 0x587f42d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 40: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 68 CC C4 99 58: push 0x5899c4cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 80 C1 98 58: call dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A3 D4 B4 A0 58: mov dword ptr [0x58a0b4d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 50 08 01 00: mov ecx, dword ptr [esi + 0x10850]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 54 24 7C: lea edx, [esp + 0x7c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 68 98 C4 99 58: push 0x5899c498
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 5C: lea eax, [esp + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 80 00 00 00: lea ecx, [esp + 0x80]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 D4 B4 A0 58: mov eax, dword ptr [0x58a0b4d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 84 00 00 00: lea edx, [esp + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8F 98 12 00 00: mov ecx, dword ptr [edi + 0x1298]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 8F 94 12 00 00: add ecx, dword ptr [edi + 0x1294]
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 39: je 0x587f431d
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 87 94 12 00 00: mov eax, dword ptr [edi + 0x1294]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 88 86 58 08 01 00: mov byte ptr [esi + 0x10858], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 98 12 00 00: mov eax, dword ptr [edi + 0x1298]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 88 86 59 08 01 00: mov byte ptr [esi + 0x10859], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 9C 12 00 00: mov eax, dword ptr [edi + 0x129c]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes F7 F1: div ecx
        __asm _emit 0xf7
        __asm _emit 0xf1
        ; Exact mapped bytes 88 86 5A 08 01 00: mov byte ptr [esi + 0x1085a], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 0C 09 01 00 00: cmp dword ptr [esi + 0x1090c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x587f432d
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes C6 86 5A 08 01 00 64: mov byte ptr [esi + 0x1085a], 0x64
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes 8B 86 98 1C 02 00: mov eax, dword ptr [esi + 0x21c98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 86 80 1C 02 00: xor eax, dword ptr [esi + 0x21c80]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 9C 1C 02 00: mov ecx, dword ptr [esi + 0x21c9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 8E 84 1C 02 00: xor ecx, dword ptr [esi + 0x21c84]
        __asm _emit 0x33
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A4 1C 02 00: mov edx, dword ptr [esi + 0x21ca4]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 C1: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 89 86 8C 1C 02 00: mov dword ptr [esi + 0x21c8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 74 34: je 0x587f438f
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes BF 02 00 00 00: mov edi, 2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 5F 01: lea ebx, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x01
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 25 35 FF FF: call 0x587e7890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 6B D2 64: imul edx, edx, 0x64
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x64
        ; Exact mapped bytes E8 19 35 FF FF: call 0x587e7890
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 69 34 FF FF: call 0x587e77f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 D6: jne 0x587f4363
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 15: jmp 0x587f43a4
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 57 02: lea edx, [edi + 2]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x02
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 52 34 FF FF: call 0x587e77f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 FF 03: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x03
        ; Exact mapped bytes 7C ED: jl 0x587f4391
        __asm _emit 0x7c
        __asm _emit 0xed
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 8D 28 0E 00: call 0x588d6c40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 1D: je 0x587f43d6
        __asm _emit 0x74
        __asm _emit 0x1d
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
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 76 28 0E 00: call 0x588d6c40
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 88 86 5C 08 01 00: mov byte ptr [esi + 0x1085c], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 58 28 0E 00: call 0x588d6c40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 1E: je 0x587f440c
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 40 28 0E 00: call 0x588d6c40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 88 86 5D 08 01 00: mov byte ptr [esi + 0x1085d], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x5d
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 A2 05 01 00: movzx eax, word ptr [esi + 0x105a2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 79 01 00 00: jne 0x587f4596
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 1F 02 00: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 B9 AC 00 00 00 00: cmp dword ptr [ecx + 0xac], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x587f4531
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 7C 04 00 00: lea eax, [ebx + 0x47c]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 96 8C 07 01 00: lea edx, [esi + 0x1078c]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 28 20 00 00 00: mov dword ptr [esp + 0x28], 0x20
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 AA 00 00 00: mov ecx, 0xaa
        __asm _emit 0xb9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 08: xor cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x08
        ; Exact mapped bytes BF FF 03 00 00: mov edi, 0x3ff
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CF: and cx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xcf
        ; Exact mapped bytes 66 89 4A FE: mov word ptr [edx - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes C1 E9 0A: shr ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 CF: and ecx, edi
        __asm _emit 0x23
        __asm _emit 0xcf
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes C1 E9 14: shr ecx, 0x14
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x14
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 CF: and ecx, edi
        __asm _emit 0x23
        __asm _emit 0xcf
        ; Exact mapped bytes 66 89 4A 02: mov word ptr [edx + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x02
        ; Exact mapped bytes 0F B7 0A: movzx ecx, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B7 F9: movzx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xf9
        ; Exact mapped bytes 66 83 F9 0A: cmp cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0a
        ; Exact mapped bytes 73 0F: jae 0x587f4494
        __asm _emit 0x73
        __asm _emit 0x0f
        ; Exact mapped bytes B9 0A 00 00 00: mov ecx, 0xa
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 89 4C 24 24: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes EB 0B: jmp 0x587f449f
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes C7 44 24 24 00 00 00 00: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EF 0A: sub edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 FF 03 00 00: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E3 FF 03 F0 FF: and ebx, 0xfff003ff
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes C1 E1 0A: shl ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x0a
        ; Exact mapped bytes 0B D9: or ebx, ecx
        __asm _emit 0x0b
        __asm _emit 0xd9
        ; Exact mapped bytes 89 18: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        ; Exact mapped bytes 8B 98 00 04 00 00: mov ebx, dword ptr [eax + 0x400]
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E3 FF 03 F0 FF: and ebx, 0xfff003ff
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 0B D9: or ebx, ecx
        __asm _emit 0x0b
        __asm _emit 0xd9
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 98 00 04 00 00: mov dword ptr [eax + 0x400], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 3A: mov word ptr [edx], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x3a
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 40: je 0x587f451b
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 0F B7 7A FE: movzx edi, word ptr [edx - 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x7a
        __asm _emit 0xfe
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 7D 04: jge 0x587f44e7
        __asm _emit 0x7d
        __asm _emit 0x04
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x587f44e9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 2B F9: sub edi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E3 00 FC FF FF: and ebx, 0xfffffc00
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 E1 FF 03 00 00: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0B D9: or ebx, ecx
        __asm _emit 0x0b
        __asm _emit 0xd9
        ; Exact mapped bytes 89 18: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        ; Exact mapped bytes 8B 98 00 04 00 00: mov ebx, dword ptr [eax + 0x400]
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E3 00 FC FF FF: and ebx, 0xfffffc00
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0B D9: or ebx, ecx
        __asm _emit 0x0b
        __asm _emit 0xd9
        ; Exact mapped bytes 89 98 00 04 00 00: mov dword ptr [eax + 0x400], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 7A FE: mov word ptr [edx - 2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7a
        __asm _emit 0xfe
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 83 C2 06: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x06
        ; Exact mapped bytes 83 6C 24 28 01: sub dword ptr [esp + 0x28], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 18 FF FF FF: jne 0x587f4444
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F 03 00 00: jmp 0x587f4880
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A4 45 A2 58: mov edx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 BA D8 08 00 00 00: cmp dword ptr [edx + 0x8d8], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 56: je 0x587f4596
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8D 8B 7C 04 00 00: lea ecx, [ebx + 0x47c]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 8C 07 01 00: lea eax, [esi + 0x1078c]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA 20 00 00 00: mov edx, 0x20
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF AA 00 00 00: mov edi, 0xaa
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 39: xor di, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x39
        ; Exact mapped bytes BB FF 03 00 00: mov ebx, 0x3ff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 FB: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 78 FE: mov word ptr [eax - 2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 39: mov edi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x39
        ; Exact mapped bytes C1 EF 0A: shr edi, 0xa
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 FB: and edi, ebx
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 38: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 8B 39: mov edi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x39
        ; Exact mapped bytes C1 EF 14: shr edi, 0x14
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x14
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 FB: and edi, ebx
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 78 02: mov word ptr [eax + 2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x02
        ; Exact mapped bytes 83 C0 06: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x06
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 C0: jne 0x587f4551
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x587f4880
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 58 08 01 00 00: cmp byte ptr [esi + 0x10858], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B1 01: mov cl, 1
        __asm _emit 0xb1
        __asm _emit 0x01
        ; Exact mapped bytes 75 1D: jne 0x587f45be
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 80 BE 59 08 01 00 00: cmp byte ptr [esi + 0x10859], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x587f45be
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 80 BE 5A 08 01 00 00: cmp byte ptr [esi + 0x1085a], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x587f45be
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 83 BE 4C 08 01 00 00: cmp dword ptr [esi + 0x1084c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 02: jne 0x587f45be
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 32 C9: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xc9
        ; Exact mapped bytes F6 86 78 03 00 00 40: test byte ptr [esi + 0x378], 0x40
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 84 5A 02 00 00: je 0x587f4825
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 50 02 00 00: je 0x587f4825
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 46 02 00 00: je 0x587f4825
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 78 04 01 00 00: cmp dword ptr [esi + 0x10478], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E3 01 00 00: jne 0x587f47cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE F0 05 01 00 03: cmp word ptr [esi + 0x105f0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 84 D5 01 00 00: je 0x587f47cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 80 06 0A 00 00: movzx eax, word ptr [eax + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x587f47cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 13: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x13
        ; Exact mapped bytes 0F 84 B5 01 00 00: je 0x587f47cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 AD 01 00 00: je 0x587f47cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C3 7C 04 00 00: add ebx, 0x47c
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 50 00 00 00 00: mov dword ptr [esp + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 8A 07 01 00: lea edi, [esi + 0x1078a]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes B9 AA 00 00 00: mov ecx, 0xaa
        __asm _emit 0xb9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 08: xor cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x08
        ; Exact mapped bytes BA FF 03 00 00: mov edx, 0x3ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 0F: mov word ptr [edi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes C1 E9 0A: shr ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 CA: and ecx, edx
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 4F 02: mov word ptr [edi + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x02
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 07: movzx eax, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x07
        ; Exact mapped bytes C1 EA 14: shr edx, 0x14
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x14
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E2 FF 03 00 00: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 57 04: mov word ptr [edi + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x587f47b0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 4C 24 1C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 4C 24 28: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 83 B6 00 00 00: jae 0x587f4752
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 07: movzx eax, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x07
        ; Exact mapped bytes 2B 44 24 28: sub eax, dword ptr [esp + 0x28]
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes C7 44 24 20 32 00 00 00: mov dword ptr [esp + 0x20], 0x32
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 32: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x32
        ; Exact mapped bytes 7F 04: jg 0x587f46b8
        __asm _emit 0x7f
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E8 79 85 18 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 E8 03 00 00: mov ecx, 0x3e8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes A1 9C 90 9C 58: mov eax, dword ptr [0x589c909c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes B9 2C 01 00 00: mov ecx, 0x12c
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 40: je 0x587f4716
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes DB 44 24 58: fild dword ptr [esp + 0x58]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 06: jge 0x587f46e8
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 35 E0 CA 98 58: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 28 CF 98 58: fmul qword ptr [0x5898cf28]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 44 24 10: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes D9 6C 24 58: fldcw word ptr [esp + 0x58]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes DF 7C 24 58: fistp qword ptr [esp + 0x58]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4C 24 58: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F AF 4C 24 20: imul ecx, dword ptr [esp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 3B DA: cmp ebx, edx
        __asm _emit 0x3b
        __asm _emit 0xda
        ; Exact mapped bytes 73 04: jae 0x587f472d
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes FF 44 24 1C: inc dword ptr [esp + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F B7 17: movzx edx, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x17
        ; Exact mapped bytes 83 C0 32: add eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x32
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x587f46a0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 03 00 00 00: mov eax, 3
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 44 24 1C: cmp dword ptr [esp + 0x1c], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 7E 04: jle 0x587f4752
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 50: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 8C 0A 74 0D 00 00: movzx ecx, byte ptr [edx + ecx + 0xd74]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 1C 08: lea ebx, [eax + ecx]
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x08
        ; Exact mapped bytes A1 94 3E 9C 58: mov eax, dword ptr [0x589c3e94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 7F 06: jg 0x587f477c
        __asm _emit 0x7f
        __asm _emit 0x06
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes EB 04: jmp 0x587f4780
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 4C 24 50: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8A 4C 03 00 00: lea ecx, [edx + 0x34c]
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF 1E 0F 00: call 0x588e6650
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1e
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 7E 1B: jle 0x587f47b0
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 0F B7 07: movzx eax, word ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x07
        ; Exact mapped bytes 0F B7 D0: movzx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd0
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 08: jl 0x587f47a7
        __asm _emit 0x7c
        __asm _emit 0x08
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 66 01 5F 02: add word ptr [edi + 2], bx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x5f
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x587f47ad
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 01 47 02: add word ptr [edi + 2], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x47
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes 8B 44 24 50: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 83 44 24 24 20: add dword ptr [esp + 0x24], 0x20
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C7 06: add edi, 6
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x06
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 50: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes 0F 8C 76 FE FF FF: jl 0x587f4640
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x587f4880
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 7C 04 00 00: lea ecx, [ebx + 0x47c]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 8C 07 01 00: lea eax, [esi + 0x1078c]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA 20 00 00 00: mov edx, 0x20
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF AA 00 00 00: mov edi, 0xaa
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 39: xor di, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x39
        ; Exact mapped bytes BB FF 03 00 00: mov ebx, 0x3ff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 FB: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 78 FE: mov word ptr [eax - 2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 39: mov edi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x39
        ; Exact mapped bytes C1 EF 0A: shr edi, 0xa
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 FB: and edi, ebx
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 38: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 8B 39: mov edi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x39
        ; Exact mapped bytes C1 EF 14: shr edi, 0x14
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x14
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 FB: and edi, ebx
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 78 02: mov word ptr [eax + 2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x02
        ; Exact mapped bytes 83 C0 06: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x06
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 C0: jne 0x587f47e0
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes E9 5B 00 00 00: jmp 0x587f4880
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8B 7C 04 00 00: lea ecx, [ebx + 0x47c]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 8C 07 01 00: lea eax, [esi + 0x1078c]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA 20 00 00 00: mov edx, 0x20
        __asm _emit 0xba
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x587f4840
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F4840 .. +0x987 bytes.
extern "C" __declspec(naked) void FUN_587f2dd0_segment_02() {
    __asm {
        ; Exact mapped bytes BF AA 00 00 00: mov edi, 0xaa
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 39: xor di, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x39
        ; Exact mapped bytes BB FF 03 00 00: mov ebx, 0x3ff
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 FB: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 78 FE: mov word ptr [eax - 2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 39: mov edi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x39
        ; Exact mapped bytes C1 EF 0A: shr edi, 0xa
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 FB: and edi, ebx
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 38: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        ; Exact mapped bytes 8B 39: mov edi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x39
        ; Exact mapped bytes C1 EF 14: shr edi, 0x14
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x14
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 FB: and edi, ebx
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 89 78 02: mov word ptr [eax + 2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x02
        ; Exact mapped bytes 83 C0 06: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x06
        ; Exact mapped bytes 83 C1 20: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 C0: jne 0x587f4840
        __asm _emit 0x75
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8E F4 04 01 00: mov ecx, dword ptr [esi + 0x104f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C6 86 89 07 01 00 20: mov byte ptr [esi + 0x10789], 0x20
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 81 F9 E2 04 00 00: cmp ecx, 0x4e2
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 04: jae 0x587f4899
        __asm _emit 0x73
        __asm _emit 0x04
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes EB 0D: jmp 0x587f48a6
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 81 F9 C4 09 00 00: cmp ecx, 0x9c4
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x587f48a6
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes B9 C4 09 00 00: mov ecx, 0x9c4
        __asm _emit 0xb9
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E9: shr ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes C1 E1 05: shl ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x05
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C1 EA 0B: shr edx, 0xb
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0b
        ; Exact mapped bytes 88 96 89 07 01 00: mov byte ptr [esi + 0x10789], dl
        __asm _emit 0x88
        __asm _emit 0x96
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C E4 FF FF FF: mov dword ptr [esp + 0x1c], 0xffffffe4
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BB 08 00 00 00: mov ebx, 8
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 49 07 01 00: lea edi, [esi + 0x10749]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 20 20 00 00 00: mov dword ptr [esp + 0x20], 0x20
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x20
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
        ; Exact mapped bytes C6 07 AA: mov byte ptr [edi], 0xaa
        __asm _emit 0xc6
        __asm _emit 0x07
        __asm _emit 0xaa
        ; Exact mapped bytes C6 47 01 AA: mov byte ptr [edi + 1], 0xaa
        __asm _emit 0xc6
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0xaa
        ; Exact mapped bytes 8B 84 0B 84 0E 00 00: mov eax, dword ptr [ebx + ecx + 0xe84]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x587f48f7
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 0F B6 00: movzx eax, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f48f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 83 E8 05: sub eax, 5
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x587f49a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x587f4992
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 07: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x587f49d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 82 0C 10 00 00: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 48 04: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 80 E1 1F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 80 F9 09: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x09
        ; Exact mapped bytes 75 33: jne 0x587f4964
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 8A A0 00 00 00: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 19 A2 06 00: call 0x5885eb60
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 88 07: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 A0 00 00 00: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 41 A2 06 00: call 0x5885eba0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 66 00 00 00: jmp 0x587f49ca
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 88 9C 00 00 00: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 57 3A 06 00: call 0x588583d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 88 07: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 9C 00 00 00: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 80 3A 06 00: call 0x58858410
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 38: jmp 0x587f49ca
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 8B 86 9C 0C 02 00: mov eax, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 03: mov ecx, dword ptr [ebx + eax]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x03
        ; Exact mapped bytes E8 D0 FA FB FF: call 0x587b4470
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 88 07: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        ; Exact mapped bytes EB 29: jmp 0x587f49cd
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 8B 8E 9C 0C 02 00: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 0B: mov ecx, dword ptr [ebx + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 2C: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 88 07: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        ; Exact mapped bytes 8B 8E 9C 0C 02 00: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 0B: mov ecx, dword ptr [ebx + ecx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 2C: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x2c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 88 47 01: mov byte ptr [edi + 1], al
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 44 24 1C: add dword ptr [esp + 0x1c], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 C7 02: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x02
        ; Exact mapped bytes 29 44 24 20: sub dword ptr [esp + 0x20], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 0F 85 F6 FE FF FF: jne 0x587f48e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8A 9E 64 0D 02 00: mov bl, byte ptr [esi + 0x20d64]
        __asm _emit 0x8a
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 18: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes B8 AA AA AA AA: mov eax, 0xaaaaaaaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes C6 86 48 07 01 00 00: mov byte ptr [esi + 0x10748], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 6C 08 01 00: mov dword ptr [esi + 0x1086c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 60 08 01 00: mov dword ptr [esi + 0x10860], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 75 2F: jne 0x587f4a3f
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 91 70 12 00 00: mov edx, dword ptr [ecx + 0x1270]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 39 BE 14 0A 01 00: cmp dword ptr [esi + 0x10a14], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x587f4a3b
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3E: jne 0x587f4a75
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes EB 3A: jmp 0x587f4a75
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes D1 EA: shr edx, 1
        __asm _emit 0xd1
        __asm _emit 0xea
        ; Exact mapped bytes EB 36: jmp 0x587f4a75
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 84 BE AC 0A 01 00: mov eax, dword ptr [esi + edi*4 + 0x10aac]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 78 12 00 00: mov edx, dword ptr [ecx + 0x1278]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 01 86 70 08 01 00: add dword ptr [esi + 0x10870], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 70 12 00 00: mov edx, dword ptr [ecx + 0x1270]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 0F B7 86 A2 05 01 00: movzx eax, word ptr [esi + 0x105a2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 68 08 01 00: mov dword ptr [esi + 0x10868], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 16: jne 0x587f4aa4
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 81 78 12 00 00: mov eax, dword ptr [ecx + 0x1278]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 01 86 70 08 01 00: add dword ptr [esi + 0x10870], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x587f4b5f
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 71 00 00 00: je 0x587f4b1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 40: je 0x587f4af4
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 3A: je 0x587f4af4
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 34: je 0x587f4af4
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 0F B7 96 F0 05 01 00: movzx edx, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FA 0E: cmp dx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0e
        ; Exact mapped bytes 74 27: je 0x587f4af4
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 83 FA 02: cmp dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 74 21: je 0x587f4af4
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 94 BE AC 0A 01 00: mov edx, dword ptr [esi + edi*4 + 0x10aac]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B B9 78 12 00 00: mov edi, dword ptr [ecx + 0x1278]
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 81 F7 AA AA AA AA: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 01 96 70 08 01 00: add dword ptr [esi + 0x10870], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 25: je 0x587f4b1f
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 1F: je 0x587f4b1f
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 19: je 0x587f4b1f
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 13: je 0x587f4b1f
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 06: je 0x587f4b1f
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 75 40: jne 0x587f4b5f
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 88 78 12 00 00: mov ecx, dword ptr [eax + 0x1278]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 4C 24 58: mov dword ptr [esp + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes DB 44 24 58: fild dword ptr [esp + 0x58]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 90 C4 99 58: fmul qword ptr [0x5899c490]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 81 18 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8C 96 AC 0A 01 00: mov ecx, dword ptr [esi + edx*4 + 0x10aac]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 01 8E 70 08 01 00: add dword ptr [esi + 0x10870], ecx
        __asm _emit 0x01
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 91 74 12 00 00: mov edx, dword ptr [ecx + 0x1274]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 64 08 01 00: mov dword ptr [esi + 0x10864], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 6C 12 00 00: mov edx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 98 03 00 00: mov eax, dword ptr [ecx + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 94 1C 02 00: mov edi, dword ptr [esi + 0x21c94]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 4C 08 01 00: mov dword ptr [esi + 0x1084c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A8 1C 02 00: mov edx, dword ptr [esi + 0x21ca8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 D7: xor edx, edi
        __asm _emit 0x33
        __asm _emit 0xd7
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 33 D7: xor edx, edi
        __asm _emit 0x33
        __asm _emit 0xd7
        ; Exact mapped bytes 89 96 A8 1C 02 00: mov dword ptr [esi + 0x21ca8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 77 00 00 00: je 0x587f4c4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 4C 08 01 00: mov eax, dword ptr [esi + 0x1084c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 78 12 00 00: mov edx, dword ptr [ecx + 0x1278]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 83 BE C8 0D 02 00 00: cmp dword ptr [esi + 0x20dc8], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x587f4c38
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 83 BE CC 0D 02 00 00: cmp dword ptr [esi + 0x20dcc], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 34: je 0x587f4c38
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes DB 44 24 58: fild dword ptr [esp + 0x58]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 44 24 10: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0D 00 0C 00 00: or eax, 0xc00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes D8 8E 1C 0A 01 00: fmul dword ptr [esi + 0x10a1c]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes D9 6C 24 58: fldcw word ptr [esp + 0x58]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes DF 7C 24 58: fistp qword ptr [esp + 0x58]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 58: mov eax, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f4c3a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 86 6C 08 01 00: mov dword ptr [esi + 0x1086c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 91 78 12 00 00: mov dword ptr [ecx + 0x1278], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 BE 64 0D 02 00 00: cmp byte ptr [esi + 0x20d64], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x587f4c5f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E9 6A 00 00 00: jmp 0x587f4cc9
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 86 78 03 00 00 10: test byte ptr [esi + 0x378], 0x10
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 6A 00 00 00: je 0x587f4cd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 14 0A 01 00: mov eax, dword ptr [esi + 0x10a14]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 5B 00 00 00: je 0x587f4cd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 86 74 04 01 00 10: test byte ptr [esi + 0x10474], 0x10
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 74 52: je 0x587f4cd6
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 94 86 F4 09 01 00: mov edx, dword ptr [esi + eax*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 7D 30: jge 0x587f4cc3
        __asm _emit 0x7d
        __asm _emit 0x30
        ; Exact mapped bytes 89 94 86 F4 09 01 00: mov dword ptr [esi + eax*4 + 0x109f4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 14 0A 01 00: mov eax, dword ptr [esi + 0x10a14]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 84 86 F4 09 01 00 00 00 00 00: mov dword ptr [esi + eax*4 + 0x109f4], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 14 0A 01 00: mov edx, dword ptr [esi + 0x10a14]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 B4 96 F4 09 01 00 AA AA AA AA: xor dword ptr [esi + edx*4 + 0x109f4], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 84 96 F4 09 01 00: lea eax, [esi + edx*4 + 0x109f4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 14 0A 01 00: mov eax, dword ptr [esi + 0x10a14]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 94 86 F4 09 01 00: mov edx, dword ptr [esi + eax*4 + 0x109f4]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 60 08 01 00: mov dword ptr [esi + 0x10860], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 14 0A 01 00: mov eax, dword ptr [esi + 0x10a14]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 86 74 08 01 00: xor eax, dword ptr [esi + 0x10874]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C6 86 F0 08 01 00 00: mov byte ptr [esi + 0x108f0], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 31 86 74 08 01 00: xor dword ptr [esi + 0x10874], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 74 08 01 00: mov edx, dword ptr [esi + 0x10874]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 04: shr edx, 4
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 83 E2 0F: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 39 96 14 0A 01 00: cmp dword ptr [esi + 0x10a14], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x587f4d0d
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 86 F0 08 01 00 01: mov byte ptr [esi + 0x108f0], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 83 BE B0 18 02 00 00: cmp dword ptr [esi + 0x218b0], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 50: jle 0x587f4d66
        __asm _emit 0x7e
        __asm _emit 0x50
        ; Exact mapped bytes 83 BE 34 1C 02 00 00: cmp dword ptr [esi + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 47: jne 0x587f4d66
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 86 48 1C 02 00: mov eax, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 50: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 8B 42 50: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 19: je 0x587f4d49
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 14: je 0x587f4d49
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 F8 66: cmp eax, 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x66
        ; Exact mapped bytes 74 0F: je 0x587f4d49
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 83 F8 67: cmp eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x67
        ; Exact mapped bytes 74 0A: je 0x587f4d49
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 83 F8 68: cmp eax, 0x68
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x68
        ; Exact mapped bytes 74 05: je 0x587f4d49
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 1D: jne 0x587f4d66
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 80 BE F0 08 01 00 00: cmp byte ptr [esi + 0x108f0], 0
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x587f4d66
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 DC 0A 00 00: mov ecx, dword ptr [eax + 0xadc]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9E 5A 02 00: call 0x5881a800
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 96 74 01 00 00: mov edx, dword ptr [esi + 0x174]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 78 08 01 00: mov dword ptr [esi + 0x10878], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 24 01 00 00: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 28 01 00 00: mov edx, dword ptr [esi + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 94 08 01 00: mov dword ptr [esi + 0x10894], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 2C 01 00 00: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 98 08 01 00: mov dword ptr [esi + 0x10898], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 30 01 00 00: mov edx, dword ptr [esi + 0x130]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 9C 08 01 00: mov dword ptr [esi + 0x1089c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 34 01 00 00: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 A0 08 01 00: mov dword ptr [esi + 0x108a0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 38 01 00 00: mov edx, dword ptr [esi + 0x138]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 A4 08 01 00: mov dword ptr [esi + 0x108a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 3C 01 00 00: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 A8 08 01 00: mov dword ptr [esi + 0x108a8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 40 01 00 00: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 AC 08 01 00: mov dword ptr [esi + 0x108ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 44 01 00 00: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 B0 08 01 00: mov dword ptr [esi + 0x108b0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 48 01 00 00: mov edx, dword ptr [esi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 B4 08 01 00: mov dword ptr [esi + 0x108b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 4C 01 00 00: mov eax, dword ptr [esi + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 B8 08 01 00: mov dword ptr [esi + 0x108b8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 50 01 00 00: mov edx, dword ptr [esi + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 BC 08 01 00: mov dword ptr [esi + 0x108bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 54 01 00 00: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 C0 08 01 00: mov dword ptr [esi + 0x108c0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 58 01 00 00: mov edx, dword ptr [esi + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 C4 08 01 00: mov dword ptr [esi + 0x108c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 5C 01 00 00: mov eax, dword ptr [esi + 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 C8 08 01 00: mov dword ptr [esi + 0x108c8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 60 01 00 00: mov edx, dword ptr [esi + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 CC 08 01 00: mov dword ptr [esi + 0x108cc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 01 00 00: mov eax, dword ptr [esi + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 D0 08 01 00: mov dword ptr [esi + 0x108d0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 68 01 00 00: mov edx, dword ptr [esi + 0x168]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 D4 08 01 00: mov dword ptr [esi + 0x108d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 6C 01 00 00: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 D8 08 01 00: mov dword ptr [esi + 0x108d8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 70 01 00 00: mov edx, dword ptr [esi + 0x170]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 DC 08 01 00: mov dword ptr [esi + 0x108dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 E0 08 01 00: mov dword ptr [esi + 0x108e0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 F0 05 01 00: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 24: je 0x587f4e93
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 1E: je 0x587f4e93
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 18: je 0x587f4e93
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 12: je 0x587f4e93
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 0C: je 0x587f4e93
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 06: je 0x587f4e93
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 75 43: jne 0x587f4ed6
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 86 74 08 01 00: mov eax, dword ptr [esi + 0x10874]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 04: shr eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 39 86 14 0A 01 00: cmp dword ptr [esi + 0x10a14], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 2F: jne 0x587f4ed6
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 83 7C 24 4C 00: cmp dword ptr [esp + 0x4c], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x00
        ; Exact mapped bytes 74 28: je 0x587f4ed6
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 86 68 08 01 00: mov eax, dword ptr [esi + 0x10868]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 14 40: lea edx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x40
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes B8 CD CC CC CC: mov eax, 0xcccccccd
        __asm _emit 0xb8
        __asm _emit 0xcd
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 03: shr edx, 3
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 68 08 01 00: mov dword ptr [esi + 0x10868], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 0B 01 00: mov eax, dword ptr [esi + 0x10b80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3D D0 07 00 00: cmp eax, 0x7d0
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 09: jge 0x587f4eec
        __asm _emit 0x7d
        __asm _emit 0x09
        ; Exact mapped bytes C6 86 E8 08 01 00 00: mov byte ptr [esi + 0x108e8], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x587f4f1c
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 3D A0 0F 00 00: cmp eax, 0xfa0
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 09: jge 0x587f4efc
        __asm _emit 0x7d
        __asm _emit 0x09
        ; Exact mapped bytes C6 86 E8 08 01 00 01: mov byte ptr [esi + 0x108e8], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes EB 20: jmp 0x587f4f1c
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 3D 70 17 00 00: cmp eax, 0x1770
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 09: jge 0x587f4f0c
        __asm _emit 0x7d
        __asm _emit 0x09
        ; Exact mapped bytes C6 86 E8 08 01 00 02: mov byte ptr [esi + 0x108e8], 2
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes EB 10: jmp 0x587f4f1c
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 3D 40 1F 00 00: cmp eax, 0x1f40
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 9D C0: setge al
        __asm _emit 0x0f
        __asm _emit 0x9d
        __asm _emit 0xc0
        ; Exact mapped bytes 04 03: add al, 3
        __asm _emit 0x04
        __asm _emit 0x03
        ; Exact mapped bytes 88 86 E8 08 01 00: mov byte ptr [esi + 0x108e8], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 0C 10 00 00: mov eax, dword ptr [ecx + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 0F B7 40 04: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 83 F8 09: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 77 46: ja 0x587f4f78
        __asm _emit 0x77
        __asm _emit 0x46
        ; Exact mapped bytes FF 24 85 3C 54 7F 58: jmp dword ptr [eax*4 + 0x587f543c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x54
        __asm _emit 0x7f
        __asm _emit 0x58
        ; Exact mapped bytes BF AA 04 00 00: mov edi, 0x4aa
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes BF CA 04 00 00: mov edi, 0x4ca
        __asm _emit 0xbf
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes BF E2 0B 00 00: mov edi, 0xbe2
        __asm _emit 0xbf
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes BF 08 13 00 00: mov edi, 0x1308
        __asm _emit 0xbf
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes BF F6 12 00 00: mov edi, 0x12f6
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes BF 7C 1C 00 00: mov edi, 0x1c7c
        __asm _emit 0xbf
        __asm _emit 0x7c
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes BF 4E 1D 00 00: mov edi, 0x1d4e
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes BF 60 EA 00 00: mov edi, 0xea60
        __asm _emit 0xbf
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes BF 58 1B 00 00: mov edi, 0x1b58
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x587f4f7c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 7C 24 58: mov edi, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 8B 9E 68 08 01 00: mov ebx, dword ptr [esi + 0x10868]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 70 08 01 00: mov eax, dword ptr [esi + 0x10870]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 20: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 81 F3 AA AA AA AA: xor ebx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8B 14 91: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x91
        ; Exact mapped bytes 0F B7 48 0C: movzx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F B7 42 0E: movzx eax, word ptr [edx + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes C1 E9 0A: shr ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 81 B6 4C 08 01 00 AA AA AA AA: xor dword ptr [esi + 0x1084c], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 0F AF CF: imul ecx, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xcf
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 64 24 24: mul dword ptr [esp + 0x24]
        __asm _emit 0xf7
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 69 D2 E8 03 00 00: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 2B 4C 24 24: sub ecx, dword ptr [esp + 0x24]
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 89 9E 68 08 01 00: mov dword ptr [esi + 0x10868], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 BA F0 05 01 00 0F: cmp word ptr [edx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 75 1A: jne 0x587f5013
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 83 B8 B8 63 00 00 00: cmp dword ptr [eax + 0x63b8], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 17: jne 0x587f5021
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 BC 63 00 00 00: cmp dword ptr [eax + 0x63bc], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x587f5021
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 39 8E 50 08 01 00: cmp dword ptr [esi + 0x10850], ecx
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 7E 06: jle 0x587f5021
        __asm _emit 0x7e
        __asm _emit 0x06
        ; Exact mapped bytes 89 8E 50 08 01 00: mov dword ptr [esi + 0x10850], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 FF: lea edx, [edi + edi*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xff
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 39 86 70 08 01 00: cmp dword ptr [esi + 0x10870], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 7E 06: jle 0x587f5043
        __asm _emit 0x7e
        __asm _emit 0x06
        ; Exact mapped bytes 89 86 70 08 01 00: mov dword ptr [esi + 0x10870], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 76 06: jbe 0x587f504d
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes 89 86 68 08 01 00: mov dword ptr [esi + 0x10868], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 3C 7F: lea edi, [edi + edi*2]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x7f
        ; Exact mapped bytes 03 FF: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xff
        ; Exact mapped bytes 03 FF: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xff
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 39 86 4C 08 01 00: cmp dword ptr [esi + 0x1084c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 76 06: jbe 0x587f5073
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes 89 86 4C 08 01 00: mov dword ptr [esi + 0x1084c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 90 1C 02 00: mov edi, dword ptr [esi + 0x21c90]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 78 1C 02 00: mov edx, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 D7: xor edx, edi
        __asm _emit 0x33
        __asm _emit 0xd7
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 7E 08: jle 0x587f508d
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 33 CF: xor ecx, edi
        __asm _emit 0x33
        __asm _emit 0xcf
        ; Exact mapped bytes 89 8E 78 1C 02 00: mov dword ptr [esi + 0x21c78], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 94 1C 02 00: mov ecx, dword ptr [esi + 0x21c94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A8 1C 02 00: mov edx, dword ptr [esi + 0x21ca8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 D1: xor edx, ecx
        __asm _emit 0x33
        __asm _emit 0xd1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 76 08: jbe 0x587f50a7
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes 33 C8: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xc8
        ; Exact mapped bytes 89 8E A8 1C 02 00: mov dword ptr [esi + 0x21ca8], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BB AA AA AA AA: mov ebx, 0xaaaaaaaa
        __asm _emit 0xbb
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 31 9E 68 08 01 00: xor dword ptr [esi + 0x10868], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 4C 08 01 00: xor dword ptr [esi + 0x1084c], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 50 08 01 00 00: cmp dword ptr [esi + 0x10850], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x587f50cb
        __asm _emit 0x7d
        __asm _emit 0x0a
        ; Exact mapped bytes C7 86 50 08 01 00 00 00 00 00: mov dword ptr [esi + 0x10850], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 78 1C 02 00: mov eax, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C7: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xc7
        ; Exact mapped bytes 7D 06: jge 0x587f50db
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes 89 BE 78 1C 02 00: mov dword ptr [esi + 0x21c78], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 44 F8 FF: call 0x58779500
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 31 9E 68 08 01 00: xor dword ptr [esi + 0x10868], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 4C 08 01 00: xor dword ptr [esi + 0x1084c], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 60 08 01 00: xor dword ptr [esi + 0x10860], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 6C 08 01 00: xor dword ptr [esi + 0x1086c], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 64 08 01 00: xor dword ptr [esi + 0x10864], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 EC 08 01 00: mov dword ptr [esi + 0x108ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 4A 07 01 00: lea eax, [esi + 0x1074a]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 20 00 00 00: mov ecx, 0x20
        __asm _emit 0xb9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 70 FF AA: xor byte ptr [eax - 1], 0xaa
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xaa
        ; Exact mapped bytes 80 30 AA: xor byte ptr [eax], 0xaa
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0xaa
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x587f5115
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 A8 1C 02 00: mov eax, dword ptr [esi + 0x21ca8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A4 1C 02 00: mov ecx, dword ptr [esi + 0x21ca4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C8: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xc8
        ; Exact mapped bytes 89 8E 8C 1C 02 00: mov dword ptr [esi + 0x21c8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 78 1C 02 00: mov edx, dword ptr [esi + 0x21c78]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 7C 1C 02 00: mov eax, dword ptr [esi + 0x21c7c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 80 1C 02 00: mov ecx, dword ptr [esi + 0x21c80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 7C 08 01 00: mov dword ptr [esi + 0x1087c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 84 1C 02 00: mov edx, dword ptr [esi + 0x21c84]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 80 08 01 00: mov dword ptr [esi + 0x10880], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 88 1C 02 00: mov eax, dword ptr [esi + 0x21c88]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 84 08 01 00: mov dword ptr [esi + 0x10884], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 8C 1C 02 00: mov ecx, dword ptr [esi + 0x21c8c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 96 88 08 01 00: mov dword ptr [esi + 0x10888], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 8C 08 01 00: mov dword ptr [esi + 0x1088c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 90 08 01 00: mov dword ptr [esi + 0x10890], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 50 08 01 00: mov ecx, dword ptr [esi + 0x10850]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 08 09 01 00 00 00 00 00: mov dword ptr [esi + 0x10908], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 D0 1C A9 F3: xor ecx, 0xf3a91cd0
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0xa9
        __asm _emit 0xf3
        ; Exact mapped bytes 89 8E E4 08 01 00: mov dword ptr [esi + 0x108e4], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 88 45 A2 58: mov eax, dword ptr [0x58a24588]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 78 40: mov edi, dword ptr [eax + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x40
        ; Exact mapped bytes 8B 40 58: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x58
        ; Exact mapped bytes 6B C0 0D: imul eax, eax, 0xd
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x0d
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 77 04: div dword ptr [edi + 4]
        __asm _emit 0xf7
        __asm _emit 0x77
        __asm _emit 0x04
        ; Exact mapped bytes 8B 47 0C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 14 90: mov edx, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x90
        ; Exact mapped bytes 33 D1: xor edx, ecx
        __asm _emit 0x33
        __asm _emit 0xd1
        ; Exact mapped bytes 89 96 E4 08 01 00: mov dword ptr [esi + 0x108e4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8D 86 46 07 01 00: lea eax, [esi + 0x10746]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x46
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x587f51d0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F51D0 .. +0x26C bytes.
extern "C" __declspec(naked) void FUN_587f2dd0_segment_03() {
    __asm {
        ; Exact mapped bytes 0F B6 94 0E 44 07 01 00: movzx edx, byte ptr [esi + ecx + 0x10744]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 01 96 08 09 01 00: add dword ptr [esi + 0x10908], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 78 FF: movzx edi, byte ptr [eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x78
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 08 09 01 00: mov edx, dword ptr [esi + 0x10908]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 89 96 08 09 01 00: mov dword ptr [esi + 0x10908], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 38: movzx edi, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x38
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 89 96 08 09 01 00: mov dword ptr [esi + 0x10908], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 78 01: movzx edi, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x78
        __asm _emit 0x01
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 89 BE 08 09 01 00: mov dword ptr [esi + 0x10908], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 F9 C4 01 00 00: cmp ecx, 0x1c4
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 BB: jb 0x587f51d0
        __asm _emit 0x72
        __asm _emit 0xbb
        ; Exact mapped bytes 8B 86 D4 0B 01 00: mov eax, dword ptr [esi + 0x10bd4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 64: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes 31 9E 68 08 01 00: xor dword ptr [esi + 0x10868], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 4C 08 01 00: xor dword ptr [esi + 0x1084c], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 60 08 01 00: xor dword ptr [esi + 0x10860], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 6C 08 01 00: xor dword ptr [esi + 0x1086c], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 64 08 01 00: xor dword ptr [esi + 0x10864], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 50 08 01 00: xor dword ptr [esi + 0x10850], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 54 08 01 00: xor dword ptr [esi + 0x10854], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 70 08 01 00: xor dword ptr [esi + 0x10870], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E 74 08 01 00: xor dword ptr [esi + 0x10874], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 9E EC 08 01 00: xor dword ptr [esi + 0x108ec], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 80 B6 F0 08 01 00 AA: xor byte ptr [esi + 0x108f0], 0xaa
        __asm _emit 0x80
        __asm _emit 0xb6
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xaa
        ; Exact mapped bytes 89 8E 04 09 01 00: mov dword ptr [esi + 0x10904], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 4A 07 01 00: lea eax, [esi + 0x1074a]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 20 00 00 00: mov ecx, 0x20
        __asm _emit 0xb9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 70 FF AA: xor byte ptr [eax - 1], 0xaa
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xaa
        ; Exact mapped bytes 80 30 AA: xor byte ptr [eax], 0xaa
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0xaa
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x587f5272
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 31 9E 08 09 01 00: xor dword ptr [esi + 0x10908], ebx
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 86 44 07 01 00: lea eax, [esi + 0x10744]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B7 44 01 00: call 0x58809750
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes F6 86 A8 05 01 00 01: test byte ptr [esi + 0x105a8], 1
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 6A 00 00 00: je 0x587f5310
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7A 0C: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 59 00 00 00: je 0x587f5310
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D A4 C1 98 58: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 E8 12 00 00: mov eax, dword ptr [edi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 68 50 B4 A0 58: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 34: jne 0x587f5309
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 39 87 38 04 00 00: cmp dword ptr [edi + 0x438], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x587f5309
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 8F 94 03 00 00: mov ecx, dword ptr [edi + 0x394]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 0A: shr ecx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 39 0C 85 E4 B1 A0 58: cmp dword ptr [eax*4 + 0x58a0b1e4], ecx
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 08: je 0x587f52f7
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 7C F1: jl 0x587f52e6
        __asm _emit 0x7c
        __asm _emit 0xf1
        ; Exact mapped bytes EB 06: jmp 0x587f52fd
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes FE 80 F8 B1 A0 58: inc byte ptr [eax + 0x58a0b1f8]
        __asm _emit 0xfe
        __asm _emit 0x80
        __asm _emit 0xf8
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 B7 59 FC FF: call 0x587bacc0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 B0: jne 0x587f52c0
        __asm _emit 0x75
        __asm _emit 0xb0
        ; Exact mapped bytes 83 BE 38 1C 02 00 00: cmp dword ptr [esi + 0x21c38], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x587f5367
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 8E 3C 1C 02 00: mov ecx, dword ptr [esi + 0x21c3c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 3C 1C 02 00: mov ecx, dword ptr [esi + 0x21c3c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D A0 C1 98 58: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 58: lea edx, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 1C 03 00 00: push 0x31c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 86 18 19 02 00: lea eax, [esi + 0x21918]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 96 3C 1C 02 00: mov edx, dword ptr [esi + 0x21c3c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes C7 86 3C 1C 02 00 FF FF FF FF: mov dword ptr [esi + 0x21c3c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x587f536d
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 3D A0 C1 98 58: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 74 45 A2 58 00: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x587f5427
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 C4 C3 98 58: mov esi, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 44 24 78: lea eax, [esp + 0x78]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 68 54 C4 99 58: push 0x5899c454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 58: lea ecx, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 80 00 00 00: lea edx, [esp + 0x80]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 84 00 00 00: lea eax, [esp + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8D 54 24 78: lea edx, [esp + 0x78]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 68 48 C4 99 58: push 0x5899c448
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 58: lea eax, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 80 00 00 00: lea ecx, [esp + 0x80]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 D4 B4 A0 58: mov eax, dword ptr [0x58a0b4d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 84 00 00 00: lea edx, [esp + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8D 4C 24 78: lea ecx, [esp + 0x78]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x78
        ; Exact mapped bytes 68 0C C4 99 58: push 0x5899c40c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 58: lea edx, [esp + 0x58]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 80 00 00 00: lea eax, [esp + 0x80]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 84 00 00 00: lea ecx, [esp + 0x84]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes A1 D4 B4 A0 58: mov eax, dword ptr [0x58a0b4d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8C 24 7C 01 00 00: mov ecx, dword ptr [esp + 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 A2 77 18 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x77
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
