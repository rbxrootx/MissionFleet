// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850B43 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58850b43() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 DD EA FF FF: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 70 04: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 0A: je 0x58850b5a
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes E8 C8 52 01 00: call 0x58865e27
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
