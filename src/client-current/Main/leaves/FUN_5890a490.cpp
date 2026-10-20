// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A490 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_5890a490() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5890a528
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [esi + 24h]
        mov dword ptr [esp + 4], 0
        mov dword ptr [esp + 8], 0
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5890a4d7
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [eax]
        push 0
        lea edx, [esp + 8]
        push edx
        push 1
        push edx
        push eax
        mov eax, dword ptr [ecx + 38h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 1ch]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5890a503
        __asm _emit 0x74
        __asm _emit 0x1a
        push -1
        push eax
        ; Exact mapped bytes FF 15 28 C1 98 58: call dword ptr [0x5898c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 18h]
        push eax
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 18h], 0
        lea ecx, [esi + 14h]
        push ecx
        push 0
        push esi
        push 5890a190h
        push 0
        push 0
        ; Exact mapped bytes FF 15 30 C1 98 58: call dword ptr [0x5898c130]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 18h], eax
        mov eax, 1
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
