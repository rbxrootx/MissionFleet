// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892E30 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58892e30() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 F0 BE 90 58: mov ecx, 0x5890bef0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 46 C3 FF: call 0x584c7440
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xc3
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
