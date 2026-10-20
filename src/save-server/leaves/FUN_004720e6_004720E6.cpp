// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004720E6 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_004720e6_004720E6() {
    __asm {
        ; Exact mapped bytes 83 7D E4 00: cmp dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x4720ff
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 89 68 00: mov ecx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 68 B8 68 00: call dword ptr [0x68b868]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x472195
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
