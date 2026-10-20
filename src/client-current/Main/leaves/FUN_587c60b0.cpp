// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C60B0 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_587c60b0() {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp + 18h]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 4ch], 0
        mov ecx, dword ptr [esp + 20h]
        push edi
        mov edi, dword ptr [esp + 18h]
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x587c6175
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 04 F8 FF FF: call 0x587c58e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x587c6175
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4ch]
        lea edx, [esp + 8]
        push edx
        push eax
        ; Exact mapped bytes E8 DA 6E 1B 00: call 0x5897cfcc
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 7C: jne 0x587c6175
        __asm _emit 0x75
        __asm _emit 0x7c
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x587c6110
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 4ch]
        push 1
        push edi
        push ecx
        ; Exact mapped bytes E8 BD 6E 1B 00: call 0x5897cfc6
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 65: jne 0x587c6175
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [esi + 4ch]
        lea edx, [esp + 8]
        push edx
        push eax
        ; Exact mapped bytes E8 A2 6E 1B 00: call 0x5897cfc0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 50: jne 0x587c6175
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esi + 20h]
        mov dword ptr [esi + 44h], ecx
        lea ecx, [esi + 40h]
        cmp dword ptr [edx], ecx
        ; Exact mapped bytes 75 19: jne 0x587c614f
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esi + 20h]
        lea eax, [esi + 41h]
        mov edx, esi
        sub edx, eax
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esi + 30h]
        add edx, 41h
        mov dword ptr [eax], edx
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esi + 44h]
        pop edi
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [eax + 10h], ecx
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 15 28 2F 9A 58: mov edx, dword ptr [0x589a2f28]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0x58
        pop edi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 8], 0
        mov dword ptr [eax + 0ch], 0
        mov dword ptr [eax + 10h], 0
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
