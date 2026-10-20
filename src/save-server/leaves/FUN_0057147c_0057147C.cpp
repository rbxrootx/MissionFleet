// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057147C .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_0057147c_0057147C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f258h
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
        ; Exact mapped bytes 75 14: jne 0x5714b4
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b1h
        push 67bd60h
        ; Exact mapped bytes E8 91 78 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5714b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57149a
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x5714da
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5714da
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b2h
        push 67bd60h
        ; Exact mapped bytes E8 6B 78 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5714da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5714ba
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1F 38 FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 10 38 FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp + 14h], 80000000h
        ; Exact mapped bytes 75 14: jne 0x57151f
        __asm _emit 0x75
        __asm _emit 0x14
        lea edx, [ebp - 1ch]
        push edx
        push 67bde8h
        push 80000000h
        ; Exact mapped bytes FF 15 A8 B2 68 00: call dword ptr [0x68b2a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 73: je 0x5715a1
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 14h], 80000000h
        ; Exact mapped bytes 75 0C: jne 0x571554
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x571554
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x571526
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
        ; Exact mapped bytes E8 B5 36 F9 FF: call 0x504c1e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x36
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 80000000h
        ; Exact mapped bytes 75 1F: jne 0x571591
        __asm _emit 0x75
        __asm _emit 0x1f
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 12 38 FB FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x571591
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 67bdf0h
        ; Exact mapped bytes E8 89 F0 F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 95: jmp 0x571526
        __asm _emit 0xeb
        __asm _emit 0x95
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 11 38 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B1 35 FD FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 85: jmp 0x571526
        __asm _emit 0xeb
        __asm _emit 0x85
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0A: je 0x5715b1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 29 B3 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1A B3 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb3
        __asm _emit 0xf5
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
