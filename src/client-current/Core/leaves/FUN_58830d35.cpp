// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830D35 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_58830d35() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 A0 0F 00 00: push 0xfa0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 70 41 89 58: call dword ptr [0x58894170]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
