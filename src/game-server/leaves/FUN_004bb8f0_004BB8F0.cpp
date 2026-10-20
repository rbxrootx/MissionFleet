// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB8F0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_004bb8f0_004BB8F0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 90 B8 4B 00: push 0x4bb890
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x4b
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 4C 24 5E 00: call dword ptr [0x5e244c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 38 F0 5D 00: mov dword ptr [0x5df038], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
