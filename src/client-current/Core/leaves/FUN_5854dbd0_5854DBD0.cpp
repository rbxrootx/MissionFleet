// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854DBD0 .. +0x1EC bytes.
extern "C" __declspec(naked) void FUN_5854dbd0_5854DBD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        ; Exact mapped bytes E8 7B 02 00 00: call 0x5854de60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x5854dd2f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 64h]
        add esi, 3e8h
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp esi, eax
        ; Exact mapped bytes 0F 83 25 01 00 00: jae 0x5854dd2f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 E2 FC FF FF: call 0x5854d900
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DA FC FF FF: call 0x5854d900
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EE 59 F5 FF: call 0x584a3630
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 54h
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D4 59 F5 FF: call 0x584a3630
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x59
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 1D: jmp 0x5854dc80
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1F 44 FB FF: call 0x58502090
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 11 44 FB FF: call 0x58502090
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 5ch
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DB 5A F5 FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x5a
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 82 49 F5 FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x49
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5854dd2f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 0F 4A F5 FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 01 4A F5 FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x4a
        __asm _emit 0xf5
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        xor edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 D4 49 F5 FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x49
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 4], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C6 49 F5 FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x49
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B8 49 F5 FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x49
        __asm _emit 0xf5
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        xor edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x5854dc63
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5854dd50
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5854dd50
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5854ddb9
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5854dd73
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5854dd59
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 95 78 F4 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5854dd97
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5854ddb9
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5854ddb7
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 71 78 F4 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x5854dd59
        __asm _emit 0xeb
        __asm _emit 0xa0
        pop esi
        mov esp, ebp
    }
}
