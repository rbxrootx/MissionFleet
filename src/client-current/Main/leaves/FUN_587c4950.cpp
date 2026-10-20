// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4950 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587c4950() {
    __asm {
        push esi
        mov esi, ecx
        push esi
        mov dword ptr [esi], 5899ad8ch
        ; Exact mapped bytes E8 B7 D1 1A 00: call 0x58971b16
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587c4972
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 D3 82 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x82
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
