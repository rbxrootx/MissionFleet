// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58819650 .. +0x316 bytes.
extern "C" __declspec(naked) void FUN_58819650() {
    __asm {
        sub esp, 54h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 50h], eax
        mov eax, dword ptr [esp + 60h]
        mov edx, dword ptr [esp + 64h]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 4C 24 64: mov cx, word ptr [esp + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x64
        push edi
        lea edi, [esi + 74h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 66 89 8E A8 00 00 00: mov word ptr [esi + 0xa8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0a4h], edx
        mov dword ptr [esp + 14h], edi
        mov ebx, edi
        mov ebp, 6
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 59 F1 0E 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        add ebx, 4
        sub ebp, 1
        ; Exact mapped bytes 75 F1: jne 0x58819690
        __asm _emit 0x75
        __asm _emit 0xf1
        push 777777h
        push ebp
        push 5899d830h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [edi]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 15 F2 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 777777h
        push ebp
        push 5899d82ch
        ; Exact mapped bytes E8 02 F2 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push 777777h
        push ebp
        push 5899d82ch
        ; Exact mapped bytes E8 EF F1 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push 777777h
        push ebp
        push 5899d82ch
        ; Exact mapped bytes E8 D9 F1 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push 777777h
        push ebp
        push 5899d82ch
        ; Exact mapped bytes E8 C3 F1 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 777777h
        push ebp
        push 5899d82ch
        ; Exact mapped bytes E8 AD F1 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebp
        push ebp
        ; Exact mapped bytes E8 E4 E9 0E 00: call 0x58908110
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push ebp
        push ebp
        ; Exact mapped bytes E8 DA E9 0E 00: call 0x58908110
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ebp
        push ebp
        ; Exact mapped bytes E8 D0 E9 0E 00: call 0x58908110
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push ebp
        push ebp
        ; Exact mapped bytes E8 C3 E9 0E 00: call 0x58908110
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push ebp
        push ebp
        ; Exact mapped bytes E8 B6 E9 0E 00: call 0x58908110
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push ebp
        push ebp
        ; Exact mapped bytes E8 A9 E9 0E 00: call 0x58908110
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 6ch]
        mov dword ptr [esp + 18h], 1
        test eax, eax
        ; Exact mapped bytes 0F 8E B1 01 00 00: jle 0x5881992c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 10h]
        ; Exact mapped bytes 8B 1D C4 C3 98 58: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add ebp, 8
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 A1 F4 F5 FF: call 0x58778c40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x5881991a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        push 777777h
        push edi
        lea ecx, [edi + 78h]
        push ecx
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 12 F1 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [edi + 24h]
        push eax
        push 5899d81ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 28h]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [edi + 24h]
        mov ecx, dword ptr [esi + 78h]
        add esp, 0ch
        push 777777h
        push edx
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes E8 DF F0 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push ecx
        lea edx, [esp + 24h]
        push 5899d814h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp]
        add esp, 0ch
        push 777777h
        push eax
        lea ecx, [esp + 28h]
        push ecx
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 B6 F0 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        movzx eax, word ptr [esi + 0a8h]
        cmp eax, 3
        ; Exact mapped bytes 77 5D: ja 0x58819883
        __asm _emit 0x77
        __asm _emit 0x5d
        ; Exact mapped bytes FF 24 85 68 99 81 58: jmp dword ptr [eax*4 + 0x58819968]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x81
        __asm _emit 0x58
        movzx edx, byte ptr [edi + 99h]
        movzx eax, byte ptr [edi + 98h]
        push edx
        push eax
        push 5899d7fch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 2ch]
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 10h
        ; Exact mapped bytes EB 2B: jmp 0x58819883
        __asm _emit 0xeb
        __asm _emit 0x2b
        movzx edx, byte ptr [edi + 9bh]
        push edx
        push 5899d7f8h
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes EB 12: jmp 0x5881987e
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, byte ptr [edi + 9ah]
        push ecx
        push 5899d7f8h
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        mov ecx, dword ptr [esi + 80h]
        push 777777h
        push 0
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes E8 36 F0 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea edx, [esp + 24h]
        push 5899d814h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 84h]
        add esp, 0ch
        push 777777h
        push 0
        lea eax, [esp + 28h]
        push eax
        ; Exact mapped bytes E8 0C F0 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf0
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [esp + 20h]
        push 5899d82ch
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 88h]
        add esp, 8
        push 777777h
        push 0
        lea edx, [esp + 28h]
        push edx
        ; Exact mapped bytes E8 E6 EF 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp dword ptr [esi + 0a4h], edi
        ; Exact mapped bytes 75 24: jne 0x58819916
        __asm _emit 0x75
        __asm _emit 0x24
        mov edi, dword ptr [esp + 14h]
        mov dword ptr [esp + 1ch], 6
        mov edi, edi
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [edi]
        push eax
        ; Exact mapped bytes E8 24 EF 0E 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0x0e
        __asm _emit 0x00
        add edi, 4
        sub dword ptr [esp + 1ch], 1
        ; Exact mapped bytes 75 EA: jne 0x58819900
        __asm _emit 0x75
        __asm _emit 0xea
        inc dword ptr [esp + 18h]
        add ebp, 14h
        sub dword ptr [esp + 10h], 1
        ; Exact mapped bytes 0F 85 68 FE FF FF: jne 0x58819790
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 14h]
        cmp dword ptr [esi + 0a4h], 0
        ; Exact mapped bytes 75 1C: jne 0x58819951
        __asm _emit 0x75
        __asm _emit 0x1c
        mov esi, 6
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 E7 EE 0E 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        add edi, 4
        sub esi, 1
        ; Exact mapped bytes 75 EF: jne 0x58819940
        __asm _emit 0x75
        __asm _emit 0xef
        mov ecx, dword ptr [esp + 60h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 7A 32 16 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 54h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
