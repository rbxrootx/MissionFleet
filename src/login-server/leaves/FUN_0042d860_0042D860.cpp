// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D860 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0042d860_0042D860() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov esi, dword ptr [eax]
        cmp esi, -1
        ; Exact mapped bytes 75 1A: jne 0x42d887
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ecx + 8]
        xor edi, edi
        test edx, edx
        ; Exact mapped bytes 76 11: jbe 0x42d887
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ecx + 4]
        mov esi, dword ptr [eax]
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x42d887
        __asm _emit 0x75
        __asm _emit 0x08
        inc edi
        add eax, 4
        cmp edi, edx
        ; Exact mapped bytes 72 F2: jb 0x42d879
        __asm _emit 0x72
        __asm _emit 0xf2
        mov edi, dword ptr [esi]
        test edi, edi
        ; Exact mapped bytes 75 28: jne 0x42d8b5
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [esi + 4]
        push ebx
        mov ebx, dword ptr [ecx + 8]
        xor edx, edx
        shr eax, 4
        div ebx
        inc edx
        cmp edx, ebx
        ; Exact mapped bytes 73 14: jae 0x42d8b4
        __asm _emit 0x73
        __asm _emit 0x14
        mov eax, dword ptr [ecx + 4]
        lea eax, [eax + edx*4]
        mov edi, dword ptr [eax]
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x42d8b4
        __asm _emit 0x75
        __asm _emit 0x08
        inc edx
        add eax, 4
        cmp edx, ebx
        ; Exact mapped bytes 72 F2: jb 0x42d8a6
        __asm _emit 0x72
        __asm _emit 0xf2
        pop ebx
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [eax], edi
        mov eax, dword ptr [esi + 4]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 8]
        pop edi
        mov dword ptr [ecx], eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
