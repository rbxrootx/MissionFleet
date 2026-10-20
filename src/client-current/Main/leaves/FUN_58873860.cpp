// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873860 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_58873860() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 8E B8 00 00 00: jle 0x58873926
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        push edi
        xor edi, edi
        test ebp, ebp
        ; Exact mapped bytes 0F 8E 9B 00 00 00: jle 0x5887391a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor ecx, ecx
        mov eax, ebx
        test edi, edi
        ; Exact mapped bytes 7E 10: jle 0x58873898
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58873896
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C F4: jl 0x58873888
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x58873898
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        mov esi, dword ptr [eax + 0a4h]
        lea edx, [edi + 1]
        shr esi, 1
        xor ecx, ecx
        mov eax, ebx
        test edx, edx
        ; Exact mapped bytes 7E 12: jle 0x588738c0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edi, edi
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588738be
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F4: jl 0x588738b0
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x588738c0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        cmp esi, eax
        ; Exact mapped bytes 7E 41: jle 0x58873910
        __asm _emit 0x7e
        __asm _emit 0x41
        xor ecx, ecx
        mov eax, ebx
        test edx, edx
        ; Exact mapped bytes 7E 0C: jle 0x588738e3
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x588738fe
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F4: jl 0x588738d7
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov esi, eax
        xor ecx, ecx
        mov eax, ebx
        test edi, edi
        ; Exact mapped bytes 7E 17: jle 0x58873904
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58873902
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C F4: jl 0x588738f0
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 06: jmp 0x58873904
        __asm _emit 0xeb
        __asm _emit 0x06
        xor esi, esi
        ; Exact mapped bytes EB E3: jmp 0x588738e5
        __asm _emit 0xeb
        __asm _emit 0xe3
        xor eax, eax
        mov edi, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [esi + 0ch], ecx
        mov edi, edx
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 66 FF FF FF: jl 0x58873880
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 8F 52 FF FF FF: jg 0x58873875
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
