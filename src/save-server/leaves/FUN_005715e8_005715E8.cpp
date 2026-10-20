// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005715E8 .. +0x274 bytes.
extern "C" __declspec(naked) void FUN_005715e8_005715E8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f274h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 120h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x571623
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d9h
        push 67bd60h
        ; Exact mapped bytes E8 22 77 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571623
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x571609
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x571649
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x571649
        __asm _emit 0x75
        __asm _emit 0x14
        push 1dah
        push 67bd60h
        ; Exact mapped bytes E8 FC 76 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571649
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x571629
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B0 36 FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A1 36 FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp + 18h], 80000000h
        ; Exact mapped bytes 75 14: jne 0x57168e
        __asm _emit 0x75
        __asm _emit 0x14
        lea edx, [ebp - 1ch]
        push edx
        push 67be14h
        push 80000000h
        ; Exact mapped bytes FF 15 A8 B2 68 00: call dword ptr [0x68b2a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x57180f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 18h], 80000000h
        ; Exact mapped bytes 75 0C: jne 0x5716c7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x5716c7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CE: jmp 0x571695
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 2E 35 F9 FF: call 0x504c1e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 19 35 F9 FF: call 0x504c1e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 18h], 80000000h
        ; Exact mapped bytes 75 22: jne 0x571730
        __asm _emit 0x75
        __asm _emit 0x22
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 76 36 FB FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x571730
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 67be1ch
        ; Exact mapped bytes E8 ED EE F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x571695
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 7A: jne 0x5717b0
        __asm _emit 0x75
        __asm _emit 0x7a
        mov dword ptr [ebp - 28h], 100h
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 128h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5A 36 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes FF 15 B8 B2 68 00: call dword ptr [0x68b2b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 51: jne 0x5717b0
        __asm _emit 0x75
        __asm _emit 0x51
        lea eax, [ebp - 128h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 E7 38 FB FF: call 0x525056
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5717ab
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2A 36 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 128h]
        push edx
        push 67be40h
        ; Exact mapped bytes E8 83 EE F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0D 36 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 67be78h
        ; Exact mapped bytes E8 6D EE F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 E5 FE FF FF: jmp 0x571695
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F2 35 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E2 35 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D7 35 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes FF 15 B4 B2 68 00: call dword ptr [0x68b2b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x57180a
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C0 35 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B7 35 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x35
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        push 67be94h
        ; Exact mapped bytes E8 17 EE F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 05: jmp 0x57180f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 86 FE FF FF: jmp 0x571695
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0A: je 0x57181f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 12ch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B8 B0 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A9 B0 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
