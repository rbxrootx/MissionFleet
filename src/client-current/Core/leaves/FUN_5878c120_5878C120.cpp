// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C120 .. +0x2A5 bytes.
extern "C" __declspec(naked) void FUN_5878c120_5878C120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        push esi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7E FF FF FF: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 65 51 D1 FF: call 0x584a12a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x51
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD 02 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 76 0F: jbe 0x5878c157
        __asm _emit 0x76
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 02 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5878c15e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A4 02 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [eax]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 06: jb 0x5878c17c
        __asm _emit 0x72
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 73 20: jae 0x5878c19c
        __asm _emit 0x73
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BC 05 00 00: call 0x5878c740
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 06: jae 0x5878c192
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 AF 04 00 00: call 0x5878c640
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB C8: jmp 0x5878c164
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 02 00 00: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 1]
        push edx
        ; Exact mapped bytes E8 EE F5 FF FF: call 0x5878b7b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        lea edx, [ecx + eax*4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 24h]
        shr eax, 1
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 77 0A: ja 0x5878c1e8
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB EC: jmp 0x5878c1d4
        __asm _emit 0xeb
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 02 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [eax]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA 01 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E0 01 00 00: call 0x5878c3f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        lea edx, [ecx + eax*4]
        mov dword ptr [ebp - 30h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B0 01 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [eax + ecx*4]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 34 FA FF FF: call 0x5878bc70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 77 5F: ja 0x5878c2a9
        __asm _emit 0x77
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7E 01 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        lea eax, [ecx + edx*4]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6B 01 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 F5 F9 FF FF: call 0x5878bc70
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 3F F9 FF FF: call 0x5878bbd0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 2F F9 FF FF: call 0x5878bbd0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5878c32a
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F 01 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        lea edx, [eax + ecx*4]
        mov dword ptr [ebp - 40h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0C 01 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 96 F9 FF FF: call 0x5878bc70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EB 00 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        lea eax, [ecx + edx*4]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 00 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 28h]
        lea eax, [ecx + edx*4]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 5C F9 FF FF: call 0x5878bc70
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 A9 F8 FF FF: call 0x5878bbd0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9E 00 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 62: je 0x5878c399
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 91 00 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 00 00 00: call 0x5878c3f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        lea edx, [ecx + eax*4]
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 77 00 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 A5 AB CF FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xab
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9A 00 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 00 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 D8 BD CF FF: call 0x58488170
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbd
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F 00 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 62 00 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx], eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
