// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865DDD .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58865ddd() {
    __asm {
        ; Exact mapped bytes E8 7A 2D 00 00: call 0x58868b5c
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
