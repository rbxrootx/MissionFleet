// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 982 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879FB0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58879fb0_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 68: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x68
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 44 24 64: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes E8 F8 FC FF FF: call 0x58879cc0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 85 84 00 00 00: cmp dword ptr [ebp + 0x84], eax
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 0C: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 7E 68: jle 0x5887a058
        __asm _emit 0x7e
        __asm _emit 0x68
        ; Exact mapped bytes 8D B5 08 01 00 00: lea esi, [ebp + 0x108]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x5887a000
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887A000 .. +0x38E bytes.
extern "C" __declspec(naked) void FUN_58879fb0_segment_01() {
    __asm {
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 04 02 00 00 10: cmp word ptr [eax + 0x204], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 75 1D: jne 0x5887a02c
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 80 BD 00 01 00 00 00: cmp byte ptr [ebp + 0x100], 0
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x5887a02c
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E FC: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xfc
        ; Exact mapped bytes 68 FF 00 00 00: push 0xff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB 92 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 68 12 01 00 00: push 0x112
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x5887a045
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 8B 8D 80 01 00 00: mov ecx, dword ptr [ebp + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E FC: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xfc
        ; Exact mapped bytes E8 A5 92 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 80 01 00 00: mov edx, dword ptr [ebp + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 0A: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x0a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes E8 94 92 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C6 08: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x08
        ; Exact mapped bytes 3B BD 84 00 00 00: cmp edi, dword ptr [ebp + 0x84]
        __asm _emit 0x3b
        __asm _emit 0xbd
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C A8: jl 0x5887a000
        __asm _emit 0x7c
        __asm _emit 0xa8
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 04 02 00 00 10: cmp word ptr [eax + 0x204], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 75 2E: jne 0x5887a095
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 80 BD 00 01 00 00 00: cmp byte ptr [ebp + 0x100], 0
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x5887a095
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 8D 84 00 00 00: cmp dword ptr [ebp + 0x84], ecx
        __asm _emit 0x39
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 42: jle 0x5887a0bc
        __asm _emit 0x7e
        __asm _emit 0x42
        ; Exact mapped bytes 8D 95 E4 00 00 00: lea edx, [ebp + 0xe4]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 3B 8D 84 00 00 00: cmp ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x3b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C ED: jl 0x5887a080
        __asm _emit 0x7c
        __asm _emit 0xed
        ; Exact mapped bytes EB 27: jmp 0x5887a0bc
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 8D 84 00 00 00: cmp dword ptr [ebp + 0x84], ecx
        __asm _emit 0x39
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1D: jle 0x5887a0bc
        __asm _emit 0x7e
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 95 E4 00 00 00: lea edx, [ebp + 0xe4]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes BE FE FF 00 00: mov esi, 0xfffe
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 3B 8D 84 00 00 00: cmp ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x3b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C E9: jl 0x5887a0a5
        __asm _emit 0x7c
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 74 24 7C: mov esi, dword ptr [esp + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 94 24 84 00 00 00: mov edx, dword ptr [esp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 88 00 00 00: mov eax, dword ptr [esp + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 7C: mov ebx, dword ptr [esp + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes 8D BD 88 00 00 00: lea edi, [ebp + 0x88]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 12 00 00 00: mov ecx, 0x12
        __asm _emit 0xb9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 8C 24 84 00 00 00: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 48: push 0x48
        __asm _emit 0x6a
        __asm _emit 0x48
        ; Exact mapped bytes 89 95 D8 00 00 00: mov dword ptr [ebp + 0xd8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D D4 00 00 00: mov dword ptr [ebp + 0xd4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 94 00 00 00: mov ecx, dword ptr [esp + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 30: lea edx, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 9D D0 00 00 00: mov dword ptr [ebp + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 DC 00 00 00: mov dword ptr [ebp + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D E0 00 00 00: mov dword ptr [ebp + 0xe0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2E 2B 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2b
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x5887a125
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 5C 24 7C: mov ebx, dword ptr [esp + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x7c
        ; Exact mapped bytes BE 05 00 00 00: mov esi, 5
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FF 09: cmp edi, 9
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x09
        ; Exact mapped bytes 77 2C: ja 0x5887a15b
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes FF 24 BD 90 A3 87 58: jmp dword ptr [edi*4 + 0x5887a390]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0xa3
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes BE 04 00 00 00: mov esi, 4
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x5887a15b
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes BE 03 00 00 00: mov esi, 3
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x5887a15b
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x5887a15b
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes EB 0C: jmp 0x5887a15b
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x5887a15b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BE 06 00 00 00: mov esi, 6
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 84 2F 88 00 00 00: movzx eax, byte ptr [edi + ebp + 0x88]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 00 44 34 2C: add byte ptr [esp + esi + 0x2c], al
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B9 04 02 00 00 10: cmp word ptr [ecx + 0x204], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 8A 44 34 2C: mov al, byte ptr [esp + esi + 0x2c]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x2c
        ; Exact mapped bytes 75 4F: jne 0x5887a1ca
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 80 BD 00 01 00 00 00: cmp byte ptr [ebp + 0x100], 0
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x5887a19c
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8A 94 2F 9C 00 00 00: mov dl, byte ptr [edi + ebp + 0x9c]
        __asm _emit 0x8a
        __asm _emit 0x94
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 84 2F 92 00 00 00: mov al, byte ptr [edi + ebp + 0x92]
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 00 54 34 40: add byte ptr [esp + esi + 0x40], dl
        __asm _emit 0x00
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0x40
        ; Exact mapped bytes 00 44 34 36: add byte ptr [esp + esi + 0x36], al
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x36
        ; Exact mapped bytes EB 2E: jmp 0x5887a1ca
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 8A 8C 2F 9C 00 00 00: mov cl, byte ptr [edi + ebp + 0x9c]
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 02 C8: add cl, al
        __asm _emit 0x02
        __asm _emit 0xc8
        ; Exact mapped bytes 02 8C 2F 92 00 00 00: add cl, byte ptr [edi + ebp + 0x92]
        __asm _emit 0x02
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 2F 9C 00 00 00 00: mov byte ptr [edi + ebp + 0x9c], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 4C 34 2C: mov byte ptr [esp + esi + 0x2c], cl
        __asm _emit 0x88
        __asm _emit 0x4c
        __asm _emit 0x34
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 34 40 00: mov byte ptr [esp + esi + 0x40], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 2F 92 00 00 00 00: mov byte ptr [edi + ebp + 0x92], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 34 36 00: mov byte ptr [esp + esi + 0x36], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x36
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A8 45 A2 58: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes F6 82 BC 01 00 00 01: test byte ptr [edx + 0x1bc], 1
        __asm _emit 0xf6
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5887a26e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 41 42 0F 00: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 4C F3 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 83 78 6C 00: cmp dword ptr [eax + 0x6c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x6c
        __asm _emit 0x00
        ; Exact mapped bytes 76 7B: jbe 0x5887a26e
        __asm _emit 0x76
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 41 42 0F 00: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes E8 3D 4C F3 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8D 0C DB: lea ecx, [ebx + ebx*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xdb
        ; Exact mapped bytes 8D 84 C8 9C 01 00 00: lea eax, [eax + ecx*8 + 0x19c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 14 38: mov dl, byte ptr [eax + edi]
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x38
        ; Exact mapped bytes 00 54 34 2C: add byte ptr [esp + esi + 0x2c], dl
        __asm _emit 0x00
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0x2c
        ; Exact mapped bytes 8A 44 38 0A: mov al, byte ptr [eax + edi + 0xa]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x38
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 00 44 34 36: add byte ptr [esp + esi + 0x36], al
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 B9 04 02 00 00 10: cmp word ptr [ecx + 0x204], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 75 42: jne 0x5887a26e
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 80 BD 00 01 00 00 00: cmp byte ptr [ebp + 0x100], 0
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x5887a242
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 8A 94 2F 9C 00 00 00: mov dl, byte ptr [edi + ebp + 0x9c]
        __asm _emit 0x8a
        __asm _emit 0x94
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 00 54 34 40: add byte ptr [esp + esi + 0x40], dl
        __asm _emit 0x00
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0x40
        ; Exact mapped bytes EB 2C: jmp 0x5887a26e
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8A 84 2F 9C 00 00 00: mov al, byte ptr [edi + ebp + 0x9c]
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 02 84 2F 92 00 00 00: add al, byte ptr [edi + ebp + 0x92]
        __asm _emit 0x02
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 2F 9C 00 00 00 00: mov byte ptr [edi + ebp + 0x9c], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 00 44 34 2C: add byte ptr [esp + esi + 0x2c], al
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x2c
        ; Exact mapped bytes C6 44 34 40 00: mov byte ptr [esp + esi + 0x40], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 2F 92 00 00 00 00: mov byte ptr [edi + ebp + 0x92], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 44 34 36 00: mov byte ptr [esp + esi + 0x36], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x36
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 4C 34 2C: movzx ecx, byte ptr [esp + esi + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x34
        __asm _emit 0x2c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8C F5 04 01 00 00: mov ecx, dword ptr [ebp + esi*8 + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E0 D0 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8A 5C 34 40: mov bl, byte ptr [esp + esi + 0x40]
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0x34
        __asm _emit 0x40
        ; Exact mapped bytes 8B 8C B5 E4 00 00 00: mov ecx, dword ptr [ebp + esi*4 + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xb5
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 D3: movzx edx, bl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd3
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 CC D0 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C B5 E4 00 00 00: mov ecx, dword ptr [ebp + esi*4 + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xb5
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 74 04: je 0x5887a2a3
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5887a2a5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 6A 9C: push -0x64
        __asm _emit 0x6a
        __asm _emit 0x9c
        ; Exact mapped bytes E8 76 8A 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8A 5C 34 36: mov bl, byte ptr [esp + esi + 0x36]
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0x34
        __asm _emit 0x36
        ; Exact mapped bytes 8B 8C F5 08 01 00 00: mov ecx, dword ptr [ebp + esi*8 + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 C3: movzx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A2 D0 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 80 7C 34 2C 00: cmp byte ptr [esp + esi + 0x2c], 0
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x34
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C F5 04 01 00 00: mov ecx, dword ptr [ebp + esi*8 + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x5887a2d0
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5887a2d2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 6A 9C: push -0x64
        __asm _emit 0x6a
        __asm _emit 0x9c
        ; Exact mapped bytes E8 49 8A 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C F5 08 01 00 00: mov ecx, dword ptr [ebp + esi*8 + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 DB: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xdb
        ; Exact mapped bytes 74 04: je 0x5887a2e6
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5887a2e8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 6A 9C: push -0x64
        __asm _emit 0x6a
        __asm _emit 0x9c
        ; Exact mapped bytes E8 33 8A 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 FF 0A: cmp edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 8C 2A FE FF FF: jl 0x5887a121
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 BC 24 94 00 00 00 00: cmp dword ptr [esp + 0x94], 0
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 74 78: je 0x5887a37a
        __asm _emit 0x74
        __asm _emit 0x78
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
        ; Exact mapped bytes 0F B7 40 04: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes BE 05 00 00 00: mov esi, 5
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 09: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 77 2C: ja 0x5887a34e
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes FF 24 85 B8 A3 87 58: jmp dword ptr [eax*4 + 0x5887a3b8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0xa3
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes BE 04 00 00 00: mov esi, 4
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x5887a34e
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes BE 03 00 00 00: mov esi, 3
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x5887a34e
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x5887a34e
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes EB 0C: jmp 0x5887a34e
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x5887a34e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BE 06 00 00 00: mov esi, 6
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FE 4C 34 28: dec byte ptr [esp + esi + 0x28]
        __asm _emit 0xfe
        __asm _emit 0x4c
        __asm _emit 0x34
        __asm _emit 0x28
        ; Exact mapped bytes 0F B6 4C 34 28: movzx ecx, byte ptr [esp + esi + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x34
        __asm _emit 0x28
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8C F5 04 01 00 00: mov ecx, dword ptr [ebp + esi*8 + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC CF 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B B4 F5 04 01 00 00: mov esi, dword ptr [ebp + esi*8 + 0x104]
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 64 00: cmp dword ptr [esi + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5887a37a
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 6A 9C: push -0x64
        __asm _emit 0x6a
        __asm _emit 0x9c
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A6 89 08 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 70: mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x70
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 52 28 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 68: add esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x68
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
