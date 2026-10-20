// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562039 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_00562039_00562039() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 24dh
        push 67c6f0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0B 82 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4ch], 3
        ; Exact mapped bytes 74 19: je 0x562077
        __asm _emit 0x74
        __asm _emit 0x19
        push 3
        push 4
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ch], 3
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 49: je 0x5620c9
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x5620c9
        __asm _emit 0x74
        __asm _emit 0x34
        push 259h
        push 67c6f0h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 B5 81 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 58h]
        and eax, 2000000h
        push eax
        push 2000000h
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 93 42 F7 FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x42
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        push 0
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 A4 00 00 00: call dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x562155
        __asm _emit 0x74
        __asm _emit 0x69
        push 262h
        push 67c6f0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 61 81 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 42 B8 FC FF: call 0x52d949
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 3
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x562127
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 42 B8 FC FF: call 0x52d969
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 28: je 0x562155
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 B8 FC FF: call 0x52d949
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 3
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x562155
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 B8 FC FF: call 0x52d969
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x562242
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 0
        ; Exact mapped bytes FF 15 78 C2 68 00: call dword ptr [0x68c278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 1B: je 0x5621bb
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 0
        ; Exact mapped bytes FF 15 78 C2 68 00: call dword ptr [0x68c278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 F4 00 00 00: call dword ptr [eax + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 68h]
        cmp edx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes 75 10: jne 0x5621fb
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 3E: je 0x562242
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes 75 10: jne 0x562242
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 0
        ; Exact mapped bytes E8 1F F9 FC FF: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 34: je 0x56228e
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 08 F7 FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 296h
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E8 7F F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 78 BF 68 00: call dword ptr [0x68bf78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 08: jne 0x56228e
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 46 F7 FF: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x46
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
