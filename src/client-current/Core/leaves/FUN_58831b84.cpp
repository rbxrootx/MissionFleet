// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831B84 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58831b84() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 BC F4 FF FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
