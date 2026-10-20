// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F4D30 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_584f4d30() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 B4 27 8A 58: push 0x588a27b4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 9A 33 00: call 0x5882e7ad
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9a
        __asm _emit 0x33
        __asm _emit 0x00
    }
}
