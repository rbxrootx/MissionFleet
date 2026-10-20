// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425DA5 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00425da5_00425DA5() {
    __asm {
        push esi
        push 0bh
        ; Exact mapped bytes E8 5D C8 FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 0ch]
        ; Exact mapped bytes E8 10 00 00 00: call 0x425dc6
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0bh
        mov esi, eax
        ; Exact mapped bytes E8 AC C8 FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, esi
        pop esi
        ret
    }
}
