// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873930 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_58873930() {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 8E 37 01 00 00: jle 0x58873a76
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        push edi
        xor esi, esi
        test ebp, ebp
        ; Exact mapped bytes 0F 8E 1A 01 00 00: jle 0x58873a6a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, ebx
        test esi, esi
        ; Exact mapped bytes 7E 10: jle 0x58873968
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58873966
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C F4: jl 0x58873958
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x58873968
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 0a8h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [esp + 1ch], ecx
        lea edx, [esi + 1]
        xor ecx, ecx
        mov eax, ebx
        test edx, edx
        ; Exact mapped bytes 7E 10: jle 0x58873996
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58873994
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F4: jl 0x58873986
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x58873996
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 0a8h]
        xor ecx, 0aaaaaaaah
        mov dword ptr [esp + 10h], ecx
        xor ecx, ecx
        mov eax, ebx
        test esi, esi
        ; Exact mapped bytes 7E 10: jle 0x588739c1
        __asm _emit 0x7e
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588739bf
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C F4: jl 0x588739b1
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x588739c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 0ach]
        xor ecx, 0aaaaaaaah
        mov dword ptr [esp + 18h], ecx
        xor ecx, ecx
        mov eax, ebx
        test edx, edx
        ; Exact mapped bytes 7E 14: jle 0x588739f0
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x588739ee
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F4: jl 0x588739e0
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 02: jmp 0x588739f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        mov ecx, dword ptr [eax + 0ach]
        xor ecx, 0aaaaaaaah
        ; Exact mapped bytes DA 74 24 18: fidiv dword ptr [esp + 0x18]
        __asm _emit 0xda
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 42: jne 0x58873a60
        __asm _emit 0x75
        __asm _emit 0x42
        xor ecx, ecx
        mov eax, ebx
        test edx, edx
        ; Exact mapped bytes 7E 0C: jle 0x58873a32
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x58873a4e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, edx
        ; Exact mapped bytes 7C F4: jl 0x58873a26
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov edi, eax
        xor ecx, ecx
        mov eax, ebx
        test esi, esi
        ; Exact mapped bytes 7E 18: jle 0x58873a54
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58873a52
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 8]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C F4: jl 0x58873a40
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes EB 06: jmp 0x58873a54
        __asm _emit 0xeb
        __asm _emit 0x06
        xor edi, edi
        ; Exact mapped bytes EB E2: jmp 0x58873a34
        __asm _emit 0xeb
        __asm _emit 0xe2
        xor eax, eax
        mov esi, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [eax + 0ch], esi
        mov dword ptr [edi + 0ch], ecx
        mov esi, edx
        cmp esi, ebp
        ; Exact mapped bytes 0F 8C E6 FE FF FF: jl 0x58873950
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        dec ebp
        test ebp, ebp
        ; Exact mapped bytes 0F 8F D3 FE FF FF: jg 0x58873946
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
