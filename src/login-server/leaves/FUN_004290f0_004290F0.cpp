// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004290F0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004290f0_004290F0() {
    __asm {
        push esi
        mov esi, 451444h
        push esi
        ; Exact mapped bytes E8 D4 FF FF FF: call 0x4290d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add esi, 4
        cmp esi, 451450h
        ; Exact mapped bytes 72 EC: jb 0x4290f6
        __asm _emit 0x72
        __asm _emit 0xec
        push 451450h
        ; Exact mapped bytes E8 BC FF FF FF: call 0x4290d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop esi
        ret
    }
}
