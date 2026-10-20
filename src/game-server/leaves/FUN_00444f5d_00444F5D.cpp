// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00444F5D .. +0x412 bytes.
extern "C" __declspec(naked) void FUN_00444f5d_00444F5D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 454h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 454h]
        mov ecx, 115h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 450h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 454h], eax
        mov ecx, dword ptr [ebp - 454h]
        sub ecx, 67h
        mov dword ptr [ebp - 454h], ecx
        cmp dword ptr [ebp - 454h], 4
        ; Exact mapped bytes 0F 87 A0 03 00 00: ja 0x445347
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 454h]
        ; Exact mapped bytes FF 24 95 6F 53 44 00: jmp dword ptr [edx*4 + 0x44536f]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x6f
        __asm _emit 0x53
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x444fc6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 340h
        ; Exact mapped bytes E8 6A 28 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 43: jge 0x44501f
        __asm _emit 0x7d
        __asm _emit 0x43
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 340h
        ; Exact mapped bytes E8 5F 36 09 00: call 0x4d8652
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x44501d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 340h
        ; Exact mapped bytes E8 2E FA 08 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x44501d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 80 20 04 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 9E: jmp 0x444fbd
        __asm _emit 0xeb
        __asm _emit 0x9e
        ; Exact mapped bytes E9 23 03 00 00: jmp 0x445347
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov dword ptr [ebp - 0ch], 1014h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 5b67e4h
        ; Exact mapped bytes E8 46 88 0C 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x4450d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 450h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 CB C2 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 73: je 0x4450d1
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 450h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 B1 C2 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 48: jne 0x4450bc
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 C2 FB FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x44508c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 57 C2 FB FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 28: je 0x4450ba
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 14h]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 450h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 00 A0 FF FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4450b8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 1F 04 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB C7: jmp 0x445081
        __asm _emit 0xeb
        __asm _emit 0xc7
        ; Exact mapped bytes EB 08: jmp 0x4450c4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 06 4E 04 00: call 0x489eca
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E4 EE FB FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 87: jmp 0x445058
        __asm _emit 0xeb
        __asm _emit 0x87
        ; Exact mapped bytes E9 71 02 00 00: jmp 0x445347
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4450e8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 37ch
        ; Exact mapped bytes E8 48 27 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x4451d0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 37ch
        ; Exact mapped bytes E8 39 35 09 00: call 0x4d8652
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x4451cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 37ch
        ; Exact mapped bytes E8 04 F9 08 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 450h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 D6 C1 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 75 48: jne 0x445197
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A9 C1 FB FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 0B: jmp 0x445167
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7C C1 FB FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 28: je 0x445195
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 20h]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 450h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 25 9F FF FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x445193
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0A 1F 04 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB C7: jmp 0x44515c
        __asm _emit 0xeb
        __asm _emit 0xc7
        ; Exact mapped bytes EB 39: jmp 0x4451d0
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 31 EE FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 1B: jne 0x4451c1
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 42 53 FF FF: call 0x43a503
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 01 4D 04 00: call 0x489eca
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4451d0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x4450df
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 72 01 00 00: jmp 0x445347
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x4451e7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 37ch
        ; Exact mapped bytes E8 49 26 09 00: call 0x4d7841
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 0F 8D 46 01 00 00: jge 0x445347
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 37ch
        ; Exact mapped bytes E8 24 F8 08 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AF ED FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x445342
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CC C0 FB FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0B: jmp 0x445244
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9F C0 FB FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x445342
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 0fch], 8
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x44533d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 444h], 7fh
        mov dword ptr [ebp - 448h], 0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 44ch], ecx
        lea edx, [ebp - 444h]
        push edx
        lea eax, [ebp - 448h]
        push eax
        lea ecx, [ebp - 44ch]
        push ecx
        ; Exact mapped bytes E8 1F E5 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x44533d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 0d74h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 F9 4F FC FF: call 0x40a2c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x44533d
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 8C 01 E4 6B 01 00: mov cx, word ptr [ecx + eax + 0x16be4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D C8 FB FF FF: mov word ptr [ebp - 0x438], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 434h], 1
        mov dword ptr [ebp - 43ch], 80020700h
        mov byte ptr [ebp - 430h], 4fh
        sub esp, 410h
        mov ecx, 104h
        lea esi, [ebp - 440h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 0d74h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 A3 4F FC FF: call 0x40a2e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 FE FF FF: jmp 0x445239
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 97 FE FF FF: jmp 0x4451de
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 99 F5 0A 00: call 0x4f48f3
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 454h
        cmp ebp, esp
        ; Exact mapped bytes E8 77 34 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
