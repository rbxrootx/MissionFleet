// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046CD50 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_0046cd50_0046CD50() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes FF 15 A0 B8 68 00: call dword ptr [0x68b8a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
