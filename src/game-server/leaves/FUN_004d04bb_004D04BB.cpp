// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D04BB .. +0x23B bytes.
extern "C" __declspec(naked) void FUN_004d04bb_004D04BB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 4bh
        push 5c7f78h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 89 AC 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 90h]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4d04f8
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ch
        push 5c7f78h
        ; Exact mapped bytes E8 0D 45 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d04f8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4d04d7
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 75 11: jne 0x4d051b
        __asm _emit 0x75
        __asm _emit 0x11
        push 4dh
        push 5c7f78h
        ; Exact mapped bytes E8 EA 44 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d051b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d04fe
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 78h]
        push eax
        ; Exact mapped bytes E8 20 F9 FF FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d054b
        __asm _emit 0x75
        __asm _emit 0x11
        push 50h
        push 5c7f78h
        ; Exact mapped bytes E8 BA 44 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d054b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4d0521
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 78h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 76 11: jbe 0x4d0580
        __asm _emit 0x76
        __asm _emit 0x11
        push 52h
        push 5c7f78h
        ; Exact mapped bytes E8 85 44 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0580
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4d0564
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 7ch]
        sub edx, dword ptr [ebp - 8]
        push edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 78h]
        add ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 CF 8D FD FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9B 00 02 00: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 60h], eax
        ; Exact mapped bytes E8 5A 1E 02 00: call 0x4f2421
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 27: je 0x4d05f7
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 60h]
        push edx
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4d05f7
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 10h], 1
        push 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 49 07 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4d0619
        __asm _emit 0x74
        __asm _emit 0x11
        push 63h
        push 5c7f78h
        ; Exact mapped bytes E8 EC 43 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0619
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d05ff
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 90h]
        and edx, 80000h
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x4d063d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4d0646
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 E9 1C 02 00: call 0x4f232f
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 74 11: je 0x4d0663
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 5ch
        push ecx
        ; Exact mapped bytes E8 A8 85 FF FF: call 0x4c8c06
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0F: jmp 0x4d0672
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 18h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 91 85 FF FF: call 0x4c8c00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x4d0698
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4d0692
        __asm _emit 0x74
        __asm _emit 0x11
        push 71h
        push 5c7f78h
        ; Exact mapped bytes E8 73 43 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0692
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d0678
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x4d06b7
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4d06cf
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F5 FF 01 00: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x4d06e5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4d06ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 2
        mov eax, dword ptr [ebp - 1ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
