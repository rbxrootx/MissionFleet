// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408322 .. +0x84F bytes.
extern "C" __declspec(naked) void FUN_00408322_00408322() {
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
        mov byte ptr [ebp - 400h], 0
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
        ; Exact mapped bytes E8 79 04 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2dh
        ; Exact mapped bytes 7E 05: jle 0x408371
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 EB 07 00 00: jmp 0x408b5c
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 404h], 7
        ; Exact mapped bytes EB 0F: jmp 0x40838c
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
        ; Exact mapped bytes E8 3B 04 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 404h], eax
        ; Exact mapped bytes 0F 8D AB 07 00 00: jge 0x408b5c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xab
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
        ; Exact mapped bytes 0F 85 8D 07 00 00: jne 0x408b57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
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
        ; Exact mapped bytes E8 F4 03 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8D 63 07 00 00: jge 0x408b57
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x63
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 404h]
        add eax, 1
        mov dword ptr [ebp - 408h], eax
        ; Exact mapped bytes EB 0F: jmp 0x408414
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
        ; Exact mapped bytes E8 B3 03 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 408h], eax
        ; Exact mapped bytes 0F 8D 1C 07 00 00: jge 0x408b55
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1c
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
        ; Exact mapped bytes 0F 85 FE 06 00 00: jne 0x408b50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
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
        ; Exact mapped bytes E8 6C 03 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8D D4 06 00 00: jge 0x408b50
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
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
        lea ecx, [ebp - 44ch]
        push ecx
        ; Exact mapped bytes E8 77 0B 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 408h]
        sub edx, dword ptr [ebp - 404h]
        mov byte ptr [ebp + edx - 44dh], 0
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
        ; Exact mapped bytes E8 07 03 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 408h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 408h]
        mov edx, dword ptr [ebp - 458h]
        lea eax, [edx + ecx + 5dh]
        push eax
        lea ecx, [ebp - 42ch]
        push ecx
        ; Exact mapped bytes E8 20 0B 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0b
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
        ; Exact mapped bytes E8 C4 02 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 408h]
        mov byte ptr [ebp + eax - 42dh], 0
        lea eax, [ebp - 42ch]
        push eax
        ; Exact mapped bytes E8 FA 10 0A 00: call 0x4a9630
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40ch], eax
        lea ecx, [ebp - 44ch]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 58 6B 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 450h], eax
        cmp dword ptr [ebp - 450h], 0
        ; Exact mapped bytes 0F 84 40 05 00 00: je 0x408aa7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        mov eax, dword ptr [ebp - 458h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 45 8A 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 450h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 85 04 00 00: je 0x408a15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 F2 1E 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 454h], eax
        cmp dword ptr [ebp - 40ch], 0
        ; Exact mapped bytes 0F 8E D2 03 00 00: jle 0x408983
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        sub ecx, dword ptr [ebp - 40ch]
        test ecx, ecx
        ; Exact mapped bytes 7C 18: jl 0x4085df
        __asm _emit 0x7c
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes 0F 8D 94 00 00 00: jge 0x408673
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 5a0868h
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
        ; Exact mapped bytes E8 E1 01 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes E8 C5 0D 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea ecx, [ebp - 400h]
        push ecx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 9F 89 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 59 1E 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 2A 1E 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1e
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
        ; Exact mapped bytes E8 C4 EB 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 0B 03 00 00: jmp 0x40897e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 450h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        add edx, dword ptr [ebp - 40ch]
        test edx, edx
        ; Exact mapped bytes 0F 86 61 02 00 00: jbe 0x4088f1
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        sub edx, dword ptr [ebp - 40ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 1ch], edx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 458h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 ED 9F 07 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x9f
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 40ch]
        push edx
        lea eax, [ebp - 44ch]
        push eax
        push 5a08b8h
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
        ; Exact mapped bytes E8 EC 00 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes E8 D0 0C 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 400h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 AA 88 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 64 1D 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 35 1D 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1d
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
        ; Exact mapped bytes E8 CF EA 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 A2 EA 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 B1 FF FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A B1 FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 450h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, dword ptr [ebp - 40ch]
        mov edx, dword ptr [ebp - 450h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 450h]
        push ecx
        mov edx, dword ptr [ebp - 458h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 CE 9E 07 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 5a08d8h
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
        ; Exact mapped bytes E8 CA FF 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 454h]
        push ecx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 85 1C 00 00: call 0x40a4b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes E8 99 0B 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 400h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 73 87 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 2D 1C 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 FE 1B 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1b
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
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 95 E9 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 450h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 450h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 5F E9 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 6B B0 FF FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 B0 FF FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x40897e
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a08fch
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
        ; Exact mapped bytes E8 D1 FE 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes E8 B5 0A 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea ecx, [ebp - 400h]
        push ecx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 8F 86 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 49 1B 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 1A 1B 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1b
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
        ; Exact mapped bytes E8 B4 E8 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x408a10
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a0938h
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
        ; Exact mapped bytes E8 3F FE 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp - 400h]
        push ecx
        ; Exact mapped bytes E8 23 0A 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 400h]
        push edx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 FD 85 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 B7 1A 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 88 1A 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1a
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
        ; Exact mapped bytes E8 22 E8 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x408aa2
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a0958h
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
        ; Exact mapped bytes E8 AD FD 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        lea edx, [ebp - 400h]
        push edx
        ; Exact mapped bytes E8 91 09 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 400h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 6B 85 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 25 1A 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 F6 19 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x19
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
        ; Exact mapped bytes E8 90 E7 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x408b4e
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
        ; Exact mapped bytes E8 05 85 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5a0978h
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
        ; Exact mapped bytes E8 01 FD 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp - 400h]
        push ecx
        ; Exact mapped bytes E8 E5 08 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 400h]
        push edx
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 BF 84 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 79 19 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 458h]
        add ecx, 38h
        ; Exact mapped bytes E8 4A 19 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x19
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
        ; Exact mapped bytes E8 E4 E6 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x408b55
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B0 F8 FF FF: jmp 0x408405
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x408b5c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 21 F8 FF FF: jmp 0x40837d
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 458h
        cmp ebp, esp
        ; Exact mapped bytes E8 75 FC 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
