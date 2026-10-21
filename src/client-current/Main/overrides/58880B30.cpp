// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880B30 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_58880b30_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 89 5C 24 04: mov dword ptr [esp + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes B9 E4 AA 99 58: mov ecx, 0x5899aae4
        __asm _emit 0xb9
        __asm _emit 0xe4
        __asm _emit 0xaa
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 05 44 04 00 00: add eax, 0x444
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 3A 11: cmp dl, byte ptr [ecx]
        __asm _emit 0x3a
        __asm _emit 0x11
        ; Exact mapped bytes 75 1A: jne 0x58880b66
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 74 12: je 0x58880b62
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8A 50 01: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 3A 51 01: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x01
        ; Exact mapped bytes 75 0E: jne 0x58880b66
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C0 02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        ; Exact mapped bytes 83 C1 02: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 E4: jne 0x58880b46
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 05: jmp 0x58880b6b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 13 01 00 00: jne 0x58880c86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7B 6C 04: cmp dword ptr [ebx + 0x6c], 4
        __asm _emit 0x83
        __asm _emit 0x7b
        __asm _emit 0x6c
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x58880c86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BB A4 00 00 00: mov edi, dword ptr [ebx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0xbb
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B BB A8 00 00 00: cmp edi, dword ptr [ebx + 0xa8]
        __asm _emit 0x3b
        __asm _emit 0xbb
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x58880b91
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 E1 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B3 98 00 00 00: mov esi, dword ptr [ebx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 6F 22: lea ebp, [edi + 0x22]
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x22
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 9B A8 00 00 00: mov ebx, dword ptr [ebx + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x9b
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 39 9F A4 00 00 00: cmp dword ptr [edi + 0xa4], ebx
        __asm _emit 0x39
        __asm _emit 0x9f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x58880bb7
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 BB C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 98 00 00 00: mov eax, dword ptr [edi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 04: je 0x58880bc5
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 74 05: je 0x58880bca
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 A8 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7D DE: lea edi, [ebp - 0x22]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xde
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 65: je 0x58880c36
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 37: jne 0x58880c0c
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes E8 98 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x58880be6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 8C C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 E0: mov ax, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 66 3B 41 02: cmp ax, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x02
        ; Exact mapped bytes 74 38: je 0x58880c2c
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 18: jne 0x58880c10
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 75 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 68 10: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x68
        __asm _emit 0x10
        ; Exact mapped bytes 77 17: ja 0x58880c1b
        __asm _emit 0x77
        __asm _emit 0x17
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 0C: je 0x58880c14
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB 0A: jmp 0x58880c16
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB CC: jmp 0x58880bdc
        __asm _emit 0xeb
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes EB EB: jmp 0x58880bff
        __asm _emit 0xeb
        __asm _emit 0xeb
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 68 0C: cmp ebp, dword ptr [eax + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x68
        __asm _emit 0x0c
        ; Exact mapped bytes 73 05: jae 0x58880c20
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 52 C0 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 10: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 C5 22: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x22
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x58880ba0
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 F4 F8 99 58: push 0x5899f8f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8F C8 01 00 00: mov ecx, dword ptr [edi + 0x1c8]
        __asm _emit 0x8b
        __asm _emit 0x8f
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
        ; Exact mapped bytes E8 8A 10 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 68 D4 F8 99 58: push 0x5899f8d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8F D0 01 00 00: mov ecx, dword ptr [edi + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 74 10 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x10
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 37 9C FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
