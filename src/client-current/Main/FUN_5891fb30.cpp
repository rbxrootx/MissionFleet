// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5891FB30 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5891fb30() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2d98h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5891fb50
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 50 D4 05 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 69 3F FE FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5891fb67
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 DE D0 05 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
