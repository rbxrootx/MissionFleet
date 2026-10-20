// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855C710 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_5855c710_5855C710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C F8 F2 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 82 F2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 7F F6 FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 05: jne 0x5855c740
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CC 01 00 00: jmp 0x5855c90c
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 4
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2B B9 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855c767
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 38h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1A B3 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb3
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, 4
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 14 BA F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4B B2 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x5855c85a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A8 B2 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 82 F2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 24: jne 0x5855c7d2
        __asm _emit 0x75
        __asm _emit 0x24
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8A B2 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 8], 1
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 79 B2 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [eax + 4], 0
        ; Exact mapped bytes EB 86: jmp 0x5855c758
        __asm _emit 0xeb
        __asm _emit 0x86
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 66 B2 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 51: je 0x5855c833
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 3E: jne 0x5855c831
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF F5 25 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf5
        __asm _emit 0x25
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 24 B2 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        add ecx, 4
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        sub eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 22: jmp 0x5855c855
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5855c855
        __asm _emit 0x75
        __asm _emit 0x11
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F4 B1 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [eax + 8], 1
        ; Exact mapped bytes E9 FE FE FF FF: jmp 0x5855c758
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 11 B8 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x5855c885
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 44h]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 FC B1 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F6 B8 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2D B1 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 62: je 0x5855c90c
        __asm _emit 0x74
        __asm _emit 0x62
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8E B1 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 4D: jne 0x5855c907
        __asm _emit 0x75
        __asm _emit 0x4d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7E B1 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 3D: je 0x5855c907
        __asm _emit 0x74
        __asm _emit 0x3d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6E B1 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        push 0ch
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 52 47 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x47
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        add eax, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AC D6 F5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd6
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5855c90c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x5855c876
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
