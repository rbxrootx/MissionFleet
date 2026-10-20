// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042266B .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_0042266b_0042266B() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes FF 34 85 F8 AB 44 00: push dword ptr [eax*4 + 0x44abf8]
        __asm _emit 0xff
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xab
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
