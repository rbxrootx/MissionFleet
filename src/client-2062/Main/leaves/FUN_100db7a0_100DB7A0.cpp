// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DB7A0 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_100db7a0_100DB7A0() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 3D DF 00 00 00: cmp eax, 0xdf
        __asm _emit 0x3d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 00: mov dword ptr [esp], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 7D 07: jge 0x100db7b9
        __asm _emit 0x7d
        __asm _emit 0x07
        ; Exact mapped bytes B9 DF 00 00 00: mov ecx, 0xdf
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x100db7c7
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 3D 42 01 00 00: cmp eax, 0x142
        __asm _emit 0x3d
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 42 01 00 00: mov ecx, 0x142
        __asm _emit 0xb9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 02: jg 0x100db7c7
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 82 E0 00 00 00: lea eax, [edx + 0xe0]
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 28: mov ebp, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x28
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B B5 88 00 00 00: mov esi, dword ptr [ebp + 0x88]
        __asm _emit 0x8b
        __asm _emit 0xb5
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EE 08: sub esi, 8
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x08
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x100db880
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 7E 2F: jle 0x100db819
        __asm _emit 0x7e
        __asm _emit 0x2f
        ; Exact mapped bytes B8 63 00 00 00: mov eax, 0x63
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 3C 36: lea edi, [esi + esi]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x36
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E0 05: shl eax, 5
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x05
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 8D 84 38 DF 00 00 00: lea eax, [eax + edi + 0xdf]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7C 08: jl 0x100db819
        __asm _emit 0x7c
        __asm _emit 0x08
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 0F BF D3: movsx edx, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd3
        ; Exact mapped bytes 3B D6: cmp edx, esi
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 7C E0: jl 0x100db7f9
        __asm _emit 0x7c
        __asm _emit 0xe0
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 0F BF FB: movsx edi, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfb
        ; Exact mapped bytes E8 1D 86 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 74 59: je 0x100db880
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 07: jne 0x100db833
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes B8 DF 00 00 00: mov eax, 0xdf
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x100db850
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 3B FE: cmp edi, esi
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes 75 07: jne 0x100db83e
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes B8 42 01 00 00: mov eax, 0x142
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x100db850
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes C1 E0 05: shl eax, 5
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x05
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 05 DF 00 00 00: add eax, 0xdf
        __asm _emit 0x05
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 58 01 00 00: mov ecx, dword ptr [ebp + 0x158]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 60 35 02 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D B5 E0 00 00 00: lea esi, [ebp + 0xe0]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 03 00 00 00: mov ebx, 3
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 ED 85 02 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 75 F2: jne 0x100db86b
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 C0 03 00 00: call 0x100dbc40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x03
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
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
