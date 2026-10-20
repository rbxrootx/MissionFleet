// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512A28 .. +0x1E9 bytes.
extern "C" __declspec(naked) void FUN_00512a28_00512A28() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cda5h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x512a58
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8000h
        ; Exact mapped bytes 72 14: jb 0x512a6c
        __asm _emit 0x72
        __asm _emit 0x14
        push 2ach
        push 673dc0h
        ; Exact mapped bytes E8 D9 62 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512a6c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x512a49
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 74 22: je 0x512aa0
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 8ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x512aa0
        __asm _emit 0x74
        __asm _emit 0x14
        push 2adh
        push 673dc0h
        ; Exact mapped bytes E8 A5 62 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512aa0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x512a72
        __asm _emit 0x75
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ch], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4D 22 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B3 71 FC FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x512aed
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0ah
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 CD 22 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 24h]
        add edx, 0ach
        push edx
        ; Exact mapped bytes E8 E2 72 FC FF: call 0x4d9dcf
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes E8 37 28 FC FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x512b0c
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b5h
        push 673dc0h
        ; Exact mapped bytes E8 39 62 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512b0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x512aed
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3F FE FF FF: call 0x512961
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ach
        ; Exact mapped bytes E8 77 22 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 686d10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BA FA FF FF: call 0x51261d
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x512b82
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6F 9D FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 7C: jmp 0x512bfe
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x512b9f
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c1h
        push 673dc0h
        ; Exact mapped bytes E8 A6 61 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512b9f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x512b82
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 40 BE 68 00: call dword ptr [0x68be40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 44h], eax
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8E ED FF FF: call 0x511958
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 15: jne 0x512be5
        __asm _emit 0x75
        __asm _emit 0x15
        push 1
        push 1
        push 0
        push 0
        push 364h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FE 95 01 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F1 9C FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
