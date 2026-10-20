// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D6510 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_588d6510() {
    __asm {
        ; Exact mapped bytes 0F B7 41 04: movzx eax, word ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 72 08: jb 0x588d6522
        __asm _emit 0x72
        __asm _emit 0x08
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 03: je 0x588d6522
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
