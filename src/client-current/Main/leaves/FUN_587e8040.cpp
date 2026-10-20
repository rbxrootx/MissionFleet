// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E8040 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_587e8040() {
    __asm {
        ; Exact mapped bytes 8B 41 14: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 01 88 BD 99 58: mov dword ptr [ecx], 0x5899bd88
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 4B 19 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4b
        __asm _emit 0x19
        __asm _emit 0x00
    }
}
