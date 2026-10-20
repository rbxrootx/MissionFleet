// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10030EE0 .. +0x3EE bytes.
extern "C" __declspec(naked) void FUN_10030ee0_10030EE0() {
    __asm {
        push -1
        push 1016e24fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push 198h
        ; Exact mapped bytes E8 9A B8 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb8
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 74 0F: je 0x10030f26
        __asm _emit 0x74
        __asm _emit 0x0f
        push ebx
        push 101981a4h
        mov ecx, eax
        ; Exact mapped bytes E8 9C EB 0C 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xeb
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10030f28
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ebp
        push edi
        push 58h
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 64 B8 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        mov ecx, 1
        cmp edi, ebx
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 74 4D: je 0x10030f9f
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [esi + 78h]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 0F: jle 0x10030f6c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10030f6c
        __asm _emit 0x74
        __asm _emit 0x05
        lea ebp, [eax + 40h]
        ; Exact mapped bytes EB 02: jmp 0x10030f6e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 1f40h
        push ebx
        push ebx
        push 105h
        push 11ch
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 29 DA 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xda
        __asm _emit 0x0c
        __asm _emit 0x00
        push ebp
        mov ecx, edi
        mov byte ptr [esp + 24h], 2
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes E8 A3 4B FE FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10030fa1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [esi + 2f8h], edi
        ; Exact mapped bytes E8 EA B7 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb7
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebx
        mov dword ptr [esp + 20h], 3
        ; Exact mapped bytes 74 4E: je 0x10031019
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [esi + 78h]
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x10030fe4
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x10030fe4
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x10030fe6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2328h
        push ebx
        push ebx
        push 105h
        push 11ch
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B1 D9 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x00
        push ebp
        mov ecx, edi
        mov byte ptr [esp + 24h], 4
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes E8 2B 4B FE FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, edi
        ; Exact mapped bytes EB 02: jmp 0x1003101b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebp, 0fffbh
        mov dword ptr [esi + 2f4h], eax
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f8h]
        push 101h
        mov dword ptr [esp + 24h], 0ffffffffh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 2f4h]
        ; Exact mapped bytes E8 14 E1 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2f4h]
        push ebx
        ; Exact mapped bytes E8 C8 E0 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2f4h]
        push 0fffffeffh
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 2f8h]
        ; Exact mapped bytes E8 EF E0 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2f8h]
        push ebx
        ; Exact mapped bytes E8 A3 E0 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2f8h]
        mov ecx, 7fffh
        push 58h
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 2f4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f4h]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E8 E1 B6 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        cmp edi, ebx
        mov dword ptr [esp + 20h], 5
        ; Exact mapped bytes 74 75: je 0x10031149
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 78h]
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100310ed
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100310ed
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, eax
        ; Exact mapped bytes EB 02: jmp 0x100310ef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 2328h
        push ebx
        push ebx
        push 105h
        push 11ch
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A8 D8 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x10031142
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, 0fffbh
        ; Exact mapped bytes EB 02: jmp 0x1003114b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov dword ptr [esp + 24h], 0ffffffffh
        mov dword ptr [esi + 2fch], edi
        ; Exact mapped bytes E8 40 B6 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 14h], edi
        cmp edi, ebx
        mov dword ptr [esp + 20h], 6
        ; Exact mapped bytes 74 58: je 0x100311cd
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [esi + 78h]
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 13: jle 0x10031194
        __asm _emit 0x7e
        __asm _emit 0x13
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x10031194
        __asm _emit 0x74
        __asm _emit 0x09
        add eax, 40h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 04: jmp 0x10031198
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 10h], ebx
        push 1f40h
        push ebx
        push ebx
        push 105h
        push 11ch
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 FF D7 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov ecx, edi
        push edx
        mov byte ptr [esp + 24h], 7
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes E8 75 49 FE FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100311cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 2fch]
        mov dword ptr [esi + 300h], edi
        push 101h
        mov dword ptr [esp + 24h], 0ffffffffh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 300h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 2fch]
        ; Exact mapped bytes E8 5F DF 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2fch]
        push ebx
        ; Exact mapped bytes E8 13 DF 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2fch]
        mov edi, 1
        push 0fffffeffh
        mov dword ptr [eax + 50h], edi
        mov ecx, dword ptr [esi + 300h]
        ; Exact mapped bytes E8 35 DF 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 300h]
        push ebx
        ; Exact mapped bytes E8 E9 DE 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 300h]
        mov dword ptr [ecx + 50h], edi
        mov eax, dword ptr [esi + 2fch]
        mov ecx, 7fffh
        pop edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 300h]
        pop ebp
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2fch]
        mov ecx, 0bfffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 300h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f4h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f8h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 2f4h]
        mov eax, dword ptr [eax + 54h]
        cmp eax, ebx
        ; Exact mapped bytes 74 1D: je 0x100312b7
        __asm _emit 0x74
        __asm _emit 0x1d
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov dword ptr [esi + 0a018h], ecx
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 8]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ret
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 0a018h], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
