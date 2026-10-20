// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055AFC6 .. +0x51B bytes.
extern "C" __declspec(naked) void FUN_0055afc6_0055AFC6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f600h
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
        sub esp, 1a0h
        mov dword ptr [ebp - 198h], ecx
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 18h], 0
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 1A: jne 0x55b01f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [eax + 64h]
        or ch, 30h
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes E9 61 02 00 00: jmp 0x55b280
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 57 02 00 00: jne 0x55b280
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [eax + 64h]
        or ch, 5
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [edx + 64h], ecx
        mov dword ptr [ebp - 13ch], 0
        lea eax, [ebp - 140h]
        push eax
        push 20019h
        push 0
        push 0
        push 80000000h
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 08 02 00 00: jne 0x55b273
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 130h]
        push ecx
        push 8
        push 0
        push 5cec7ch
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E3 01 00 00: jne 0x55b273
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 105h
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 19ch], ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 1
        mov dword ptr [ebp - 13ch], ecx
        ; Exact mapped bytes FF 15 1C 1E 5E 00: call dword ptr [0x5e1e1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 93 01 00 00: jne 0x55b266
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 134h]
        push edx
        push 20019h
        push 0
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 64 01 00 00: jne 0x55b261
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 138h]
        push edx
        push 20019h
        push 0
        push 5cec84h
        mov eax, dword ptr [ebp - 134h]
        push eax
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x55b149
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 138h]
        push ecx
        push 20019h
        push 0
        push 5cec90h
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 18 01 00 00: jne 0x55b261
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        push ecx
        push 20019h
        push 0
        push 5cec9ch
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x55b254
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], 0
        mov dword ptr [ebp - 148h], 0
        mov dword ptr [ebp - 144h], 0
        mov dword ptr [ebp - 15ch], 0
        lea eax, [ebp - 12ch]
        mov dword ptr [ebp - 15ch], eax
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 75 0C: jne 0x55b1c7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes EB 4E: jmp 0x55b215
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D1 E5 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], esp
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov eax, dword ptr [ebp - 15ch]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        push ecx
        ; Exact mapped bytes E8 B1 5D F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        lea edx, [ebp - 158h]
        push edx
        mov eax, dword ptr [ebp - 1a0h]
        push eax
        ; Exact mapped bytes FF 15 9C 2A 5E 00: call dword ptr [0x5e2a9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 158h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 87 FC FF FF: call 0x55aece
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 2A FE FF FF: jmp 0x55b090
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1E: je 0x55b2c2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 9ch], ecx
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 0F 85 AF 01 00 00: jne 0x55b492
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 6D 02 00 00: call 0x55b55b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x55b492
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 91 01 00 00: jne 0x55b492
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 184h], 0
        mov dword ptr [ebp - 168h], 0
        mov dword ptr [ebp - 164h], 0
        mov dword ptr [ebp - 180h], 0
        mov dword ptr [ebp - 17ch], 0
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 180h], edx
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 75 0C: jne 0x55b35a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes EB 4E: jmp 0x55b3a8
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 180h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 184h], eax
        mov eax, dword ptr [ebp - 184h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 3E E4 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe4
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], esp
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        mov edx, dword ptr [ebp - 180h]
        push edx
        mov eax, dword ptr [ebp - 1ach]
        push eax
        ; Exact mapped bytes E8 1E 5C F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        lea ecx, [ebp - 178h]
        push ecx
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        ; Exact mapped bytes FF 15 34 2A 5E 00: call dword ptr [0x5e2a34]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x55b466
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 38 5B FD FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 178h]
        push eax
        lea ecx, [ebp - 188h]
        push ecx
        ; Exact mapped bytes E8 83 42 FA FF: call 0x4ff66c
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x42
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 188h]
        push edx
        push 5ceca8h
        lea eax, [ebp - 18ch]
        push eax
        ; Exact mapped bytes E8 57 35 F7 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x35
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 190h]
        push ecx
        push 1
        push 0
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 8C 5B FD FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x55b445
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 190h]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 17ch], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 F8 23 F9 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 E6 23 F9 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x23
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 75 23: jne 0x55b492
        __asm _emit 0x75
        __asm _emit 0x23
        push -1
        push 15h
        push 0f184h
        ; Exact mapped bytes E8 4C 24 FB FF: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 75 05: jne 0x55b48b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 37 FE FF FF: jmp 0x55b2c2
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 2
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        ; Exact mapped bytes E8 62 1F F9 FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 9ch], eax
        mov ecx, dword ptr [ebp - 198h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 10h]
        lea esp, [ebp - 1ach]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
