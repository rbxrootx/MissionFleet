// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526AE0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_00526ae0_00526AE0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 20 E8 5D 00: push 0x5de820
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 03 FE FF: call 0x506ee6
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 68 1C E8 5D 00: push 0x5de81c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF 03 FE FF: call 0x506ee6
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
