// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880890 .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_58880890_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 10 01 00 00: sub esp, 0x110
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x10
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
        ; Exact mapped bytes 89 84 24 0C 01 00 00: mov dword ptr [esp + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B3 A4 00 00 00: mov esi, dword ptr [ebx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 3B B3 A8 00 00 00: cmp esi, dword ptr [ebx + 0xa8]
        __asm _emit 0x3b
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x588808bd
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B5 C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B AB 98 00 00 00: mov ebp, dword ptr [ebx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0xab
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 44 24 18 00 00 00 00: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7E 22: lea edi, [esi + 0x22]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes 8B B3 A8 00 00 00: mov esi, dword ptr [ebx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B3 A4 00 00 00: cmp dword ptr [ebx + 0xa4], esi
        __asm _emit 0x39
        __asm _emit 0xb3
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x588808e5
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 8D C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 98 00 00 00: mov eax, dword ptr [ebx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 04: je 0x588808f3
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 74 05: je 0x588808f8
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 7A C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 39 74 24 14: cmp dword ptr [esp + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 6E: je 0x5888096c
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 3F: jne 0x58880941
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes E8 6B C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B 48 10: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x58880917
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 5B C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 E0: mov dx, word ptr [edi - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 84 24 24 01 00 00: mov eax, dword ptr [esp + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 50 02: cmp dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 74 3C: je 0x58880964
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 1A: jne 0x58880946
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 41 C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 77 1A: ja 0x58880952
        __asm _emit 0x77
        __asm _emit 0x1a
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 0F: je 0x5888094b
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5888094d
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x58880909
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB E8: jmp 0x58880933
        __asm _emit 0xeb
        __asm _emit 0xe8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 0C: cmp edi, dword ptr [eax + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 73 05: jae 0x58880957
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 1B C3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 83 44 24 14 22: add dword ptr [esp + 0x14], 0x22
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x22
        ; Exact mapped bytes 83 C7 22: add edi, 0x22
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x22
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x588808d2
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 44 24 18 01 00 00 00: mov dword ptr [esp + 0x18], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 44 24 18: movsx eax, word ptr [esp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 73 01 00 00: je 0x58880aed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 91 01 00 00: jne 0x58880b14
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 24 01 00 00: mov ecx, dword ptr [esp + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 41 08: movzx eax, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x588809a9
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 68 B0 F3 99 58: push 0x5899f3b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 24: lea edx, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes EB 22: jmp 0x588809cb
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x588809be
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 68 74 F2 99 58: push 0x5899f274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 24: lea eax, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 0D: jmp 0x588809cb
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 68 50 F5 99 58: push 0x5899f550
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4C 24 24: lea ecx, [esp + 0x24]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
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
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x58880a60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 91 C2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 3B 70 10: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x70
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x588809f1
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 81 C2 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 56 08: movzx edx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8B 64 02 00 00: mov ecx, dword ptr [ebx + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5F 69 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 64 02 00 00: mov eax, dword ptr [ebx + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8D 8B F4 01 00 00: lea ecx, [ebx + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58880a20
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880A20 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_58880890_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x58880a20
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 83 C8 01 00 00: mov eax, dword ptr [ebx + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 38: je 0x58880a74
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 19: je 0x58880a68
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 13: je 0x58880a68
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58880a45
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 0C: jmp 0x58880a6c
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x588809e3
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x58880a6d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 F8 99 58: push 0x5899f8b4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 83 D0 01 00 00: mov eax, dword ptr [ebx + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 30: je 0x58880abd
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2C: je 0x58880abd
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x58880ab1
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x58880ab1
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x58880a96
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58880ab5
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x58880ab6
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 74 24 14: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 27: jne 0x58880ae8
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes E8 AC C1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 70 10: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x70
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x58880ad2
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A0 C1 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 56 08: movzx edx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8B 64 02 00 00: mov ecx, dword ptr [ebx + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7E 68 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes EB 23: jmp 0x58880b0b
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes 8B 45 00: mov eax, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB DB: jmp 0x58880ac8
        __asm _emit 0xeb
        __asm _emit 0xdb
        ; Exact mapped bytes 68 8C F8 99 58: push 0x5899f88c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8B C8 01 00 00: mov ecx, dword ptr [ebx + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D9 11 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x11
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 9C 9D FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8C 24 1C 01 00 00: mov ecx, dword ptr [esp + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 B4 C0 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 10 01 00 00: add esp, 0x110
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
