// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862413 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58862413_58862413() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 3C 00 00 00: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov dword ptr [eax], ecx
        ; Exact mapped bytes E8 8B FF FF FF: call 0x588623b4
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov esi, eax
        ; Exact mapped bytes E8 3E 00 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        ret
    }
}
