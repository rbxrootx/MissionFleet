// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568ACC .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_00568acc_00568ACC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f778h
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
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x568b04
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b1h
        push 5cf588h
        ; Exact mapped bytes E8 01 BF FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568b04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x568aea
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x568b2a
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x568b2a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b2h
        push 5cf588h
        ; Exact mapped bytes E8 DB BE FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568b2a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x568b0a
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CF 83 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C0 83 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp + 14h], 80000000h
        ; Exact mapped bytes 75 14: jne 0x568b6f
        __asm _emit 0x75
        __asm _emit 0x14
        lea edx, [ebp - 1ch]
        push edx
        push 5cf610h
        push 80000000h
        ; Exact mapped bytes FF 15 18 1E 5E 00: call dword ptr [0x5e1e18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 73: je 0x568bf1
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 14h], 80000000h
        ; Exact mapped bytes 75 0C: jne 0x568ba4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x568ba4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x568b76
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 55 2E FB FF: call 0x51ba0e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 80000000h
        ; Exact mapped bytes 75 1F: jne 0x568be1
        __asm _emit 0x75
        __asm _emit 0x1f
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C2 83 FC FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x568be1
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 5cf618h
        ; Exact mapped bytes E8 39 70 F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 95: jmp 0x568b76
        __asm _emit 0xeb
        __asm _emit 0x95
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C1 83 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 41 0C FE FF: call 0x549830
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 85: jmp 0x568b76
        __asm _emit 0xeb
        __asm _emit 0x85
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0A: je 0x568c01
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 39 4C F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2A 4C F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
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
