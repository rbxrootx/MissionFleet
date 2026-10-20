// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A42DF .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_004a42df_004A42DF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fc3ch
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        push 111h
        push 5d00cch
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 4D 6E 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        push 112h
        push 5d00cch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3A 6E 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 23 BB 02 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a434b
        __asm _emit 0x75
        __asm _emit 0x14
        push 113h
        push 5d00cch
        ; Exact mapped bytes E8 BA 06 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a434b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4a4326
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4A 3A 0B 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 34 D7 09 00: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x4a4394
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x4a4532
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x4a4518
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 4C CB 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 400h
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B8 70 09 00: call 0x53b48f
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 26: jne 0x4a4406
        __asm _emit 0x75
        __asm _emit 0x26
        push 5d00f0h
        push 5d0130h
        ; Exact mapped bytes E8 26 B8 02 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 4B 94 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x4a4532
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F9 CA 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 91 11 09 00: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        push 5d0134h
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 32 A5 02 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 10h
        push 26h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 14 98 02 00: call 0x4cdc4b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0A 6F 09 00: call 0x53b349
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 6F: jne 0x4a44d1
        __asm _emit 0x75
        __asm _emit 0x6f
        push 13bh
        push 5d00cch
        push 8
        ; Exact mapped bytes E8 EC 8B 04 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 0D: je 0x4a448d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AA 6A 09 00: call 0x53af32
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x4a4494
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 FA 6A 09 00: call 0x53afac
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F0 CA 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 410h
        push -1
        mov ecx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 13 71 09 00: call 0x53b5e4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 D1 CA 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 74h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push 410h
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 70 09 00: call 0x53b5e4
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 14h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 43 93 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 34 93 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 6B 09 00: call 0x53b08c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 08 91 0A 00: call 0x54d63a
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x91
        __asm _emit 0x0a
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
