// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E96B0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_587e96b0() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        push ebx
        mov ebx, dword ptr [ecx + 10524h]
        push esi
        mov esi, dword ptr [eax + 4]
        push edi
        mov edi, dword ptr [eax + 8]
        mov eax, 0fa000h
        cdq
        idiv dword ptr [ebx + 114h]
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov eax, 0bb800h
        cdq
        mov dword ptr [ecx + 1052ch], esi
        idiv dword ptr [ebx + 114h]
        cdq
        sub eax, edx
        sar eax, 1
        sub edi, eax
        mov dword ptr [ecx + 10530h], edi
        xor edi, edi
        cmp esi, edi
        ; Exact mapped bytes 7D 08: jge 0x587e9707
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [ecx + 1052ch], edi
        ; Exact mapped bytes EB 1D: jmp 0x587e9724
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, 0fa000h
        cdq
        idiv dword ptr [ebx + 114h]
        mov edx, 3200h
        sub edx, eax
        cmp esi, edx
        ; Exact mapped bytes 7E 06: jle 0x587e9724
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [ecx + 1052ch], edx
        mov esi, dword ptr [ecx + 10530h]
        cmp esi, edi
        ; Exact mapped bytes 7D 0A: jge 0x587e9738
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ecx + 10530h], edi
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, 0bb800h
        cdq
        idiv dword ptr [ebx + 114h]
        mov edx, 1900h
        sub edx, eax
        cmp esi, edx
        ; Exact mapped bytes 7E 06: jle 0x587e9755
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [ecx + 10530h], edx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
