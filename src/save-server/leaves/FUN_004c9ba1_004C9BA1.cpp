// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9BA1 .. +0x18F bytes.
extern "C" __declspec(naked) void FUN_004c9ba1_004C9BA1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d2b8h
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
        push 13dh
        push 674970h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 8B 06 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DA AB 05 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 BA 05 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x4c9c96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 10 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4c9c0e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x4c9d1d
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c9c2b
        __asm _emit 0x75
        __asm _emit 0x14
        push 147h
        push 674970h
        ; Exact mapped bytes E8 1A F1 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c9c2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4c9c0e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4c9c43
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 73 43: jae 0x4c9c91
        __asm _emit 0x73
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x4c9c67
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 22: je 0x4c9c8f
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 03 FA 01 00: call 0x4e9680
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F3 F9 01 00: call 0x4e9680
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB D0: jmp 0x4c9c5f
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB A9: jmp 0x4c9c3a
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x4c9d1d
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 10 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5E B0 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 4F B0 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        sub eax, 1
        mov dword ptr [ebp - 20h], eax
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x4c9d02
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D2 FA 01 00: call 0x4e97ab
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C5 FA 01 00: call 0x4e97ab
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BC B0 05 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B3 B0 05 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 85 DA 05 00: call 0x527785
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB BA: jmp 0x4c9cbc
        __asm _emit 0xeb
        __asm _emit 0xba
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 DE 2B 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CF 2B 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
