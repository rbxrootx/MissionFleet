// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DB198 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_004db198_004DB198() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 A9 09 06 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 1E 5E 00: call dword ptr [0x5e1ea8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
