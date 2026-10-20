// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10044CF0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_10044cf0_10044CF0() {
    __asm {
        mov edx, dword ptr [ecx + 3c0h]
        push esi
        mov esi, dword ptr [ecx + 30ch]
        xor edx, 0aaaaaaaah
        xor esi, 0aaaaaaaah
        mov dword ptr [ecx + 3c0h], edx
        mov dword ptr [ecx + 30ch], esi
        mov eax, esi
        mov esi, dword ptr [esp + 8]
        mov dword ptr [ecx + 104h], 0
        test esi, esi
        ; Exact mapped bytes 75 16: jne 0x10044d3f
        __asm _emit 0x75
        __asm _emit 0x16
        sub eax, dword ptr [ecx + 0e0h]
        mov dword ptr [ecx + 30ch], eax
        ; Exact mapped bytes 79 29: jns 0x10044d60
        __asm _emit 0x79
        __asm _emit 0x29
        mov dword ptr [ecx + 30ch], esi
        ; Exact mapped bytes EB 21: jmp 0x10044d60
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp esi, 1
        ; Exact mapped bytes 75 1C: jne 0x10044d60
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, edx
        mov edx, dword ptr [ecx + 0e0h]
        sub eax, edx
        mov dword ptr [ecx + 3c0h], eax
        ; Exact mapped bytes 79 0A: jns 0x10044d60
        __asm _emit 0x79
        __asm _emit 0x0a
        mov dword ptr [ecx + 3c0h], 0
        mov eax, dword ptr [ecx + 30ch]
        pop esi
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x10044d79
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 3c0h]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x10044d79
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 05: jmp 0x10044d7e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edx, 40000000h
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 0f8h], edx
        mov dword ptr [ecx + 30ch], eax
        mov eax, dword ptr [ecx + 3c0h]
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 3c0h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
