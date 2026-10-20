// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888D9B0 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_5888d9b0() {
    __asm {
        sub esp, 24h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 20h], eax
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 5f4h]
        lea eax, [eax + eax*2]
        cmp byte ptr [esi + eax*8 + 504h], 0
        lea ecx, [esi + eax*8 + 504h]
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5888daba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push edi
        push ecx
        lea ecx, [esp + 0ch]
        push 5899fdc0h
        push ecx
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 66 89 44 24 30: mov word ptr [esp + 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 150h]
        add esp, 0ch
        ; Exact mapped bytes E8 1E 1F ED FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1f
        __asm _emit 0xed
        __asm _emit 0xff
        mov esi, dword ptr [esi + 150h]
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 8B 3D 98 C1 98 58: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea edx, [esp + 8]
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 80h]
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x5888da45
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 20d30h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 74 48: je 0x5888dab9
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20d30h]
        ; Exact mapped bytes E8 BF 1E ED FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 20d30h]
        mov eax, dword ptr [esi + 80h]
        lea edx, [esp + 8]
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 80h]
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x5888daa4
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 94h], eax
        pop edi
        mov ecx, dword ptr [esp + 24h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 14 F1 0E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 24h
        ret
    }
}
