// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB910 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_004bb910_004BB910() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 38 F0 5D 00: mov eax, dword ptr [0x5df038]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 4C 24 5E 00: call dword ptr [0x5e244c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
