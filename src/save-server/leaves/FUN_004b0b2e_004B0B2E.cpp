// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0B2E .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_004b0b2e_004B0B2E() {
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
        ; Exact mapped bytes E8 73 AA 07 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 68 B3 68 00: call dword ptr [0x68b368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
