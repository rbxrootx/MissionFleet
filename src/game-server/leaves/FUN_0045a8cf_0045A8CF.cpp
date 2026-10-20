// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A8CF .. +0x194D bytes.
extern "C" __declspec(naked) void FUN_0045a8cf_0045A8CF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 150h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 150h]
        mov ecx, 54h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 150h], ecx
        mov eax, dword ptr [ebp - 150h]
        mov dword ptr [eax + 4], 0fh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 49 4C FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 40h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 150h]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes FF 15 5C 24 5E 00: call dword ptr [0x5e245c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 DE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x45a941
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b9860h
        ; Exact mapped bytes E8 40 2F 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 A4 31 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b987ch
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 E9 35 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 2C 66 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 60 24 5E 00: call dword ptr [0x5e2460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 54 DE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9890h
        push 5dcb3ch
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3B DE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9894h
        push 5dcb3fh
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 22 DE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9898h
        push 5dcb42h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 09 DE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b989ch
        push 5dcb45h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F0 DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b98a0h
        push 5dcb48h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b98a4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C3 DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 9A 29 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 15 E8 78 5D 00: mov dword ptr [0x5d78e8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b98ach
        ; Exact mapped bytes A1 E8 78 5D 00: mov eax, dword ptr [0x5d78e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 91 DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b98b4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7D DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 54 29 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D EC 78 5D 00: mov dword ptr [0x5d78ec], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b98c4h
        ; Exact mapped bytes 8B 15 EC 78 5D 00: mov edx, dword ptr [0x5d78ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4A DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b98d4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 36 DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 0D 29 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A3 F0 78 5D 00: mov dword ptr [0x5d78f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b98e4h
        ; Exact mapped bytes 8B 0D F0 78 5D 00: mov ecx, dword ptr [0x5d78f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 DD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b98f4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F0 DC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C7 28 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 F4 78 5D 00: mov dword ptr [0x5d78f4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9904h
        ; Exact mapped bytes A1 F4 78 5D 00: mov eax, dword ptr [0x5d78f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BE DC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9914h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AA DC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 81 28 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 89 0D F8 78 5D 00: mov dword ptr [0x5d78f8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9920h
        ; Exact mapped bytes 8B 15 F8 78 5D 00: mov edx, dword ptr [0x5d78f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 77 DC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b992ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 63 DC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3A 28 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes A3 FC 78 5D 00: mov dword ptr [0x5d78fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9940h
        ; Exact mapped bytes 8B 0D FC 78 5D 00: mov ecx, dword ptr [0x5d78fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 DC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9954h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1D DC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F4 27 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 15 00 79 5D 00: mov dword ptr [0x5d7900], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9968h
        ; Exact mapped bytes A1 00 79 5D 00: mov eax, dword ptr [0x5d7900]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EB DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b997ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AE 27 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 0D 04 79 5D 00: mov dword ptr [0x5d7904], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9990h
        ; Exact mapped bytes 8B 15 04 79 5D 00: mov edx, dword ptr [0x5d7904]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b99a4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 67 27 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes A3 08 79 5D 00: mov dword ptr [0x5d7908], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b99bch
        ; Exact mapped bytes 8B 0D 08 79 5D 00: mov ecx, dword ptr [0x5d7908]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5E DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b99d4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4A DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 21 27 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 89 15 0C 79 5D 00: mov dword ptr [0x5d790c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b99dch
        ; Exact mapped bytes A1 0C 79 5D 00: mov eax, dword ptr [0x5d790c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b99e4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 DB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 DB 26 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 89 0D 10 79 5D 00: mov dword ptr [0x5d7910], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b99f4h
        ; Exact mapped bytes 8B 15 10 79 5D 00: mov edx, dword ptr [0x5d7910]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D1 DA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9a04h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BD DA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 94 26 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes A3 14 79 5D 00: mov dword ptr [0x5d7914], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9a10h
        ; Exact mapped bytes 8B 0D 14 79 5D 00: mov ecx, dword ptr [0x5d7914]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8B DA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9a1ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 77 DA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 4E 26 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 89 15 18 79 5D 00: mov dword ptr [0x5d7918], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9a2ch
        ; Exact mapped bytes A1 18 79 5D 00: mov eax, dword ptr [0x5d7918]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 45 DA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9a3ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 DA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xda
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 08 26 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 89 0D 1C 79 5D 00: mov dword ptr [0x5d791c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9a48h
        ; Exact mapped bytes 8B 15 1C 79 5D 00: mov edx, dword ptr [0x5d791c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9a54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EA D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C1 25 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes A3 20 79 5D 00: mov dword ptr [0x5d7920], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9a68h
        ; Exact mapped bytes 8B 0D 20 79 5D 00: mov ecx, dword ptr [0x5d7920]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9a7ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 7B 25 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 89 15 24 79 5D 00: mov dword ptr [0x5d7924], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9a90h
        ; Exact mapped bytes A1 24 79 5D 00: mov eax, dword ptr [0x5d7924]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 72 D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9aa4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5E D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 35 25 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 89 0D 28 79 5D 00: mov dword ptr [0x5d7928], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9ab4h
        ; Exact mapped bytes 8B 15 28 79 5D 00: mov edx, dword ptr [0x5d7928]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2B D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9ac4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 17 D9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 EE 24 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes A3 2C 79 5D 00: mov dword ptr [0x5d792c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9ad8h
        ; Exact mapped bytes 8B 0D 2C 79 5D 00: mov ecx, dword ptr [0x5d792c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E5 D8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9aech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D1 D8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A8 24 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 89 15 30 79 5D 00: mov dword ptr [0x5d7930], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9b00h
        ; Exact mapped bytes A1 30 79 5D 00: mov eax, dword ptr [0x5d7930]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9F D8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9b14h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8B D8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 62 24 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 89 0D 34 79 5D 00: mov dword ptr [0x5d7934], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9b24h
        ; Exact mapped bytes 8B 15 34 79 5D 00: mov edx, dword ptr [0x5d7934]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 58 D8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9b34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 44 D8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 1B 24 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes A3 38 79 5D 00: mov dword ptr [0x5d7938], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9b44h
        ; Exact mapped bytes 8B 0D 38 79 5D 00: mov ecx, dword ptr [0x5d7938]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 D8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9b54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE D7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D5 23 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 89 15 3C 79 5D 00: mov dword ptr [0x5d793c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9b64h
        ; Exact mapped bytes A1 3C 79 5D 00: mov eax, dword ptr [0x5d793c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CC D7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9b74h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 D7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 8F 23 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 89 0D 40 79 5D 00: mov dword ptr [0x5d7940], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9b80h
        ; Exact mapped bytes 8B 15 40 79 5D 00: mov edx, dword ptr [0x5d7940]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 85 D7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9b8ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 71 D7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 48 23 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes A3 44 79 5D 00: mov dword ptr [0x5d7944], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9b98h
        ; Exact mapped bytes 8B 0D 44 79 5D 00: mov ecx, dword ptr [0x5d7944]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3F D7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9ba4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2B D7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 02 23 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 89 15 48 79 5D 00: mov dword ptr [0x5d7948], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9bb4h
        ; Exact mapped bytes A1 48 79 5D 00: mov eax, dword ptr [0x5d7948]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F9 D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9bc4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E5 D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 BC 22 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 89 0D 4C 79 5D 00: mov dword ptr [0x5d794c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9bd8h
        ; Exact mapped bytes 8B 15 4C 79 5D 00: mov edx, dword ptr [0x5d794c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B2 D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9bech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9E D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 75 22 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes A3 50 79 5D 00: mov dword ptr [0x5d7950], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9c00h
        ; Exact mapped bytes 8B 0D 50 79 5D 00: mov ecx, dword ptr [0x5d7950]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6C D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9c14h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 58 D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 2F 22 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        ; Exact mapped bytes 89 15 54 79 5D 00: mov dword ptr [0x5d7954], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9c2ch
        ; Exact mapped bytes A1 54 79 5D 00: mov eax, dword ptr [0x5d7954]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 26 D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9c44h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 D6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E9 21 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 89 0D 58 79 5D 00: mov dword ptr [0x5d7958], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9c58h
        ; Exact mapped bytes 8B 15 58 79 5D 00: mov edx, dword ptr [0x5d7958]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DF D5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9c6ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CB D5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A2 21 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes A3 5C 79 5D 00: mov dword ptr [0x5d795c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9c84h
        ; Exact mapped bytes 8B 0D 5C 79 5D 00: mov ecx, dword ptr [0x5d795c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 99 D5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9c9ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 85 D5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 5C 21 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 60 79 5D 00: mov dword ptr [0x5d7960], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9cach
        ; Exact mapped bytes A1 60 79 5D 00: mov eax, dword ptr [0x5d7960]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 53 D5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9cbch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3F D5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 16 21 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes 89 0D 64 79 5D 00: mov dword ptr [0x5d7964], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9ccch
        ; Exact mapped bytes 8B 15 64 79 5D 00: mov edx, dword ptr [0x5d7964]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0C D5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9cdch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F8 D4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CF 20 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        ; Exact mapped bytes A3 68 79 5D 00: mov dword ptr [0x5d7968], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9cech
        ; Exact mapped bytes 8B 0D 68 79 5D 00: mov ecx, dword ptr [0x5d7968]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C0 D4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9cfch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AC D4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 83 20 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 89 15 6C 79 5D 00: mov dword ptr [0x5d796c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9d10h
        ; Exact mapped bytes A1 6C 79 5D 00: mov eax, dword ptr [0x5d796c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 74 D4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9d24h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 60 D4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 37 20 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 89 0D 70 79 5D 00: mov dword ptr [0x5d7970], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9d3ch
        ; Exact mapped bytes 8B 15 70 79 5D 00: mov edx, dword ptr [0x5d7970]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 27 D4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9d54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 13 D4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 EA 1F 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes A3 74 79 5D 00: mov dword ptr [0x5d7974], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9d6ch
        ; Exact mapped bytes 8B 0D 74 79 5D 00: mov ecx, dword ptr [0x5d7974]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DB D3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9d84h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C7 D3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 9E 1F 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 89 15 78 79 5D 00: mov dword ptr [0x5d7978], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9d9ch
        ; Exact mapped bytes A1 78 79 5D 00: mov eax, dword ptr [0x5d7978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8F D3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9db4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7B D3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 52 1F 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 89 0D 7C 79 5D 00: mov dword ptr [0x5d797c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9dcch
        ; Exact mapped bytes 8B 15 7C 79 5D 00: mov edx, dword ptr [0x5d797c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 42 D3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9de4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E D3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 05 1F 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes A3 80 79 5D 00: mov dword ptr [0x5d7980], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9df8h
        ; Exact mapped bytes 8B 0D 80 79 5D 00: mov ecx, dword ptr [0x5d7980]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F6 D2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9e0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E2 D2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B9 1E 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 89 15 84 79 5D 00: mov dword ptr [0x5d7984], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9e24h
        ; Exact mapped bytes A1 84 79 5D 00: mov eax, dword ptr [0x5d7984]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AA D2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9e3ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 96 D2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 6D 1E 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes 89 0D 88 79 5D 00: mov dword ptr [0x5d7988], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9e50h
        ; Exact mapped bytes 8B 15 88 79 5D 00: mov edx, dword ptr [0x5d7988]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5D D2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9e64h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 49 D2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 20 1E 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes A3 8C 79 5D 00: mov dword ptr [0x5d798c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9e70h
        ; Exact mapped bytes 8B 0D 8C 79 5D 00: mov ecx, dword ptr [0x5d798c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 11 D2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9e7ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FD D1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D4 1D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes 89 15 90 79 5D 00: mov dword ptr [0x5d7990], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9e8ch
        ; Exact mapped bytes A1 90 79 5D 00: mov eax, dword ptr [0x5d7990]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C5 D1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9e9ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 D1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 88 1D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes 89 0D 94 79 5D 00: mov dword ptr [0x5d7994], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9each
        ; Exact mapped bytes 8B 15 94 79 5D 00: mov edx, dword ptr [0x5d7994]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 D1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9ebch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 64 D1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3B 1D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes A3 98 79 5D 00: mov dword ptr [0x5d7998], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9ed0h
        ; Exact mapped bytes 8B 0D 98 79 5D 00: mov ecx, dword ptr [0x5d7998]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2C D1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9ee4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 D1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 EF 1C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 89 15 9C 79 5D 00: mov dword ptr [0x5d799c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9ef4h
        ; Exact mapped bytes A1 9C 79 5D 00: mov eax, dword ptr [0x5d799c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 D0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9f04h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CC D0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A3 1C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes 89 0D A0 79 5D 00: mov dword ptr [0x5d79a0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9f10h
        ; Exact mapped bytes 8B 15 A0 79 5D 00: mov edx, dword ptr [0x5d79a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 93 D0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9f1ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7F D0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 56 1C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes A3 A4 79 5D 00: mov dword ptr [0x5d79a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9f28h
        ; Exact mapped bytes 8B 0D A4 79 5D 00: mov ecx, dword ptr [0x5d79a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 47 D0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9f34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 D0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 0A 1C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 89 15 A8 79 5D 00: mov dword ptr [0x5d79a8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9f44h
        ; Exact mapped bytes A1 A8 79 5D 00: mov eax, dword ptr [0x5d79a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FB CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9f54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E7 CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 BE 1B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes 89 0D AC 79 5D 00: mov dword ptr [0x5d79ac], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9f68h
        ; Exact mapped bytes 8B 15 AC 79 5D 00: mov edx, dword ptr [0x5d79ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AE CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9f7ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 71 1B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov eax, dword ptr [ebp - 0cch]
        ; Exact mapped bytes A3 B0 79 5D 00: mov dword ptr [0x5d79b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9f8ch
        ; Exact mapped bytes 8B 0D B0 79 5D 00: mov ecx, dword ptr [0x5d79b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 62 CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9f9ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4E CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 25 1B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov edx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes 89 15 B4 79 5D 00: mov dword ptr [0x5d79b4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9fa8h
        ; Exact mapped bytes A1 B4 79 5D 00: mov eax, dword ptr [0x5d79b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 16 CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9fb4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 CF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D9 1A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes 89 0D B8 79 5D 00: mov dword ptr [0x5d79b8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9fc4h
        ; Exact mapped bytes 8B 15 B8 79 5D 00: mov edx, dword ptr [0x5d79b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C9 CE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9fd4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B5 CE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 8C 1A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes A3 BC 79 5D 00: mov dword ptr [0x5d79bc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9fe0h
        ; Exact mapped bytes 8B 0D BC 79 5D 00: mov ecx, dword ptr [0x5d79bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7D CE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9fech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 69 CE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 40 1A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes 89 15 C0 79 5D 00: mov dword ptr [0x5d79c0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9ff4h
        ; Exact mapped bytes A1 C0 79 5D 00: mov eax, dword ptr [0x5d79c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 CE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9ffch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1D CE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F4 19 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes 89 0D C4 79 5D 00: mov dword ptr [0x5d79c4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba00ch
        ; Exact mapped bytes 8B 15 C4 79 5D 00: mov edx, dword ptr [0x5d79c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E4 CD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba01ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D0 CD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A7 19 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes A3 C8 79 5D 00: mov dword ptr [0x5d79c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba02ch
        ; Exact mapped bytes 8B 0D C8 79 5D 00: mov ecx, dword ptr [0x5d79c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 98 CD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba03ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 84 CD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 5B 19 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov edx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes 89 15 CC 79 5D 00: mov dword ptr [0x5d79cc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba04ch
        ; Exact mapped bytes A1 CC 79 5D 00: mov eax, dword ptr [0x5d79cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4C CD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba05ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 38 CD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 0F 19 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 89 0D D0 79 5D 00: mov dword ptr [0x5d79d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba06ch
        ; Exact mapped bytes 8B 15 D0 79 5D 00: mov edx, dword ptr [0x5d79d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FF CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba07ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EB CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C2 18 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov eax, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes A3 D4 79 5D 00: mov dword ptr [0x5d79d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba08ch
        ; Exact mapped bytes 8B 0D D4 79 5D 00: mov ecx, dword ptr [0x5d79d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba09ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9F CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 76 18 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov edx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes 89 15 D8 79 5D 00: mov dword ptr [0x5d79d8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba0ach
        ; Exact mapped bytes A1 D8 79 5D 00: mov eax, dword ptr [0x5d79d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba0bch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 53 CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 2A 18 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes 89 0D DC 79 5D 00: mov dword ptr [0x5d79dc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba0cch
        ; Exact mapped bytes 8B 15 DC 79 5D 00: mov edx, dword ptr [0x5d79dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1A CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba0dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 CC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 DD 17 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov eax, dword ptr [ebp - 0fch]
        ; Exact mapped bytes A3 E0 79 5D 00: mov dword ptr [0x5d79e0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba0ech
        ; Exact mapped bytes 8B 0D E0 79 5D 00: mov ecx, dword ptr [0x5d79e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE CB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba0fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BA CB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 91 17 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov edx, dword ptr [ebp - 100h]
        ; Exact mapped bytes 89 15 E4 79 5D 00: mov dword ptr [0x5d79e4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba110h
        ; Exact mapped bytes A1 E4 79 5D 00: mov eax, dword ptr [0x5d79e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 82 CB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba124h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6E CB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 45 17 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes 89 0D E8 79 5D 00: mov dword ptr [0x5d79e8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba130h
        ; Exact mapped bytes 8B 15 E8 79 5D 00: mov edx, dword ptr [0x5d79e8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 35 CB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba13ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 21 CB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F8 16 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp - 108h]
        ; Exact mapped bytes A3 EC 79 5D 00: mov dword ptr [0x5d79ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba14ch
        ; Exact mapped bytes 8B 0D EC 79 5D 00: mov ecx, dword ptr [0x5d79ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E9 CA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba15ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D5 CA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AC 16 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov edx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 89 15 F0 79 5D 00: mov dword ptr [0x5d79f0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba16ch
        ; Exact mapped bytes A1 F0 79 5D 00: mov eax, dword ptr [0x5d79f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D CA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba17ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 89 CA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 60 16 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 89 0D F4 79 5D 00: mov dword ptr [0x5d79f4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba18ch
        ; Exact mapped bytes 8B 15 F4 79 5D 00: mov edx, dword ptr [0x5d79f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 CA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba19ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3C CA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 13 16 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        ; Exact mapped bytes A3 F8 79 5D 00: mov dword ptr [0x5d79f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba1a8h
        ; Exact mapped bytes 8B 0D F8 79 5D 00: mov ecx, dword ptr [0x5d79f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 CA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba1b4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F0 C9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C7 15 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp - 118h]
        ; Exact mapped bytes 89 15 FC 79 5D 00: mov dword ptr [0x5d79fc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba1c0h
        ; Exact mapped bytes A1 FC 79 5D 00: mov eax, dword ptr [0x5d79fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x79
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 C9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba1cch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 C9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 7B 15 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes 89 0D 00 7A 5D 00: mov dword ptr [0x5d7a00], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba1dch
        ; Exact mapped bytes 8B 15 00 7A 5D 00: mov edx, dword ptr [0x5d7a00]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6B C9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba1ech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 57 C9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 2E 15 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        ; Exact mapped bytes A3 04 7A 5D 00: mov dword ptr [0x5d7a04], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba1f4h
        ; Exact mapped bytes 8B 0D 04 7A 5D 00: mov ecx, dword ptr [0x5d7a04]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1F C9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba1fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B C9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E2 14 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 89 15 08 7A 5D 00: mov dword ptr [0x5d7a08], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba20ch
        ; Exact mapped bytes A1 08 7A 5D 00: mov eax, dword ptr [0x5d7a08]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D3 C8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba21ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BF C8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 96 14 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes 89 0D 0C 7A 5D 00: mov dword ptr [0x5d7a0c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba234h
        ; Exact mapped bytes 8B 15 0C 7A 5D 00: mov edx, dword ptr [0x5d7a0c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 86 C8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba24ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 72 C8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 49 14 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes A3 10 7A 5D 00: mov dword ptr [0x5d7a10], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba258h
        ; Exact mapped bytes 8B 0D 10 7A 5D 00: mov ecx, dword ptr [0x5d7a10]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3A C8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba264h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 26 C8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FD 13 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 130h]
        ; Exact mapped bytes 89 15 14 7A 5D 00: mov dword ptr [0x5d7a14], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba278h
        ; Exact mapped bytes A1 14 7A 5D 00: mov eax, dword ptr [0x5d7a14]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EE C7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba28ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DA C7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B1 13 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 89 0D 18 7A 5D 00: mov dword ptr [0x5d7a18], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba29ch
        ; Exact mapped bytes 8B 15 18 7A 5D 00: mov edx, dword ptr [0x5d7a18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 C7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba2ach
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8D C7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 64 13 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        ; Exact mapped bytes A3 1C 7A 5D 00: mov dword ptr [0x5d7a1c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba2bch
        ; Exact mapped bytes 8B 0D 1C 7A 5D 00: mov ecx, dword ptr [0x5d7a1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 C7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba2cch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 41 C7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 18 13 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 89 15 20 7A 5D 00: mov dword ptr [0x5d7a20], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba2e4h
        ; Exact mapped bytes A1 20 7A 5D 00: mov eax, dword ptr [0x5d7a20]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 09 C7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba2fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F5 C6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CC 12 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes 89 0D 24 7A 5D 00: mov dword ptr [0x5d7a24], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba314h
        ; Exact mapped bytes 8B 15 24 7A 5D 00: mov edx, dword ptr [0x5d7a24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC C6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba32ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A8 C6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 7F 12 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 144h]
        ; Exact mapped bytes A3 28 7A 5D 00: mov dword ptr [0x5d7a28], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba33ch
        ; Exact mapped bytes 8B 0D 28 7A 5D 00: mov ecx, dword ptr [0x5d7a28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 70 C6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba34ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C C6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 33 12 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        ; Exact mapped bytes 89 15 2C 7A 5D 00: mov dword ptr [0x5d7a2c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba360h
        ; Exact mapped bytes A1 2C 7A 5D 00: mov eax, dword ptr [0x5d7a2c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 24 C6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5ba374h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 10 C6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E7 11 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes 89 0D 30 7A 5D 00: mov dword ptr [0x5d7a30], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5ba38ch
        ; Exact mapped bytes 8B 15 30 7A 5D 00: mov edx, dword ptr [0x5d7a30]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 C5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 150h
        cmp ebp, esp
        ; Exact mapped bytes E8 C8 C5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
