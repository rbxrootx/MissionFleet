// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E046 .. +0x51B bytes.
extern "C" __declspec(naked) void FUN_0055e046_0055E046() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f0e0h
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
        ; Exact mapped bytes 75 1A: jne 0x55e09f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [eax + 64h]
        or ch, 30h
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes E9 61 02 00 00: jmp 0x55e300
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 57 02 00 00: jne 0x55e300
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
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 08 02 00 00: jne 0x55e2f3
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
        push 67b454h
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E3 01 00 00: jne 0x55e2f3
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
        ; Exact mapped bytes FF 15 AC B2 68 00: call dword ptr [0x68b2ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 93 01 00 00: jne 0x55e2e6
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
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 64 01 00 00: jne 0x55e2e1
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
        push 67b45ch
        mov eax, dword ptr [ebp - 134h]
        push eax
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x55e1c9
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 138h]
        push ecx
        push 20019h
        push 0
        push 67b468h
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 18 01 00 00: jne 0x55e2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        push ecx
        push 20019h
        push 0
        push 67b474h
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x55e2d4
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
        ; Exact mapped bytes 75 0C: jne 0x55e247
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes EB 4E: jmp 0x55e295
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 31 7D F0 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], esp
        mov edx, dword ptr [ebp - 160h]
        push edx
        mov eax, dword ptr [ebp - 15ch]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        push ecx
        ; Exact mapped bytes E8 61 F3 EE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf3
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        lea edx, [ebp - 158h]
        push edx
        mov eax, dword ptr [ebp - 1a0h]
        push eax
        ; Exact mapped bytes FF 15 C0 C2 68 00: call dword ptr [0x68c2c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc2
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 87 FC FF FF: call 0x55df4e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 2A FE FF FF: jmp 0x55e110
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 198h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 198h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1E: je 0x55e342
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
        ; Exact mapped bytes 0F 85 AF 01 00 00: jne 0x55e512
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 6D 02 00 00: call 0x55e5db
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x55e512
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 91 01 00 00: jne 0x55e512
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
        ; Exact mapped bytes 75 0C: jne 0x55e3da
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes EB 4E: jmp 0x55e428
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 180h]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 184h], eax
        mov eax, dword ptr [ebp - 184h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 9E 7B F0 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], esp
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        mov edx, dword ptr [ebp - 180h]
        push edx
        mov eax, dword ptr [ebp - 1ach]
        push eax
        ; Exact mapped bytes E8 CE F1 EE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        lea ecx, [ebp - 178h]
        push ecx
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        ; Exact mapped bytes FF 15 6C C2 68 00: call dword ptr [0x68c26c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x55e4e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 B8 68 FC FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 178h]
        push eax
        lea ecx, [ebp - 188h]
        push ecx
        ; Exact mapped bytes E8 03 03 F8 FF: call 0x4de76c
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 188h]
        push edx
        push 67b480h
        lea eax, [ebp - 18ch]
        push eax
        ; Exact mapped bytes E8 21 37 F4 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x37
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 190h]
        push ecx
        push 1
        push 0
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 0C 69 FC FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x55e4c5
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 190h]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 17ch], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 18 E4 F6 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 06 E4 F6 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 75 23: jne 0x55e512
        __asm _emit 0x75
        __asm _emit 0x23
        push -1
        push 15h
        push 0f184h
        ; Exact mapped bytes E8 2C 86 F9 FF: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 75 05: jne 0x55e50b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 37 FE FF FF: jmp 0x55e342
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
        ; Exact mapped bytes E8 82 DF F6 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xdf
        __asm _emit 0xf6
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
