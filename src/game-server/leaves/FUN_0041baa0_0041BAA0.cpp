// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041BAA0 .. +0x4E4 bytes.
extern "C" __declspec(naked) void FUN_0041baa0_0041BAA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579e09h
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
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 65 D5 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 60 0C 00 00: call 0x41c750
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 54 F4 FF FF: call 0x41af50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 34 2F 5D 00: mov edx, dword ptr [0x5d2f34]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 50 F4 FF FF: call 0x41af60
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 0D 34 2F 5D 00: mov ecx, dword ptr [0x5d2f34]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 48 F4 FF FF: call 0x41af70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7C 0C 00 00: call 0x41c7b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 39: je 0x41bb87
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 05 34 2F 5D 00: cmp eax, dword ptr [0x5d2f34]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 2E: jne 0x41bb87
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 BE F3 FF FF: call 0x41af20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2E F3 FF FF: call 0x41aea0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        ; Exact mapped bytes E8 42 F3 FF FF: call 0x41aec0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x41bbdd
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 C0 F3 FF FF: call 0x41af50
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 1C: jne 0x41bbbf
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 45 04 00 00: call 0x41bff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 08 04 00 00: call 0x41bfc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 1C: jmp 0x41bbdb
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C9 03 00 00: call 0x41bf90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0D: jne 0x41bbdb
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BA 03 00 00: call 0x41bf90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 2D: jmp 0x41bc0a
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 7A F3 FF FF: call 0x41af60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CA 03 00 00: call 0x41bfc0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0D: jne 0x41bc0a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BB 03 00 00: call 0x41bfc0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 0ch], edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D8 03 00 00: call 0x41bff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 84 08 03 00 00: je 0x41bf2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 74 05 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 59 05 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 E8 02 00 00: jne 0x41bf2b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 54 05 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 46 05 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 3B 05 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 E0 F2 FF FF: call 0x41af50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [esi]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x41bdd4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 1A 05 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 0F 05 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 C4 F2 FF FF: call 0x41af60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 E3 04 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 78: jne 0x41bd2d
        __asm _emit 0x75
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 E2 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 C7 04 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 B5 04 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B3 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 A8 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 8D 04 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 8B 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 80 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x41bdcf
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 6A 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 1F F2 FF FF: call 0x41af60
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 1D: jne 0x41bd68
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 4C 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 88 05 00 00: call 0x41c2f0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 2F 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 14 04 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 12 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 07 04 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 EC 03 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 EA 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 DF 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F1 07 00 00: call 0x41c5c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x41bf26
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 C3 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 B8 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 5D F1 FF FF: call 0x41af50
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 8C 03 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 78: jne 0x41be84
        __asm _emit 0x75
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 8B 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 70 03 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 5E 03 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5C 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 51 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 36 03 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 34 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 29 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x41bf26
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 13 03 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 B8 F0 FF FF: call 0x41af50
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 1D: jne 0x41bebf
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 F5 02 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 01 07 00 00: call 0x41c5c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D8 02 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 BD 02 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 BB 02 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 B0 02 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 95 02 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 93 02 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 88 02 00 00: call 0x41c1a0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CA 03 00 00: call 0x41c2f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E5 FC FF FF: jmp 0x41bc10
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BD 00 00 00: call 0x41bff0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 55 02 00 00: call 0x41c190
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 E0 01 00 00: call 0x41c130
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA D1 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 62 C8 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
