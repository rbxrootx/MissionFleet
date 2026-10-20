// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005172EB .. +0x272 bytes.
extern "C" __declspec(naked) void FUN_005172eb_005172EB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 300h
        push 674cach
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 56 2F FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x517327
        __asm _emit 0x74
        __asm _emit 0x14
        push 301h
        push 674cach
        ; Exact mapped bytes E8 1E 1A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517327
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51730a
        __asm _emit 0x75
        __asm _emit 0xdd
        push 10h
        ; Exact mapped bytes E8 F7 DF FB FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51734c
        __asm _emit 0x75
        __asm _emit 0x14
        push 304h
        push 674cach
        ; Exact mapped bytes E8 F9 19 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51734c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x51732d
        __asm _emit 0x75
        __asm _emit 0xdb
        push 3c000h
        ; Exact mapped bytes E8 CF DF FB FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 A7 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x517382
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FE F4 FD FF: call 0x4f6880
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 1B 42 01 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 4D F8 FD FF: call 0x4f6be4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9C F6 FF FF: call 0x516a3e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], eax
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x5173dc
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 AC BF 68 00: call dword ptr [0x68bfac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5173dc
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes FF 15 DC BE 68 00: call dword ptr [0x68bedc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 10: je 0x5173fb
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 0
        push 1fh
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 24h]
        or al, 10h
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 43 8E FB FF: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        or ch, 4
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 24h]
        or ecx, 10h
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 78 B3 68 00: call dword ptr [0x68b378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        and dh, 0fbh
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes E8 ED 8E FB FF: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x517470
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 1F: jne 0x51748f
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 674df8h
        ; Exact mapped bytes E8 97 91 F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 24h]
        and al, 0efh
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x5174d6
        __asm _emit 0x74
        __asm _emit 0x2f
        mov dword ptr [ebp - 28h], 4
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D8 ED FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x5174c7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 28h]
        or al, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AA D9 FB FF: call 0x4d4e7d
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 17: je 0x5174f6
        __asm _emit 0x74
        __asm _emit 0x17
        push 97h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2A F2 FB FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x517508
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 18: je 0x517526
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes FF 15 78 BF 68 00: call dword ptr [0x68bf78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 0A: jne 0x517526
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 7C BF 68 00: call dword ptr [0x68bf7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x517541
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3F F3 FD FF: call 0x4f6880
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0C: je 0x517553
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
