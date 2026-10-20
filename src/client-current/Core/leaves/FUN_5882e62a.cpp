// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E62A .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_5882e62a() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8D 46 14: lea eax, [esi + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 18 42 89 58: call dword ptr [0x58894218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4E 2C: lea ecx, [esi + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes E9 00 00 00 00: jmp 0x5882e640
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
