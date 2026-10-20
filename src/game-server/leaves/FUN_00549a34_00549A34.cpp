// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00549A34 .. +0x3DA bytes.
extern "C" __declspec(naked) void FUN_00549a34_00549A34() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e980h
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
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4
        ; Exact mapped bytes E8 21 91 FE FF: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x549a75
        __asm _emit 0x74
        __asm _emit 0x11
        push 7ch
        push 5cb84ch
        ; Exact mapped bytes E8 90 AF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549a75
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x549a55
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 84 74 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 75 74 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 6E BA FE FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 BF 65 FB FF: call 0x500064
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x65
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4
        ; Exact mapped bytes E8 DE 91 FE FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x549ac5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 13 03 00 00: je 0x549de2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4
        ; Exact mapped bytes E8 D2 91 FE FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1C 74 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 10 74 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 04 74 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 5
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 99 02 00 00: je 0x549db9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 64 74 FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 89 02 00 00: jne 0x549db9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x549b51
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F5 3E FA FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x3e
        __asm _emit 0xfa
        __asm _emit 0xff
        push 20h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 2A 48 FA FF: call 0x4ee385
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 14: je 0x549b74
        __asm _emit 0x74
        __asm _emit 0x14
        push 90h
        push 5cb84ch
        ; Exact mapped bytes E8 91 AE FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549b74
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x549b51
        __asm _emit 0x75
        __asm _emit 0xd7
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 28 74 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a88h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 CB 4D F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0E 74 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 8E FC FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x549bc7
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 CD 73 FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x549c4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 587a30h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D6 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587ac0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 79 4D F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BC 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 3C FC FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a30h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 A9 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587aach
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 4C 4D F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8F 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 0F FC FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a30h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 7C 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a98h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 1F 4D F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 62 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E2 FB FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a70h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 4F 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587ac0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 F2 4C F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 35 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B5 FB FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a70h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 22 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587aach
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 C5 4C F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 08 73 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 88 FB FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a70h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 F5 72 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a98h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 98 4C F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 DB 72 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 5B FB FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 9E 72 FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x549db9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 83 74 FE FF: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        cmp eax, 2eh
        ; Exact mapped bytes 74 14: je 0x549d1c
        __asm _emit 0x74
        __asm _emit 0x14
        push 0bbh
        push 5cb84ch
        ; Exact mapped bytes E8 E9 AC FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549d1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x549cf6
        __asm _emit 0x75
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], 208h
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BF 42 FA FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 68 72 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 28 1E 5E 00: call dword ptr [0x5e1e28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        push -1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D8 43 FA FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 22: jne 0x549d83
        __asm _emit 0x75
        __asm _emit 0x22
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 23 72 FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x549d83
        __asm _emit 0x75
        __asm _emit 0x16
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 71 74 FE FF: call 0x5311eb
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x549db9
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1F 72 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a7ch
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 C2 4B F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4b
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 05 72 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 85 FA FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F7 71 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 77 FA FF FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 87 3A FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 7B 3A FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 6F 3A FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 DA FC FF FF: jmp 0x549abc
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5E 3A FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 4F 3A FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
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
        ret
    }
}
