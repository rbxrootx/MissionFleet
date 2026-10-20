// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830390 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58830390() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes FF 75 14: push dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 0C E5 FF FF: call 0x5882e8b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
