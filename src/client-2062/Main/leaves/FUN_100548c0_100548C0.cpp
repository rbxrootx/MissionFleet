// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100548C0 .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_100548c0_100548C0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        push edi
        ; Exact mapped bytes 66 89 99 16 01 00 00: mov word ptr [ecx + 0x116], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x10054991
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x10054991
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, 1019b025h
        ; Exact mapped bytes 66 0F B6 70 FF: movzx si, byte ptr [eax - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x70
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 38: movzx di, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x38
        shl esi, 4
        or esi, edi
        ; Exact mapped bytes 66 0F B6 78 01: movzx di, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x78
        __asm _emit 0x01
        shl esi, 4
        or esi, edi
        ; Exact mapped bytes 66 3B F3: cmp si, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes 74 13: je 0x10054918
        __asm _emit 0x74
        __asm _emit 0x13
        add eax, 0cb8h
        inc edx
        cmp eax, 101a7ba5h
        ; Exact mapped bytes 7C D6: jl 0x100548e8
        __asm _emit 0x7c
        __asm _emit 0xd6
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x10054931
        __asm _emit 0x75
        __asm _emit 0x11
        xor eax, eax
        push ebx
        mov al, bh
        push eax
        ; Exact mapped bytes E8 D5 19 00 00: call 0x10056300
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [edx*4 + 101c5658h]
        cmp dword ptr [edx + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x10054950
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [edx + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10054950
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x10054952
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 344h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x100549ff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        pop edi
        pop esi
        pop ebx
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x100549f8
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ecx + 3f4h]
        test edx, edx
        ; Exact mapped bytes 74 5C: je 0x100549ff
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [ecx + 3f0h]
        mov ecx, dword ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x100549c1
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100549c1
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100549c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 74 35: je 0x100549ff
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [eax]
        add edx, 14h
        pop edi
        pop esi
        pop ebx
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 71 14 00 00: call 0x10055e70
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
