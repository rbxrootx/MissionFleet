// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F270 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5886f270_5886F270() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes 8B 35 14 9C 96 58: mov esi, dword ptr [0x58969c14]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, esi
        push 0
        push 0
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
