// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873EE0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58873ee0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 8B 0D 40 60 90 58: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes 8B 35 40 9C 96 58: mov esi, dword ptr [0x58969c40]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        and ecx, 1fh
        ; Exact mapped bytes 33 35 40 60 90 58: xor esi, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ror esi, cl
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x58873f06
        __asm _emit 0x75
        __asm _emit 0x05
        xor eax, eax
        pop esi
        pop ebp
        ret
        push dword ptr [ebp + 8]
        mov ecx, esi
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
        add esp, 4
        pop esi
        pop ebp
        ret
    }
}
