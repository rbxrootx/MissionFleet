// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004576A6 .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_004576a6_004576A6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b8b8h
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
        sub esp, 28h
        push esi
        push edi
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 5d7d0ch
        ; Exact mapped bytes E8 46 23 05 00: call 0x4a9a30
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 0
        push 0
        ; Exact mapped bytes E8 B5 25 05 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 96 4A 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 2ch
        ; Exact mapped bytes E8 A9 5C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0D: je 0x457737
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DE 5A 00 00: call 0x45d210
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x45773e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 76ch
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 14h], edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5F 97 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x97
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        push edx
        push 5b89cch
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 8B 71 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b89e8h
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 18h
        ; Exact mapped bytes E8 2C 5F 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BE 97 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x97
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 18h
        ; Exact mapped bytes E8 48 5F 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D4 0F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AB 5B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 28h], edx
        mov esi, esp
        push 5d7d0ch
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 0F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8D 0F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 B8 5F 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 64 0F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC 4E 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B9 5F 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5f
        __asm _emit 0x09
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
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 37 0F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
