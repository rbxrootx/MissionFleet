// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865C15 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58865c15() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 68 A8 98 96 58: push 0x589698a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 00 00 00: call 0x58865c92
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
