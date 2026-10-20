// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10097440 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_10097440_10097440() {
    __asm {
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, dword ptr [esp + 8]
        xor eax, eax
        test esi, esi
        mov esi, dword ptr [edx + 164h]
        sete al
        add eax, 209h
        cmp esi, eax
        pop esi
        ; Exact mapped bytes 7E 13: jle 0x10097475
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x10097475
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x10097475
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x10097477
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 80h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100974ac
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
