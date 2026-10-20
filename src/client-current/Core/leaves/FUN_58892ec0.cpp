// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892EC0 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58892ec0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 30 24 96 58: mov ecx, 0x58962430
        __asm _emit 0xb9
        __asm _emit 0x30
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 00 D0 FF: call 0x58592f20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
