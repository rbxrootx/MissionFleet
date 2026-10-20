// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F2D1 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_0043f2d1_0043F2D1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DC 94 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 40cb0h], 0
        ; Exact mapped bytes 74 0E: je 0x43f321
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 40cb0h]
        ; Exact mapped bytes E8 B3 48 FC FF: call 0x403bd4
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 94 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 76 05: jbe 0x43f33d
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x43f4a0
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 94 94 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 76 05: jbe 0x43f359
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x43f4a0
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 40ca8h], 0
        ; Exact mapped bytes 74 0E: je 0x43f373
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 D8 39 04 00: call 0x482d4b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5E 94 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 76 05: jbe 0x43f38f
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x43f4a0
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 40cc8h], 0
        ; Exact mapped bytes 74 20: je 0x43f3bb
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 40cc8h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 40cc8h]
        mov eax, dword ptr [edx]
        mov esi, esp
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 25 94 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 16 94 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 76 05: jbe 0x43f3d7
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x43f4a0
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ecx + 40c90h]
        mov eax, dword ptr [ebp - 18h]
        cmp edx, dword ptr [eax + 40c94h]
        ; Exact mapped bytes 72 2F: jb 0x43f41d
        __asm _emit 0x72
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 40c90h]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 40c94h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 40c90h], edx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 B1 41 FF FF: call 0x4335ce
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B4 93 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 C0 60 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 89 93 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 0C 00 00: call 0x440060
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 50h
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 3D 43 FC FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x43f496
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 C6 04 00: call 0x48bb8a
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov byte ptr [edx + 40cdch], 0
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 35 93 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
