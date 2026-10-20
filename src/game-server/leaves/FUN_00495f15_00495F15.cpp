// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00495F15 .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_00495f15_00495F15() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e439h
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x495f50
        __asm _emit 0x75
        __asm _emit 0x14
        push 925h
        push 5ca8a4h
        ; Exact mapped bytes E8 B5 EA 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x495f50
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x495f36
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x4960cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ecx + 90h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 74 14: je 0x495f96
        __asm _emit 0x74
        __asm _emit 0x14
        push 92ah
        push 5ca8a4h
        ; Exact mapped bytes E8 6F EA 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x495f96
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x495f71
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x49603e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x495fbb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7D 76: jge 0x49603c
        __asm _emit 0x7d
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 C8 41 00 00: call 0x49a1a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 8E 79 05 00: call 0x4ed96f
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 9ch
        push eax
        ; Exact mapped bytes E8 F1 B1 09 00: call 0x5311eb
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 28h], al
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 40 78 05 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x496037
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 20 13 05 00: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x49615c
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x495fb2
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7B: jmp 0x4960b9
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x496050
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7D 5E: jge 0x4960b9
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        cmp dword ptr [edx + eax + 1ch], 0
        ; Exact mapped bytes 75 02: jne 0x496070
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x496047
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 9ch
        push ecx
        ; Exact mapped bytes E8 78 B1 09 00: call 0x531208
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4960b7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 A0 12 05 00: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x49615c
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8E: jmp 0x496047
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 90h], 0
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x49615c
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4960e8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7D 69: jge 0x49615c
        __asm _emit 0x7d
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 86 CB 09 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 49: je 0x49615a
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 80 CB 09 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 1B: jne 0x496158
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 3B 17 05 00: call 0x4e7891
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x17
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x49615c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B1: jmp 0x49610b
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes EB 83: jmp 0x4960df
        __asm _emit 0xeb
        __asm _emit 0x83
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
