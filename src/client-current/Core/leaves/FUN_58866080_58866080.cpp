// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866080 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58866080_58866080() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 FE 31 FF FF: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        lea ecx, [esi + eax*2]
        push ecx
        ; Exact mapped bytes E8 62 00 00 00: call 0x58866100
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
