// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005725D6 .. +0x296 bytes.
extern "C" __declspec(naked) void FUN_005725d6_005725D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 0eah
        push 67cd14h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 6B 7C F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x572620
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 8
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5E 0E F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x572620
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ebh
        push 67cd14h
        ; Exact mapped bytes E8 25 67 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572620
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x5725f5
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x572651
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 2D 0E F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x572651
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ech
        push 67cd14h
        ; Exact mapped bytes E8 F4 66 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572651
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x572626
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x572682
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 FC 0D F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x572682
        __asm _emit 0x75
        __asm _emit 0x14
        push 0eeh
        push 67cd14h
        ; Exact mapped bytes E8 C3 66 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572682
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x572657
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 56 66 00 00: call 0x578ce6
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 50: jne 0x5726e4
        __asm _emit 0x75
        __asm _emit 0x50
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 43: je 0x5726dd
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5726b4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f4h
        push 67cd14h
        ; Exact mapped bytes E8 91 66 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5726b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x57269a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        xor eax, eax
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x572863
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fbh
        push 67cd14h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0c0h]
        push eax
        ; Exact mapped bytes E8 63 7B F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 9D F4 FB FF: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 25: jne 0x572730
        __asm _emit 0x75
        __asm _emit 0x25
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 0c0h]
        add ecx, 104h
        ; Exact mapped bytes E8 BA FB FB FF: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 1D: jmp 0x57274d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 0ch]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        push 0
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 57 F4 FB FF: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 68 FB FF FF: call 0x5722c9
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 10eh
        push 67cd14h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 E9 7A F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        push 63c7a0h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0C 7A F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57279c
        __asm _emit 0x75
        __asm _emit 0x14
        push 10fh
        push 67cd14h
        ; Exact mapped bytes E8 A9 65 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x65
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57279c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x572777
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 06: je 0x5727bf
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5727d0
        __asm _emit 0x75
        __asm _emit 0x11
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        lea eax, [ebp - 14h]
        push eax
        xor ecx, ecx
        ; Exact mapped bytes E8 48 A2 FA FF: call 0x51ca23
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 06: je 0x5727e7
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1E: jne 0x572805
        __asm _emit 0x75
        __asm _emit 0x1e
        push 67cd3ch
        push 67cd7ch
        ; Exact mapped bytes E8 1F DE F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xde
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3C: je 0x572847
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x572825
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 67cd14h
        ; Exact mapped bytes E8 20 65 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x65
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572825
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57280b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0F F4 FB FF: call 0x531c72
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
