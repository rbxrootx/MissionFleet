// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58607720 .. +0x2BA bytes.
extern "C" __declspec(naked) void FUN_58607720_58607720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 DC FF FF: call 0x586053a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 3
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 62 E0 E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 3A 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F DC FF FF: call 0x586053a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 2F E0 E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 00 3A 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x3a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC DB FF FF: call 0x586053a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 FC DF E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CD 39 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x39
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 DB FF FF: call 0x586053a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 C9 DF E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9A 39 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x39
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 F1 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 4C E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 D8 E9 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 69 39 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x39
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 F1 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE 4B E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 7F EA FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 38 39 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x39
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 F1 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 4B E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x4b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 D8 E9 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd8
        __asm _emit 0xe9
        __asm _emit 0xff
        imul esi, eax, 37h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 F1 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE 4B E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 7E EA FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        xor edx, edx
        div ecx
        mov edx, 37h
        sub edx, eax
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 89 7F E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 F0 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB DA FF FF: call 0x58605380
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 55555555h
        imul esi, eax, 72h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD F0 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 4B E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x4b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 7E EA FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        xor edx, edx
        div ecx
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8F DD 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 F0 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 DA FF FF: call 0x58605380
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        xor edx, 55555555h
        imul esi, edx, 72h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 F0 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB 4A E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x4a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 7D EA FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        xor edx, edx
        div ecx
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 24 DD 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xdd
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D F0 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 4A E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF 98 FB FF: call 0x585c1290
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        imul eax, eax, 37h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 98h]
        mov edx, 37h
        sub edx, eax
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 6C 7E E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7e
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
