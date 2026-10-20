// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B610 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_5879b610_5879B610() {
    __asm {
        mov edx, dword ptr [esp + 0ch]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 18h]
        sub edx, edi
        cmp dword ptr [esi + 14h], 0fh
        mov ebx, dword ptr [esi + 10h]
        mov eax, ebx
        ; Exact mapped bytes 76 0D: jbe 0x5879b638
        __asm _emit 0x76
        __asm _emit 0x0d
        sub edi, dword ptr [esi]
        sub eax, edi
        cmp eax, edx
        cmovb edx, eax
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 0B: jmp 0x5879b643
        __asm _emit 0xeb
        __asm _emit 0x0b
        sub edi, esi
        sub eax, edi
        cmp eax, edx
        cmovb edx, eax
        mov eax, esi
        lea ecx, [eax + edi]
        sub ebx, edx
        mov eax, ebx
        sub eax, edi
        inc eax
        push eax
        lea eax, [ecx + edx]
        push eax
        push ecx
        ; Exact mapped bytes E8 38 12 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x12
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 10h], ebx
        cmp dword ptr [esi + 14h], 0fh
        ; Exact mapped bytes 76 02: jbe 0x5879b666
        __asm _emit 0x76
        __asm _emit 0x02
        mov esi, dword ptr [esi]
        mov eax, dword ptr [esp + 14h]
        lea ecx, [esi + edi]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], ecx
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
