// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000DEF0 .. +0x1EF bytes.
extern "C" __declspec(naked) void FUN_1000def0_1000DEF0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 6ch]
        mov eax, dword ptr [edi + 84h]
        mov ebx, dword ptr [edi + 70h]
        mov ebp, dword ptr [edi + 88h]
        sub esi, eax
        sub ebx, ebp
        mov eax, ebx
        mov ecx, esi
        imul eax, ebx
        imul ecx, esi
        add eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 76 E8 15 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 68 E8 15 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, eax
        mov eax, dword ptr [edi + 0ach]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, 10624dd3h
        mov ecx, dword ptr [edx*4 + 101b09a0h]
        imul ecx, ebp
        imul ecx
        mov ebp, dword ptr [edi + 0ach]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 91a2b3c5h
        mov ecx, edx
        imul ebp
        add edx, ebp
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 3
        ; Exact mapped bytes 77 59: ja 0x1000dfe2
        __asm _emit 0x77
        __asm _emit 0x59
        ; Exact mapped bytes FF 24 95 E0 E0 00 10: jmp dword ptr [edx*4 + 0x1000e0e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x10
        test esi, esi
        ; Exact mapped bytes 7C 20: jl 0x1000dfb4
        __asm _emit 0x7c
        __asm _emit 0x20
        test ebx, ebx
        ; Exact mapped bytes 7F 43: jg 0x1000dfdb
        __asm _emit 0x7f
        __asm _emit 0x43
        cmp esi, ecx
        ; Exact mapped bytes 7D 09: jge 0x1000dfa5
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes EB 3D: jmp 0x1000dfe2
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 7F 34: jg 0x1000dfdb
        __asm _emit 0x7f
        __asm _emit 0x34
        cmp esi, ecx
        ; Exact mapped bytes 75 37: jne 0x1000dfe2
        __asm _emit 0x75
        __asm _emit 0x37
        mov dword ptr [edi + 58h], 0
        ; Exact mapped bytes EB 2E: jmp 0x1000dfe2
        __asm _emit 0xeb
        __asm _emit 0x2e
        test ebx, ebx
        ; Exact mapped bytes 7F 09: jg 0x1000dfc1
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes EB 21: jmp 0x1000dfe2
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, esi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ecx
        ; Exact mapped bytes 7C 0F: jl 0x1000dfdb
        __asm _emit 0x7c
        __asm _emit 0x0f
        ; Exact mapped bytes 7E 09: jle 0x1000dfd7
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes EB 0B: jmp 0x1000dfe2
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp eax, ecx
        ; Exact mapped bytes 75 07: jne 0x1000dfe2
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [edi + 58h], 0ffffffffh
        mov eax, esi
        mov ebx, dword ptr [edi + 0cch]
        sub eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ebx
        ; Exact mapped bytes 7E 0E: jle 0x1000e003
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [edi + 58h]
        imul ecx, ebx
        add ecx, ebp
        mov dword ptr [edi + 0ach], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
        test esi, esi
        ; Exact mapped bytes 7C 27: jl 0x1000e036
        __asm _emit 0x7c
        __asm _emit 0x27
        test ebx, ebx
        ; Exact mapped bytes 7E C8: jle 0x1000dfdb
        __asm _emit 0x7e
        __asm _emit 0xc8
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp esi, eax
        ; Exact mapped bytes 7D 09: jge 0x1000e027
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes EB BB: jmp 0x1000dfe2
        __asm _emit 0xeb
        __asm _emit 0xbb
        ; Exact mapped bytes 7F B2: jg 0x1000dfdb
        __asm _emit 0x7f
        __asm _emit 0xb2
        cmp esi, eax
        ; Exact mapped bytes 75 B5: jne 0x1000dfe2
        __asm _emit 0x75
        __asm _emit 0xb5
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes EB AC: jmp 0x1000dfe2
        __asm _emit 0xeb
        __asm _emit 0xac
        test ebx, ebx
        ; Exact mapped bytes 7F 7F: jg 0x1000e0b9
        __asm _emit 0x7f
        __asm _emit 0x7f
        cmp esi, ecx
        ; Exact mapped bytes 0F 8D 63 FF FF FF: jge 0x1000dfa5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes EB 97: jmp 0x1000dfe2
        __asm _emit 0xeb
        __asm _emit 0x97
        test esi, esi
        ; Exact mapped bytes 7C 21: jl 0x1000e070
        __asm _emit 0x7c
        __asm _emit 0x21
        test ebx, ebx
        ; Exact mapped bytes 7F 66: jg 0x1000e0b9
        __asm _emit 0x7f
        __asm _emit 0x66
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp esi, eax
        ; Exact mapped bytes 0F 8C 79 FF FF FF: jl 0x1000dfdb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E C5: jle 0x1000e029
        __asm _emit 0x7e
        __asm _emit 0xc5
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x1000dfe2
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 0F 8E 63 FF FF FF: jle 0x1000dfdb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, ecx
        ; Exact mapped bytes 0F 8C 5B FF FF FF: jl 0x1000dfdb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 21 FF FF FF: jle 0x1000dfa7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x1000dfe2
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 7C 10: jl 0x1000e0a6
        __asm _emit 0x7c
        __asm _emit 0x10
        test ebx, ebx
        ; Exact mapped bytes 7F DE: jg 0x1000e078
        __asm _emit 0x7f
        __asm _emit 0xde
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x1000dfe2
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 0F 8F 2D FF FF FF: jg 0x1000dfdb
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ecx
        ; Exact mapped bytes 7D 0C: jge 0x1000e0c5
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x1000dfe2
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8F 10 FF FF FF: jg 0x1000dfdb
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 0F FF FF FF: jne 0x1000dfe2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 58h], 1
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x1000dfe2
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
