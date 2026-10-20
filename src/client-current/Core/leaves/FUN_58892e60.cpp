// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892E60 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58892e60() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 1C 73 94 58: mov ecx, 0x5894731c
        __asm _emit 0xb9
        __asm _emit 0x1c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 EE C8 FF: call 0x58521cd0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xee
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
