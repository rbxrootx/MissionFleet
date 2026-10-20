// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1000 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_100f1000_100F1000() {
    __asm {
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 81 30 03 00 00: mov al, byte ptr [ecx + 0x330]
        __asm _emit 0x8a
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 8C 10 20 04 00 00: mov cl, byte ptr [eax + edx + 0x420]
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
