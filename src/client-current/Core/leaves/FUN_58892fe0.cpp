// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892FE0 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58892fe0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 80 5F 96 58: mov ecx, 0x58965f80
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 47 BF FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x47
        __asm _emit 0xbf
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
