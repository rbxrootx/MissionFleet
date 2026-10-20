// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832133 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58832133_58832133() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes 8B 35 B0 1C 8C 58: mov esi, dword ptr [0x588c1cb0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x58832146
        __asm _emit 0x75
        __asm _emit 0x05
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 13: jmp 0x58832159
        __asm _emit 0xeb
        __asm _emit 0x13
        push dword ptr [ebp + 10h]
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
