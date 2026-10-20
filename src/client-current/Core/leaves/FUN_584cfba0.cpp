// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFBA0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_584cfba0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 F4 89 89 58: push 0x588989f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x89
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 EC 35 00: call 0x5882e7ad
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xec
        __asm _emit 0x35
        __asm _emit 0x00
    }
}
