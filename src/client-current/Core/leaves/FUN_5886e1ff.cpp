// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E1FF .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_5886e1ff() {
    __asm {
        ; Exact mapped bytes 8B 0D 40 60 90 58: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 C9 01: or ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        ; Exact mapped bytes 39 0D A0 99 96 58: cmp dword ptr [0x589699a0], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
