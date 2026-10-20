// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A16F6 .. +0x28B bytes.
extern "C" __declspec(naked) void FUN_004a16f6_004A16F6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57effch
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
        sub esp, 58h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 60h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E1 F7 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FE B5 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x4a1763
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 BD 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        or ecx, 1
        mov dword ptr [ebp - 60h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F1 C0 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 0B 02 00 00: jmp 0x4a196e
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 C8 B5 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x4a1787
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 B3 E7 FF FF: call 0x49ff36
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x4a17db
        __asm _emit 0x75
        __asm _emit 0x54
        push 0f09ah
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EC 93 05 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a17ac
        __asm _emit 0x75
        __asm _emit 0x14
        push 958h
        push 5cbe8ch
        ; Exact mapped bytes E8 59 32 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a17ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4a1787
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC BC 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        or edx, 1
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 79 C0 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x4a196e
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 3E EA FF FF: call 0x4a0222
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1B F7 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E2 C7 04 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x4a18f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 25h
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x4a18c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 44h
        ; Exact mapped bytes 75 7E: jne 0x4a18c0
        __asm _emit 0x75
        __asm _emit 0x7e
        push 0ah
        lea ecx, [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 57 B6 0A 00: call 0x54cea7
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 1A FB 00 00: call 0x4b1370
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 24h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CE C8 04 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E4 C6 04 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5C C7 04 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 D5 B7 FE FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 C6 B7 FE FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 1ch]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 A4 B7 FE FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 95 B7 FE FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x4a1819
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 31 C8 04 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        push 80h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 98 C8 04 00: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea edx, [ebp - 4ch]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 8C F6 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 39 F6 08 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 4F DA 00 00: call 0x4af380
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F5 C7 04 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 BB 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        or edx, 1
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 ED BE 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E1 BE 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
