// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884EC9B .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5884ec9b() {
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
        ; Exact mapped bytes E8 76 18 00 00: call 0x5885051c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 A3 18 00 00: jmp 0x58850550
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
