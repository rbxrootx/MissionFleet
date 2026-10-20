// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F1EB .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_5884f1eb() {
    __asm {
        ; Exact mapped bytes E8 D6 04 00 00: call 0x5884f6c6
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 06: je 0x5884f1fe
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 39 41 18: cmp dword ptr [ecx + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 0F 9F C0: setg al
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
