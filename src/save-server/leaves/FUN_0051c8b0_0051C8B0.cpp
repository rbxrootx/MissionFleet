// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C8B0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_0051c8b0_0051C8B0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 A0 70 68 00: push 0x6870a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 E9 F5 FC FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
