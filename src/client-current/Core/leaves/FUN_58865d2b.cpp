// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865D2B .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58865d2b() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 4C 9C 96 58: push 0x58969c4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D FF: lea ecx, [ebp - 1]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xff
        ; Exact mapped bytes E8 54 00 00 00: call 0x58865d92
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
