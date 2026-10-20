// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C99B0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_004c99b0_004C99B0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 03: jne 0x4c99bb
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 0D EE 04 5E 00: mov cx, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 E0 25 5E 00: call dword ptr [0x5e25e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
