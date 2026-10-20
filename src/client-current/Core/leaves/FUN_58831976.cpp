// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831976 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58831976() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 AF 0C 00 00: call 0x5883262d
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x58831991
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 80 7D 08 00: cmp byte ptr [ebp + 8], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x58831991
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 E8 66 96 58: mov ecx, 0x589666e8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 87 01: xchg dword ptr [ecx], eax
        __asm _emit 0x87
        __asm _emit 0x01
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
