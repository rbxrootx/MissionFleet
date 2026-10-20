// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855C970 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_5855c970_5855C970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC F5 F2 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 80 F2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x5855ca49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD F5 F2 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 80 F2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3F 7D F6 FF: call 0x584c46f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5855ca49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AD B6 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855c9e5
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 9C B0 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb0
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 96 B7 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb7
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 CD AF F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x5855ca49
        __asm _emit 0x74
        __asm _emit 0x3f
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 2E B0 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb0
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 61 80 F2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x5855ca47
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5855ca47
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 8D: jmp 0x5855c9d6
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 22 B6 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855ca70
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 38h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 11 B0 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb0
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 28h], ecx
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0B B7 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb7
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 42 AF F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5855cab2
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A3 AF F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xaf
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        push 0ch
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 87 45 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x45
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB AF: jmp 0x5855ca61
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        ; Exact mapped bytes E8 33 B6 F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
