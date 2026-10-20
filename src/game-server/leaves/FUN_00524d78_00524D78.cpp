// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524D78 .. +0x192 bytes.
extern "C" __declspec(naked) void FUN_00524d78_00524D78() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 CC 01 02 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 2A: jne 0x524dbc
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], 90c020c4h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F9 F1 00 00: call 0x533f9d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x524dba
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        or edx, 80000h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], edx
        ; Exact mapped bytes EB 09: jmp 0x524dc5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 20h], ecx
        push 388h
        push 5c8174h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 7F 63 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x524dfe
        __asm _emit 0x74
        __asm _emit 0x14
        push 389h
        push 5c8174h
        ; Exact mapped bytes E8 07 FC 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524dfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x524de1
        __asm _emit 0x75
        __asm _emit 0xdd
        push 10h
        ; Exact mapped bytes E8 F0 25 FD FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x524e23
        __asm _emit 0x75
        __asm _emit 0x14
        push 38bh
        push 5c8174h
        ; Exact mapped bytes E8 E2 FB 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524e23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x524e04
        __asm _emit 0x75
        __asm _emit 0xdb
        push 3c000h
        ; Exact mapped bytes E8 C8 25 FD FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 83 F3 FF FF: call 0x5241be
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 84h], 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        or dh, 5
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 24h], 524cddh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 6C 01 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 A6 D4 FC FF: call 0x4f232f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 B4 1E 5E 00: call dword ptr [0x5e1eb4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 7D D5 FC FF: call 0x4f2421
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x524eb6
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x524ec2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 15: jne 0x524ed7
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 5c82f4h
        ; Exact mapped bytes E8 45 AD FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x524f01
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 74 14: je 0x524ef6
        __asm _emit 0x74
        __asm _emit 0x14
        push 3a8h
        push 5c8174h
        ; Exact mapped bytes E8 0F FB 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524ef6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x524ed7
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, 1
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
