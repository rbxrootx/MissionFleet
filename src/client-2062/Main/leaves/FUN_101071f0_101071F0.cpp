// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101071F0 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_101071f0_101071F0() {
    __asm {
        sub esp, 10h
        push esi
        mov esi, dword ptr [esp + 18h]
        cmp dword ptr [esi + 54h], ecx
        ; Exact mapped bytes 74 09: je 0x10107206
        __asm _emit 0x74
        __asm _emit 0x09
        xor eax, eax
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push ebx
        cdq
        idiv dword ptr [ecx + 0f4h]
        mov ebx, dword ptr [esi + 8]
        push ebp
        push edi
        mov edi, eax
        mov eax, ebx
        cdq
        idiv dword ptr [ecx + 0f8h]
        test edi, edi
        mov ebp, eax
        ; Exact mapped bytes 0F 8C EF 00 00 00: jl 0x1010731a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 0F 8C E7 00 00 00: jl 0x1010731a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0fch]
        cmp edi, edx
        ; Exact mapped bytes 0F 8D D9 00 00 00: jge 0x1010731a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, dword ptr [ecx + 100h]
        ; Exact mapped bytes 0F 8D CD 00 00 00: jge 0x1010731a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, ebp
        mov eax, dword ptr [ecx + 108h]
        add edx, edi
        lea edx, [eax + edx*4]
        cmp dword ptr [edx], esi
        ; Exact mapped bytes 75 15: jne 0x10107274
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [esi + 5ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi + 5ch]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x1010728e
        __asm _emit 0x74
        __asm _emit 0x23
        mov dword ptr [eax + 58h], 0
        ; Exact mapped bytes EB 1A: jmp 0x1010728e
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x1010728e
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [esi + 5ch]
        mov dword ptr [eax + 5ch], edx
        mov eax, dword ptr [esi + 5ch]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x1010728e
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [esi + 58h]
        mov dword ptr [eax + 58h], edx
        mov eax, dword ptr [esi + 60h]
        lea edx, [eax + edi]
        xor eax, eax
        test edx, edx
        setl al
        dec eax
        xor ebx, ebx
        and eax, edx
        mov edx, dword ptr [esi + 64h]
        add edx, ebp
        mov dword ptr [esp + 10h], eax
        test edx, edx
        setl bl
        dec ebx
        and ebx, edx
        mov edx, dword ptr [esi + 68h]
        add edx, edi
        mov edi, dword ptr [ecx + 0fch]
        cmp edx, edi
        ; Exact mapped bytes 7D 02: jge 0x101072c2
        __asm _emit 0x7d
        __asm _emit 0x02
        mov edi, edx
        mov edx, dword ptr [esi + 6ch]
        add ebp, edx
        mov edx, dword ptr [ecx + 100h]
        cmp ebp, edx
        ; Exact mapped bytes 7C 02: jl 0x101072d3
        __asm _emit 0x7c
        __asm _emit 0x02
        mov ebp, edx
        cmp ebx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 7D 37: jge 0x10107312
        __asm _emit 0x7d
        __asm _emit 0x37
        cmp eax, edi
        mov edx, eax
        ; Exact mapped bytes 7D 2C: jge 0x1010730d
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [ecx + 0fch]
        mov ebp, dword ptr [ecx + 104h]
        imul eax, ebx
        add eax, edx
        lea eax, [ebp + eax*4]
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 75 06: jne 0x10107300
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [eax], 0
        inc edx
        cmp edx, edi
        ; Exact mapped bytes 7C DC: jl 0x101072e1
        __asm _emit 0x7c
        __asm _emit 0xdc
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 1ch]
        inc ebx
        cmp ebx, ebp
        ; Exact mapped bytes 7C C9: jl 0x101072db
        __asm _emit 0x7c
        __asm _emit 0xc9
        xor eax, eax
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], eax
        pop edi
        pop ebp
        mov dword ptr [esi + 54h], 0
        pop ebx
        mov eax, 1
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
