// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FDE4 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0041fde4_0041FDE4() {
    __asm {
        mov eax, 425a7ah
        ; Exact mapped bytes C7 05 54 D0 44 00 24 57 42 00: mov dword ptr [0x44d054], 0x425724
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x42
        __asm _emit 0x00
        ; Exact mapped bytes A3 50 D0 44 00: mov dword ptr [0x44d050], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 58 D0 44 00 8A 57 42 00: mov dword ptr [0x44d058], 0x42578a
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x8a
        __asm _emit 0x57
        __asm _emit 0x42
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 5C D0 44 00 CA 56 42 00: mov dword ptr [0x44d05c], 0x4256ca
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x56
        __asm _emit 0x42
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 60 D0 44 00 72 57 42 00: mov dword ptr [0x44d060], 0x425772
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x72
        __asm _emit 0x57
        __asm _emit 0x42
        __asm _emit 0x00
        ; Exact mapped bytes A3 64 D0 44 00: mov dword ptr [0x44d064], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ret
    }
}
