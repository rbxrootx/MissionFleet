// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2E60 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_587a2e60() {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 184h]
        push esi
        push edi
        mov edi, dword ptr [ecx + 180h]
        mov eax, 66666667h
        imul edi
        sar edx, 2
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        mov eax, 66666667h
        imul ebx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp dword ptr [ecx + 178h], edi
        ; Exact mapped bytes 75 08: jne 0x587a2ea1
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [ecx + 17ch], ebx
        ; Exact mapped bytes 74 75: je 0x587a2f16
        __asm _emit 0x74
        __asm _emit 0x75
        mov dword ptr [ecx + 17ch], eax
        mov eax, dword ptr [ecx + 3c8h]
        cdq
        idiv dword ptr [ecx + 3cch]
        mov dword ptr [ecx + 178h], esi
        mov dword ptr [ecx + edx*8 + 188h], edi
        mov eax, dword ptr [ecx + 3c8h]
        cdq
        idiv dword ptr [ecx + 3cch]
        mov eax, dword ptr [ecx + 184h]
        mov dword ptr [ecx + edx*8 + 18ch], eax
        inc dword ptr [ecx + 3c8h]
        cmp dword ptr [esp + 10h], 0
        mov edx, dword ptr [ecx + 3c8h]
        mov eax, dword ptr [ecx + 174h]
        ; Exact mapped bytes 74 0B: je 0x587a2eff
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, dword ptr [ecx + 3cch]
        ; Exact mapped bytes 7D 0E: jge 0x587a2f0a
        __asm _emit 0x7d
        __asm _emit 0x0e
        inc eax
        ; Exact mapped bytes EB 05: jmp 0x587a2f04
        __asm _emit 0xeb
        __asm _emit 0x05
        test eax, eax
        ; Exact mapped bytes 7E 07: jle 0x587a2f0a
        __asm _emit 0x7e
        __asm _emit 0x07
        dec eax
        mov dword ptr [ecx + 174h], eax
        sub edx, dword ptr [ecx + 174h]
        mov dword ptr [ecx + 170h], edx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
