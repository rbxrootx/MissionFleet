// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EC80 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_5879ec80() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes F7 40 78 00 00 10 00: test dword ptr [eax + 0x78], 0x100000
        __asm _emit 0xf7
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x5879ec96
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x5879ed90
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 74 24 08: push dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 10 00 00 00: call 0x5879ecb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
