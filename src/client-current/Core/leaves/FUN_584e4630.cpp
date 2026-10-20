// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4630 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_584e4630() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x584e4642
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 81 7D 08 CD CD CD CD: cmp dword ptr [ebp + 8], 0xcdcdcdcd
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0xcd
        __asm _emit 0xcd
        __asm _emit 0xcd
        __asm _emit 0xcd
        ; Exact mapped bytes 75 06: jne 0x584e4648
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 07: jmp 0x584e464d
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB 05: jmp 0x584e464d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
