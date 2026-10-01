// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58956400 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58956400() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2df8h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58956420
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 80 6B 02 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 99 D6 FA FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58956437
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 0E 68 02 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
