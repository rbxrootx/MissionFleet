// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5894CC80 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5894cc80() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2de8h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5894cca0
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 00 03 03 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 19 6E FB FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5894ccb7
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 8E FF 02 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
