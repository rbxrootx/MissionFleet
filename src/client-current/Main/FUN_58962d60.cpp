// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58962D60 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58962d60() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2e08h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58962d80
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 20 A2 01 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 39 0D FA FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58962d97
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 AE 9E 01 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
