// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 390 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881C90 .. +0x186 bytes.
extern "C" __declspec(naked) void FUN_58881c90_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 ED 23 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x58881df5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 51 50: lea edx, [ecx + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x58881df5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 AA 00 00 00: mov eax, 0xaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 42 08: xor ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F B7 D8: movzx ebx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd8
        ; Exact mapped bytes B8 AA 00 00 00: mov eax, 0xaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 42 0A: xor ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x0a
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 0F B7 F8: movzx edi, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xf8
        ; Exact mapped bytes B8 AA 00 00 00: mov eax, 0xaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 42 0C: xor ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 83 FD 0A: cmp ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 87 D2 00 00 00: ja 0x58881dbe
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 95 24 1E 88 58: movzx edx, byte ptr [ebp + 0x58881e24]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x1e
        __asm _emit 0x88
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 95 18 1E 88 58: jmp dword ptr [edx*4 + 0x58881e18]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x88
        __asm _emit 0x58
        ; Exact mapped bytes BA 0A 00 00 00: mov edx, 0xa
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B FA: cmp di, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 0F 82 DA 00 00 00: jb 0x58881de2
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 D2: movzx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd2
        ; Exact mapped bytes 0F B7 C0: movzx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc0
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 C7: movzx eax, di
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc7
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F B7 D3: movzx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 20 AE EF FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xae
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 86 84 00 00 00: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B F2 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 64 00: cmp dword ptr [ecx + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 7E 45: jle 0x58881d86
        __asm _emit 0x7e
        __asm _emit 0x45
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 67 97 FF FF: call 0x5887b4b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 BE 84 00 00 00: cmp dword ptr [esi + 0x84], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 10: jle 0x58881d63
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D6 9F FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 3B BE 84 00 00 00: cmp edi, dword ptr [esi + 0x84]
        __asm _emit 0x3b
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C F0: jl 0x58881d53
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes 8D BE 44 02 00 00: lea edi, [esi + 0x244]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 05 00 00 00: mov ebx, 5
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 96 88 00 00 00: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 B2 6A 08 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 EA: jne 0x58881d70
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 83 7E 68 00: cmp dword ptr [esi + 0x68], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x58881da3
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 31 11 00 00: push 0x1131
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 9D EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8D 2F EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x58881cff
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BA 05 00 00 00: mov edx, 5
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x58881cff
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 7E 68 00: cmp dword ptr [esi + 0x68], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 DF: je 0x58881da3
        __asm _emit 0x74
        __asm _emit 0xdf
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 35 11 00 00: push 0x1135
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C 9D EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 55 2F EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 68 39 11 00 00: push 0x1139
        __asm _emit 0x68
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 02 86 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 68 00: cmp dword ptr [esi + 0x68], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 AB: je 0x58881da6
        __asm _emit 0x74
        __asm _emit 0xab
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 35 11 00 00: push 0x1135
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 9C EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9c
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1E 2F EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
