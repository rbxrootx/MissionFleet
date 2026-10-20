// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B64C0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587b64c0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899a0b0h
        ; Exact mapped bytes E8 D2 D3 14 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd3
        __asm _emit 0x14
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587b64de
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 67 67 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x67
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
