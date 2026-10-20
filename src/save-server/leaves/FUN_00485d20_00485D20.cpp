// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485D20 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_00485d20_00485D20() {
    __asm {
        sub esp, 4
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 39 35 94 90 68 00: cmp dword ptr [0x689094], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x485da3
        __asm _emit 0x74
        __asm _emit 0x61
        xor ecx, ecx
        ; Exact mapped bytes 3B 0D 9C 90 68 00: cmp ecx, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7D 29: jge 0x485d75
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, 6890a4h
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 74 0E: je 0x485d63
        __asm _emit 0x74
        __asm _emit 0x0e
        add eax, 14h
        inc ecx
        ; Exact mapped bytes 3B 0D 9C 90 68 00: cmp ecx, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C F0: jl 0x485d51
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes EB 0C: jmp 0x485d6f
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 89 0D 98 90 68 00: mov dword ptr [0x689098], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 94 90 68 00: mov dword ptr [0x689094], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 0D 9C 90 68 00: cmp ecx, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 2C: jne 0x485da3
        __asm _emit 0x75
        __asm _emit 0x2c
        push 688de0h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 1ch]
        mov esi, dword ptr [esp + 18h]
        push ebx
        push eax
        push esi
        push 0
        ; Exact mapped bytes FF 15 14 BF 68 00: call dword ptr [0x68bf14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 98 90 68 00: mov edi, dword ptr [0x689098]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push 688de0h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 20h]
        cmp esi, 3
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x485eac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [ebx]
        cmp dword ptr [ebp + 28h], 8002h
        ; Exact mapped bytes 75 7E: jne 0x485e4e
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 66 83 3D 62 90 68 00 20: cmp word ptr [0x689062], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x62
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 75 60: jne 0x485e3a
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 66 81 3D 60 90 68 00 5F 03: cmp word ptr [0x689060], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 1B: jb 0x485e00
        __asm _emit 0x72
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 1ch]
        push -10h
        push eax
        ; Exact mapped bytes 8B 2D A0 BF 68 00: mov ebp, dword ptr [0x68bfa0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov dword ptr [esp + 10h], 0
        test al, 4
        ; Exact mapped bytes 75 08: jne 0x485e08
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 1
        mov ebp, dword ptr [esp + 1ch]
        lea eax, [esp + 10h]
        push eax
        push 0
        push 11f0h
        push ebp
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x485eac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4859b0h
        push ebp
        ; Exact mapped bytes E8 2B E6 FF FF: call 0x484460
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 72: jmp 0x485eac
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [esp + 1ch]
        push 4859b0h
        push eax
        ; Exact mapped bytes E8 B7 E7 FF FF: call 0x484600
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 5E: jmp 0x485eac
        __asm _emit 0xeb
        __asm _emit 0x5e
        lea eax, [edi*4]
        test byte ptr [eax + eax*4 + 6890b0h], 1
        ; Exact mapped bytes 74 4D: je 0x485eac
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 78 FE FF FF: call 0x485ce0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x485e94
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x485eac
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 3D 62 90 68 00 18: cmp word ptr [0x689062], 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x62
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x18
        ; Exact mapped bytes 74 2C: je 0x485eac
        __asm _emit 0x74
        __asm _emit 0x2c
        push eax
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 53 FE FF FF: call 0x485ce0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x485eac
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esp + 1ch]
        push eax
        push 1
        push 0ffffh
        push ecx
        ; Exact mapped bytes E8 57 02 00 00: call 0x486100
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        shl edi, 2
        push ebx
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [edi + edi*4 + 6890a8h]
        push eax
        push esi
        push ecx
        ; Exact mapped bytes FF 15 14 BF 68 00: call dword ptr [0x68bf14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
