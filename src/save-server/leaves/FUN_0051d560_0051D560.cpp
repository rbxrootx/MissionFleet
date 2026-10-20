// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D560 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0051d560_0051D560() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 64 71 68 00: push 0x687164
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 E9 FC FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 68 60 71 68 00: push 0x687160
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 2F E9 FC FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
