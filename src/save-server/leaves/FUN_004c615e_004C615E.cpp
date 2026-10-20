// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C615E .. +0x16F bytes.
extern "C" __declspec(naked) void FUN_004c615e_004C615E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c0bfh
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
        push 139h
        push 671270h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 CE 40 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1D E6 05 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 F5 05 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x4c6250
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 4A 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4c61cb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x4c62ba
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c61e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 143h
        push 671270h
        ; Exact mapped bytes E8 5D 2B 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c61e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4c61cb
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4c6200
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 73 43: jae 0x4c624e
        __asm _emit 0x73
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x4c6224
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 22: je 0x4c624c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 46 34 02 00: call 0x4e9680
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 86 FA 05 00: call 0x525cd0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB D0: jmp 0x4c621c
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB A9: jmp 0x4c61f7
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes EB 6A: jmp 0x4c62ba
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 4A 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A4 EA 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x4c62ab
        __asm _emit 0x74
        __asm _emit 0x31
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 24 35 02 00: call 0x4e97ab
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 52 FA 05 00: call 0x525ce6
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0A EB 05 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6E 14 06 00: call 0x527717
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB BF: jmp 0x4c626a
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 32 66 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x66
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
