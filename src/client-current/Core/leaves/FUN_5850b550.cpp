// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B550 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_5850b550() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 18 9F FF FF: call 0x58505470
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
