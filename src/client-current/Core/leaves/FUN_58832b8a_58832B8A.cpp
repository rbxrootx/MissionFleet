// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832B8A .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_58832b8a_58832B8A() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 5b38h]
        ; Exact mapped bytes E8 0C AE 00 00: call 0x5883d9a5
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 22c4h]
        ; Exact mapped bytes E8 B8 A0 00 00: call 0x5883cc5c
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [edi + 20a4h]
        push esi
        ; Exact mapped bytes FF 15 18 42 89 58: call dword ptr [0x58894218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 18h], 0
        lea ecx, [edi + 28h]
        pop edi
        pop esi
        ; Exact mapped bytes E9 83 FF FF FF: jmp 0x58832b42
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
