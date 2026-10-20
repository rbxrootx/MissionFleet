// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9C80 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004c9c80_004C9C80() {
    __asm {
        push esi
        mov esi, 5e0524h
        push esi
        ; Exact mapped bytes E8 D4 FF FF FF: call 0x4c9c60
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add esi, 4
        cmp esi, 5e0530h
        ; Exact mapped bytes 72 EC: jb 0x4c9c86
        __asm _emit 0x72
        __asm _emit 0xec
        push 5e0530h
        ; Exact mapped bytes E8 BC FF FF FF: call 0x4c9c60
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
