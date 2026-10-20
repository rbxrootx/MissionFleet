// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544798 .. +0x29B bytes.
extern "C" __declspec(naked) void FUN_00544798_00544798() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d269h
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
        mov eax, 1020h
        ; Exact mapped bytes E8 06 50 F6 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0xff
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 102ch], ecx
        mov dword ptr [ebp - 1028h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5447e7
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ch
        push 5c7374h
        ; Exact mapped bytes E8 1E 02 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5447e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5447cd
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x544807
        __asm _emit 0x75
        __asm _emit 0x14
        push 8dh
        push 5c7374h
        ; Exact mapped bytes E8 FE 01 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544807
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5447ed
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 102ch]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x544972
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 102ch]
        ; Exact mapped bytes E8 B3 FD FF FF: call 0x5445e2
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x54485b
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 90 FA FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x90
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1028h]
        or edx, 1
        mov dword ptr [ebp - 1028h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x544a20
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A4 C6 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 18h]
        push eax
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 52: jne 0x5448df
        __asm _emit 0x75
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 14: je 0x5448a7
        __asm _emit 0x74
        __asm _emit 0x14
        push 99h
        push 5c7374h
        ; Exact mapped bytes E8 5E 01 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5448a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54488d
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3B 97 FA FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 08 1E 5E 00: call dword ptr [0x5e1e08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push -1
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 54 98 FA FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x98
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 52: jne 0x544941
        __asm _emit 0x75
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 14: je 0x544909
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a1h
        push 5c7374h
        ; Exact mapped bytes E8 FC 00 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544909
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5448ef
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 8B FA FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1028h]
        or ecx, 1
        mov dword ptr [ebp - 1028h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 13 8F FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x544a20
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 8F FA FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1028h]
        or al, 1
        mov dword ptr [ebp - 1028h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 E2 8E FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x544a20
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 102ch]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x544995
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a8h
        push 5c7374h
        ; Exact mapped bytes E8 70 00 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544995
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x544972
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 07: jne 0x5449a8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 14h], 5dcbech
        mov eax, dword ptr [ebp - 102ch]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        push 1000h
        lea edx, [ebp - 1020h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 70 23 5E 00: call dword ptr [0x5e2370]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1024h], eax
        cmp dword ptr [ebp - 1024h], 0fffh
        ; Exact mapped bytes 72 14: jb 0x5449f9
        __asm _emit 0x72
        __asm _emit 0x14
        push 0afh
        push 5c7374h
        ; Exact mapped bytes E8 0C 00 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5449f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5449d9
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 1020h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA 8E FA FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1028h]
        or edx, 1
        mov dword ptr [ebp - 1028h], edx
        mov eax, dword ptr [ebp + 8]
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
