// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971DCA .. +0x10 bytes.
extern "C" __declspec(naked) void __Mtxlock() {
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
        ; Exact mapped bytes FF 15 CC C0 98 58: call dword ptr [0x5898c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
