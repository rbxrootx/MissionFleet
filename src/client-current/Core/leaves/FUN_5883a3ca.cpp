// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A3CA .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5883a3ca() {
    __asm {
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 03: jne 0x5883a3d7
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E9 27 BD FF FF: jmp 0x58836103
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
