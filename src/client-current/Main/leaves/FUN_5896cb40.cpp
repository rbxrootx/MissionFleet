// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896CB40 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5896cb40() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, 1
        mov dword ptr [esi], 589a2e94h
        ; Exact mapped bytes 29 05 14 85 A2 58: sub dword ptr [0x58a28514], eax
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        test byte ptr [esp + 8], al
        ; Exact mapped bytes 74 09: je 0x5896cb63
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 E2 00 01 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
