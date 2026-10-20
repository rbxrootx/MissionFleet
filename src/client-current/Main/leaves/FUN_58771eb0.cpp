// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771EB0 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58771eb0() {
    __asm {
        ; Exact mapped bytes E8 1B 1A 00 00: call 0x587738d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 10: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
