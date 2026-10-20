// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3CA0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587c3ca0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899ad2ch
        ; Exact mapped bytes E8 C2 53 14 00: call 0x58909070
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x53
        __asm _emit 0x14
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587c3cbe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 87 8F 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
