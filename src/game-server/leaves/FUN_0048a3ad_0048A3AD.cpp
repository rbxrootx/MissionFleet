// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048A3AD .. +0x462 bytes.
extern "C" __declspec(naked) void FUN_0048a3ad_0048A3AD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c50eh
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
        sub esp, 24h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 53 6F 06 00: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0bach
        ; Exact mapped bytes E8 65 72 0A 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 09 1A 00 00: call 0x48be20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 8000h
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 12 1B 00 00: call 0x48bf40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        push 10000h
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 9B 1C 00 00: call 0x48c0e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax], 581e78h
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0c28h], 0
        push 5ah
        push 5c4838h
        push 1ch
        ; Exact mapped bytes E8 C6 2B 06 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x48a48f
        __asm _emit 0x74
        __asm _emit 0x12
        push 10000h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 56 1C 00 00: call 0x48c0e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x48a496
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 14h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 40c50h], ecx
        push 5bh
        push 5c4838h
        push 1ch
        ; Exact mapped bytes E8 79 2B 06 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 12: je 0x48a4dc
        __asm _emit 0x74
        __asm _emit 0x12
        push 10000h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 09 1C 00 00: call 0x48c0e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x48a4e3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 40c54h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 58h], 0ffffffffh
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 5ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 79 4E 04 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0bach
        ; Exact mapped bytes E8 81 71 0A 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 54h], 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 68h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x48a553
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0b4h
        ; Exact mapped bytes 7D 46: jge 0x48a5a2
        __asm _emit 0x7d
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + edx + 6ch], 0
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + ecx + 70h], 0
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + eax + 74h], 0
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + edx + 78h], 0
        ; Exact mapped bytes EB A8: jmp 0x48a54a
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bb0h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bb4h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0bb8h], 0
        mov dword ptr [eax + 0bbch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bc0h], 0
        mov dword ptr [ecx + 0bc4h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bc8h], 0
        mov dword ptr [edx + 0bcch], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0bd0h], 0
        mov dword ptr [eax + 0bd4h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bd8h], 0
        mov dword ptr [ecx + 0bdch], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0be0h], 0
        mov dword ptr [edx + 0be4h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0be8h], 0
        mov dword ptr [eax + 0bech], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0bf0h], 0
        mov dword ptr [ecx + 0bf4h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bf8h], 0
        mov dword ptr [edx + 0bfch], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0c00h], 0
        mov dword ptr [eax + 0c04h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0c08h], 0
        mov dword ptr [ecx + 0c0ch], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0c10h], 0
        mov dword ptr [edx + 0c14h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0c18h], 0
        mov dword ptr [eax + 0c1ch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 0c20h], 0
        mov dword ptr [ecx + 0c24h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 48h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 3ch], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 5c48c0h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 9A 90 06 00: call 0x4f37d8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 93 7D 06 00: call 0x4f24dc
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x48a787
        __asm _emit 0x74
        __asm _emit 0x3a
        mov esi, esp
        push 1
        push 0
        push 0
        push 0
        push 1
        push 2
        ; Exact mapped bytes FF 15 10 29 5E 00: call dword ptr [0x5e2910]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 E0 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 58h], eax
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 58h], -1
        ; Exact mapped bytes 75 0E: jne 0x48a785
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5c48dch
        ; Exact mapped bytes E8 FC 30 08 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x48a795
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        push 0
        push 5c48f0h
        ; Exact mapped bytes E8 EC 30 08 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 44h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 40c4ch], 0
        mov edx, dword ptr [ebp - 28h]
        add edx, 4ch
        mov esi, esp
        push edx
        push 1
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 48a253h
        push 0
        push 0
        ; Exact mapped bytes FF 15 F4 23 5E 00: call dword ptr [0x5e23f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 E0 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 48h], eax
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 64h], 3e8h
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 28h]
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
        add esp, 30h
        cmp ebp, esp
        ; Exact mapped bytes E8 D7 DF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
