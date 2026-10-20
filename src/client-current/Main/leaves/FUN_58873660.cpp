// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873660 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_58873660() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 8E C8 00 00 00: jle 0x58873736
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        push edi
        xor edi, edi
        test ebp, ebp
        ; Exact mapped bytes 0F 8E AB 00 00 00: jle 0x5887372a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor ecx, ecx
        mov eax, ebx
        test edi, edi
        ; Exact mapped bytes 7E 10: jle 0x58873698
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58873696
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C F4: jl 0x58873688
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x58873698
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        movzx edx, cl
        lea esi, [edi + 1]
        xor edx, 0aah
        xor ecx, ecx
        mov eax, ebx
        test esi, esi
        ; Exact mapped bytes 7E 10: jle 0x588736c7
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588736c5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C F4: jl 0x588736b7
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x588736c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        movzx eax, cl
        xor eax, 0aah
        cmp edx, eax
        ; Exact mapped bytes 7D 42: jge 0x58873720
        __asm _emit 0x7d
        __asm _emit 0x42
        xor ecx, ecx
        mov eax, ebx
        test esi, esi
        ; Exact mapped bytes 7E 0C: jle 0x588736f2
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5887370e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C F4: jl 0x588736e6
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov edx, eax
        xor ecx, ecx
        mov eax, ebx
        test edi, edi
        ; Exact mapped bytes 7E 18: jle 0x58873714
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58873712
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 7C F4: jl 0x58873700
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 06: jmp 0x58873714
        __asm _emit 0xeb
        __asm _emit 0x06
        xor edx, edx
        ; Exact mapped bytes EB E2: jmp 0x588736f4
        __asm _emit 0xeb
        __asm _emit 0xe2
        xor eax, eax
        mov edi, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [edx + 0ch], ecx
        mov edi, esi
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 56 FF FF FF: jl 0x58873680
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 8F 42 FF FF FF: jg 0x58873675
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x42
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
