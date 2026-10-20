// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004EA60 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_1004ea60_1004EA60() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, dword ptr [ecx + 170h]
        cdq
        idiv esi
        mov ebx, dword ptr [ecx + 174h]
        push edi
        mov edi, eax
        mov eax, dword ptr [esp + 14h]
        cdq
        idiv ebx
        cmp esi, 12h
        ; Exact mapped bytes 75 35: jne 0x1004eab9
        __asm _emit 0x75
        __asm _emit 0x35
        cmp ebx, esi
        ; Exact mapped bytes 75 31: jne 0x1004eab9
        __asm _emit 0x75
        __asm _emit 0x31
        test edi, edi
        ; Exact mapped bytes 7C 2D: jl 0x1004eab9
        __asm _emit 0x7c
        __asm _emit 0x2d
        mov edx, dword ptr [ecx + 168h]
        cmp edi, edx
        ; Exact mapped bytes 7D 23: jge 0x1004eab9
        __asm _emit 0x7d
        __asm _emit 0x23
        test eax, eax
        ; Exact mapped bytes 7C 1F: jl 0x1004eab9
        __asm _emit 0x7c
        __asm _emit 0x1f
        cmp eax, dword ptr [ecx + 16ch]
        ; Exact mapped bytes 7D 17: jge 0x1004eab9
        __asm _emit 0x7d
        __asm _emit 0x17
        imul edx, eax
        mov ecx, dword ptr [ecx + 1ach]
        add edx, edi
        pop edi
        pop esi
        lea eax, [edx + edx*4]
        pop ebx
        lea eax, [ecx + eax*4]
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
