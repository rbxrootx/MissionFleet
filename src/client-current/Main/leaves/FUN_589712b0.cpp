// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589712B0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_589712b0() {
    __asm {
        ; Exact mapped bytes C7 01 CC 2E 9A 58: mov dword ptr [ecx], 0x589a2ecc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xcc
        __asm _emit 0x2e
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E9 15 F9 FF FF: jmp 0x58970bd0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
