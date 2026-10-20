// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407AD9 .. +0x849 bytes.
extern "C" __declspec(naked) void FUN_00407ad9_00407AD9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 458h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 458h]
        mov ecx, 116h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 458h], ecx
        mov eax, dword ptr [ebp - 458h]
        add eax, 5ch
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C9 0C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2dh
        ; Exact mapped bytes 7E 05: jle 0x407b21
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 EC 07 00 00: jmp 0x40830d
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 404h], 5
        ; Exact mapped bytes EB 0F: jmp 0x407b3c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 404h]
        add ecx, 1
        mov dword ptr [ebp - 404h], ecx
        mov edx, dword ptr [ebp - 458h]
        add edx, 5ch
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8B 0C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 404h], eax
        ; Exact mapped bytes 0F 8D AC 07 00 00: jge 0x40830d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 458h]
        add eax, dword ptr [ebp - 404h]
        ; Exact mapped bytes 0F BE 48 5C: movsx ecx, byte ptr [eax + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x5c
        cmp ecx, 20h
        ; Exact mapped bytes 0F 85 8E 07 00 00: jne 0x408308
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 404h]
        add esi, 1
        mov edx, dword ptr [ebp - 458h]
        add edx, 5ch
        mov edi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 44 0C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8D 64 07 00 00: jge 0x408308
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 404h]
        add eax, 1
        mov dword ptr [ebp - 408h], eax
        ; Exact mapped bytes EB 0F: jmp 0x407bc4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 408h]
        add ecx, 1
        mov dword ptr [ebp - 408h], ecx
        mov edx, dword ptr [ebp - 458h]
        add edx, 5ch
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 03 0C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 408h], eax
        ; Exact mapped bytes 0F 8D 1D 07 00 00: jge 0x408306
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 458h]
        add eax, dword ptr [ebp - 408h]
        ; Exact mapped bytes 0F BE 48 5C: movsx ecx, byte ptr [eax + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x5c
        cmp ecx, 20h
        ; Exact mapped bytes 0F 85 FF 06 00 00: jne 0x408301
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 408h]
        add esi, 1
        mov edx, dword ptr [ebp - 458h]
        add edx, 5ch
        mov edi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 BC 0B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8D D5 06 00 00: jge 0x408301
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 408h]
        sub eax, dword ptr [ebp - 404h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 404h]
        mov edx, dword ptr [ebp - 458h]
        lea eax, [edx + ecx + 5dh]
        push eax
        lea ecx, [ebp - 428h]
        push ecx
        ; Exact mapped bytes E8 C7 13 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 408h]
        sub edx, dword ptr [ebp - 404h]
        mov byte ptr [ebp + edx - 429h], 0
        mov eax, dword ptr [ebp - 458h]
        add eax, 5ch
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 57 0B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 408h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 408h]
        mov edx, dword ptr [ebp - 458h]
        lea eax, [edx + ecx + 5dh]
        push eax
        lea ecx, [ebp - 448h]
        push ecx
        ; Exact mapped bytes E8 70 13 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 458h]
        add edx, 5ch
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 14 0B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 408h]
        mov byte ptr [ebp + eax - 449h], 0
        lea eax, [ebp - 448h]
        push eax
        ; Exact mapped bytes E8 4A 19 0A 00: call 0x4a9630
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 450h], eax
        lea ecx, [ebp - 428h]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 A8 73 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 44ch], eax
        cmp dword ptr [ebp - 44ch], 0
        ; Exact mapped bytes 0F 84 41 05 00 00: je 0x408258
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        mov eax, dword ptr [ebp - 458h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 95 92 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 86 04 00 00: je 0x4081c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 42 27 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 454h], eax
        cmp dword ptr [ebp - 450h], 0
        ; Exact mapped bytes 0F 8E D3 03 00 00: jle 0x408134
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        sub ecx, dword ptr [ebp - 450h]
        cmp ecx, 64h
        ; Exact mapped bytes 7C 18: jl 0x407d90
        __asm _emit 0x7c
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        cmp ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes 0F 8D 94 00 00 00: jge 0x407e24
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 64h
        push 5a0724h
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 30 0A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes E8 14 16 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x16
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea ecx, [ebp - 400h]
        push ecx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 EE 91 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 A8 26 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 79 26 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 458h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 F4 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 0B 03 00 00: jmp 0x40812f
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        add edx, dword ptr [ebp - 450h]
        test edx, edx
        ; Exact mapped bytes 0F 8E 61 02 00 00: jle 0x4080a2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, dword ptr [ebp - 450h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 3C A8 07 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 450h]
        push edx
        lea eax, [ebp - 428h]
        push eax
        push 5a0778h
        lea ecx, [ebp - 400h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 3B 09 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes E8 1F 15 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 400h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 F9 90 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 B3 25 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 84 25 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E F3 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 F2 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        add ecx, dword ptr [ebp - 450h]
        mov edx, dword ptr [ebp - 44ch]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44ch]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 33 A7 07 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF B9 FF FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 B9 FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        mov ecx, dword ptr [ebp - 450h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 5a0798h
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 19 08 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 454h]
        push ecx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 D4 24 00 00: call 0x40a4b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes E8 E8 13 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 400h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 C2 8F 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 7C 24 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 4D 24 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 E4 F1 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 44ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 44ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 AE F1 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 BA B8 FF FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 B8 FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x40812f
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a07bch
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 20 07 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes E8 04 13 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea ecx, [ebp - 400h]
        push ecx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 DE 8E 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 98 23 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 69 23 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 458h]
        mov eax, dword ptr [edx + 460h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        mov edx, dword ptr [ecx + 45ch]
        push edx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 F1 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x4081c1
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a07fch
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 8E 06 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 400h]
        push ecx
        ; Exact mapped bytes E8 72 12 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 400h]
        push edx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 4C 8E 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 06 23 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 D7 22 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 F0 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x408253
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a081ch
        lea ecx, [ebp - 400h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 FC 05 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes E8 E0 11 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 400h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 BA 8D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 74 22 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 45 22 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        mov edx, dword ptr [ecx + 460h]
        push edx
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [eax + 45ch]
        push ecx
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF EF 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x4082ff
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        mov edx, dword ptr [ebp - 458h]
        add edx, 8
        push edx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 54 8D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a083ch
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 50 05 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 400h]
        push ecx
        ; Exact mapped bytes E8 34 11 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 400h]
        push edx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 0E 8D 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 C8 21 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 99 21 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 EF 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x408306
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 AF F8 FF FF: jmp 0x407bb5
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x40830d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 20 F8 FF FF: jmp 0x407b2d
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 458h
        cmp ebp, esp
        ; Exact mapped bytes E8 C4 04 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
