// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BC780 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_100bc780_100BC780() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 0dch]
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 FA 09 00 00: call 0x100bd190
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 53 FD FF FF: call 0x100bc4f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
