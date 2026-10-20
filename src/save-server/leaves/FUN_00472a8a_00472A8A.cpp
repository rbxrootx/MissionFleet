// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472A8A .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00472a8a_00472A8A() {
    __asm {
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 09: jne 0x472a99
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 34 74 68 00 00: cmp dword ptr [0x687434], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x472aa1
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x472b22
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 D6 F7 FF FF: call 0x472280
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x472ab5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6D: jmp 0x472b22
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes E9 52 FE FF FF: jmp 0x47290c
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
