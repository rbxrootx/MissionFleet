// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971728 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58971728() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 7D 0F: jge 0x5897173e
        __asm _emit 0x7d
        __asm _emit 0x0f
        ; Exact mapped bytes 6B C0 18: imul eax, eax, 0x18
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 05 48 85 A2 58: add eax, 0x58a28548
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9D 06 00 00: call 0x58971dda
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
