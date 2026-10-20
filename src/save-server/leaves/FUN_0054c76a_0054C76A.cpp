// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C76A .. +0x660 bytes.
extern "C" __declspec(naked) void FUN_0054c76a_0054C76A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 53 02 00 00: jne 0x54c9d5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x54c79e
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b0h
        push 679318h
        ; Exact mapped bytes E8 A7 C5 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c79e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x54c782
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 88h]
        sub edx, 1
        mov dword ptr [ebp - 88h], edx
        cmp dword ptr [ebp - 88h], 3fh
        ; Exact mapped bytes 0F 87 03 02 00 00: ja 0x54c9ce
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        xor eax, eax
        mov al, byte ptr [ecx + 54cde6h]
        ; Exact mapped bytes FF 24 85 CA CD 54 00: jmp dword ptr [eax*4 + 0x54cdca]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0xcd
        __asm _emit 0x54
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x54c7e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x54c7e0
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], 0
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x54c9d5
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 4
        mov eax, 1
        ; Exact mapped bytes E9 84 05 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 8
        mov eax, 1
        ; Exact mapped bytes E9 53 05 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 0
        ; Exact mapped bytes E8 F3 FD FF FF: call 0x54c669
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x54c886
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 35 05 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x54c8ad
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cdh
        push 679318h
        ; Exact mapped bytes E8 98 C4 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c8ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54c893
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 54 B6 68 00: call dword ptr [0x68b654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 1B: jne 0x54c8ec
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 CF 04 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 20h
        mov eax, 1
        ; Exact mapped bytes E9 A9 04 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 10h
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], 0
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x54c9d5
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 2
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x54c96c
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e6h
        push 679318h
        ; Exact mapped bytes E8 D9 C3 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c96c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x54c94f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 82 31 F1 FF: call 0x45fb00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x31
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        shl ecx, 1
        push ecx
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x54c9a9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 12 04 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + ecx + 2]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 3F 89 F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x89
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes E9 ED 03 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 E6 03 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 74 14: je 0x54c9f5
        __asm _emit 0x74
        __asm _emit 0x14
        push 2f5h
        push 679318h
        ; Exact mapped bytes E8 50 C3 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c9f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x54c9d5
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 8ch]
        sub eax, 1
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 3fh
        ; Exact mapped bytes 0F 87 97 03 00 00: ja 0x54cdb9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8ch]
        xor ecx, ecx
        mov cl, byte ptr [edx + 54ce3eh]
        ; Exact mapped bytes FF 24 8D 26 CE 54 00: jmp dword ptr [ecx*4 + 0x54ce26]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x26
        __asm _emit 0xce
        __asm _emit 0x54
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 1F FC FF FF: call 0x54c669
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x54ca5a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 61 03 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 4], edx
        mov eax, 1
        ; Exact mapped bytes E9 4E 03 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x54ca8a
        __asm _emit 0x75
        __asm _emit 0x14
        push 306h
        push 679318h
        ; Exact mapped bytes E8 BB C2 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ca8a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x54ca6d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x54caad
        __asm _emit 0x75
        __asm _emit 0x14
        push 307h
        push 679318h
        ; Exact mapped bytes E8 98 C2 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54caad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x54ca90
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 30: call dword ptr [ecx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x30
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x54cad6
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E5 02 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 14: je 0x54caf0
        __asm _emit 0x74
        __asm _emit 0x14
        push 310h
        push 679318h
        ; Exact mapped bytes E8 55 C2 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54caf0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x54cad6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 74h], 0
        mov dword ptr [ebp - 70h], 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        push 0
        push 0
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        push 0
        push 0
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x54cb70
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        push 0
        push 0
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov eax, 1
        ; Exact mapped bytes E9 05 02 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x54cbd3
        __asm _emit 0x75
        __asm _emit 0x14
        push 327h
        push 679318h
        ; Exact mapped bytes E8 72 C1 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54cbd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x54cbb6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x54cbf6
        __asm _emit 0x75
        __asm _emit 0x14
        push 328h
        push 679318h
        ; Exact mapped bytes E8 4F C1 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54cbf6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x54cbd9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x54cc26
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x54cdbb
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], 0
        mov dword ptr [ebp - 7ch], 0
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x54cc6c
        __asm _emit 0x75
        __asm _emit 0x14
        push 333h
        push 679318h
        ; Exact mapped bytes E8 D9 C0 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54cc6c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x54cc4f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x54cc8f
        __asm _emit 0x75
        __asm _emit 0x14
        push 334h
        push 679318h
        ; Exact mapped bytes E8 B6 C0 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54cc8f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x54cc72
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 75 0C: jne 0x54ccb0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 90h], 0
        ; Exact mapped bytes EB 47: jmp 0x54ccf7
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 78h]
        push eax
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 84h], ecx
        mov eax, dword ptr [ebp - 84h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 CC 92 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x92
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], esp
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        ; Exact mapped bytes E8 DF C0 F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 75 0C: jne 0x54cd12
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 98h], 0
        ; Exact mapped bytes EB 47: jmp 0x54cd59
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 6A 92 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x92
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], esp
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 7D C0 F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 0
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        ; Exact mapped bytes FF 15 D8 B8 68 00: call dword ptr [0x68b8d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 4A: jmp 0x54cdbb
        __asm _emit 0xeb
        __asm _emit 0x4a
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x54cd78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x54cd71
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 04: je 0x54cd8b
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x54cdbb
        __asm _emit 0xeb
        __asm _emit 0x30
        push 0
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 04 C3 68 00: call dword ptr [0x68c304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 04: jne 0x54cdb2
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x54cdbb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x54cdbb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea esp, [ebp - 0a8h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
