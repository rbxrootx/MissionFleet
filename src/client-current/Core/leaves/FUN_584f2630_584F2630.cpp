// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F2630 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_584f2630_584F2630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3E 98 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x584f2653
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x584f27f8
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0ffffh
        ; Exact mapped bytes 75 0A: jne 0x584f2666
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x584f27f8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 3
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FE 59 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f2694
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 ED 53 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E7 5A F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1E 53 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x584f27f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7B 53 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 1E 01 00 00: jne 0x584f27f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 66 53 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x584f27f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 32 AA F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x584f27b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 42 53 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        movzx esi, word ptr [ecx + 18h]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 44 9A F9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 15: jne 0x584f2725
        __asm _emit 0x75
        __asm _emit 0x15
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 28 53 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x584f27b4
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 13 53 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 10h], 0ffffh
        ; Exact mapped bytes 74 55: je 0x584f278d
        __asm _emit 0x74
        __asm _emit 0x55
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 00 53 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 36 97 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [esi + 10h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 3A: jne 0x584f278b
        __asm _emit 0x75
        __asm _emit 0x3a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E7 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1D 97 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 14h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 20: jne 0x584f278b
        __asm _emit 0x75
        __asm _emit 0x20
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CD 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 10: je 0x584f278b
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BD 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 27: jmp 0x584f27b4
        __asm _emit 0xeb
        __asm _emit 0x27
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 AB 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 11 A8 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 10: jne 0x584f27b4
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 94 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 3A: jmp 0x584f27f0
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 82 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 10h], 0ffffh
        ; Exact mapped bytes 75 27: jne 0x584f27f0
        __asm _emit 0x75
        __asm _emit 0x27
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6F 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D5 A7 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa7
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 10: jne 0x584f27f0
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 58 52 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 90 FE FF FF: jmp 0x584f2685
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
