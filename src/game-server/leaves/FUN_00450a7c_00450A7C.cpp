// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00450A7C .. +0x194D bytes.
extern "C" __declspec(naked) void FUN_00450a7c_00450A7C() {
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
        mov dword ptr [eax + 4], 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 9C EA FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xea
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
        ; Exact mapped bytes E8 04 7D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x450aee
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b7394h
        ; Exact mapped bytes E8 93 CD 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xcd
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 F7 CF 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b73b0h
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 3C D4 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 7F 04 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x0e
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
        ; Exact mapped bytes E8 A7 7C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b73c8h
        push 5dcb2ch
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8E 7C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b73cch
        push 5dcb2fh
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 75 7C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b73d0h
        push 5dcb32h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 7C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b73d4h
        push 5dcb35h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 7C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b73d8h
        push 5dcb38h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2A 7C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b73dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 16 7C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 ED C7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 15 34 7A 5D 00: mov dword ptr [0x5d7a34], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b73e4h
        ; Exact mapped bytes A1 34 7A 5D 00: mov eax, dword ptr [0x5d7a34]
        __asm _emit 0xa1
        __asm _emit 0x34
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
        ; Exact mapped bytes E8 E4 7B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b73ech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D0 7B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A7 C7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D 38 7A 5D 00: mov dword ptr [0x5d7a38], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b73fch
        ; Exact mapped bytes 8B 15 38 7A 5D 00: mov edx, dword ptr [0x5d7a38]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
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
        ; Exact mapped bytes E8 9D 7B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b740ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 89 7B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 60 C7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A3 3C 7A 5D 00: mov dword ptr [0x5d7a3c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b741ch
        ; Exact mapped bytes 8B 0D 3C 7A 5D 00: mov ecx, dword ptr [0x5d7a3c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
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
        ; Exact mapped bytes E8 57 7B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b742ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 7B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 1A C7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 40 7A 5D 00: mov dword ptr [0x5d7a40], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b743ch
        ; Exact mapped bytes A1 40 7A 5D 00: mov eax, dword ptr [0x5d7a40]
        __asm _emit 0xa1
        __asm _emit 0x40
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
        ; Exact mapped bytes E8 11 7B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b744ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FD 7A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D4 C6 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 89 0D 44 7A 5D 00: mov dword ptr [0x5d7a44], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7458h
        ; Exact mapped bytes 8B 15 44 7A 5D 00: mov edx, dword ptr [0x5d7a44]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 CA 7A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7464h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B6 7A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 8D C6 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes A3 48 7A 5D 00: mov dword ptr [0x5d7a48], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7478h
        ; Exact mapped bytes 8B 0D 48 7A 5D 00: mov ecx, dword ptr [0x5d7a48]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
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
        ; Exact mapped bytes E8 84 7A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b748ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 70 7A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 47 C6 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 15 4C 7A 5D 00: mov dword ptr [0x5d7a4c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b74a0h
        ; Exact mapped bytes A1 4C 7A 5D 00: mov eax, dword ptr [0x5d7a4c]
        __asm _emit 0xa1
        __asm _emit 0x4c
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
        ; Exact mapped bytes E8 3E 7A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b74b4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2A 7A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 01 C6 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 0D 50 7A 5D 00: mov dword ptr [0x5d7a50], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b74c8h
        ; Exact mapped bytes 8B 15 50 7A 5D 00: mov edx, dword ptr [0x5d7a50]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
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
        ; Exact mapped bytes E8 F7 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b74dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E3 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 BA C5 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes A3 54 7A 5D 00: mov dword ptr [0x5d7a54], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b74f4h
        ; Exact mapped bytes 8B 0D 54 7A 5D 00: mov ecx, dword ptr [0x5d7a54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
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
        ; Exact mapped bytes E8 B1 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b750ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 74 C5 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 89 15 58 7A 5D 00: mov dword ptr [0x5d7a58], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7514h
        ; Exact mapped bytes A1 58 7A 5D 00: mov eax, dword ptr [0x5d7a58]
        __asm _emit 0xa1
        __asm _emit 0x58
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
        ; Exact mapped bytes E8 6B 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b751ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 57 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 2E C5 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 89 0D 5C 7A 5D 00: mov dword ptr [0x5d7a5c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b752ch
        ; Exact mapped bytes 8B 15 5C 7A 5D 00: mov edx, dword ptr [0x5d7a5c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
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
        ; Exact mapped bytes E8 24 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b753ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 10 79 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E7 C4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes A3 60 7A 5D 00: mov dword ptr [0x5d7a60], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7548h
        ; Exact mapped bytes 8B 0D 60 7A 5D 00: mov ecx, dword ptr [0x5d7a60]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
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
        ; Exact mapped bytes E8 DE 78 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7554h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CA 78 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A1 C4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 89 15 64 7A 5D 00: mov dword ptr [0x5d7a64], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7564h
        ; Exact mapped bytes A1 64 7A 5D 00: mov eax, dword ptr [0x5d7a64]
        __asm _emit 0xa1
        __asm _emit 0x64
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
        ; Exact mapped bytes E8 98 78 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7574h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 84 78 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 5B C4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 89 0D 68 7A 5D 00: mov dword ptr [0x5d7a68], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7580h
        ; Exact mapped bytes 8B 15 68 7A 5D 00: mov edx, dword ptr [0x5d7a68]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 51 78 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b758ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3D 78 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 14 C4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes A3 6C 7A 5D 00: mov dword ptr [0x5d7a6c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b75a0h
        ; Exact mapped bytes 8B 0D 6C 7A 5D 00: mov ecx, dword ptr [0x5d7a6c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
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
        ; Exact mapped bytes E8 0B 78 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b75b4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F7 77 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CE C3 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 89 15 70 7A 5D 00: mov dword ptr [0x5d7a70], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b75c8h
        ; Exact mapped bytes A1 70 7A 5D 00: mov eax, dword ptr [0x5d7a70]
        __asm _emit 0xa1
        __asm _emit 0x70
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
        ; Exact mapped bytes E8 C5 77 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b75dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 77 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 88 C3 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 89 0D 74 7A 5D 00: mov dword ptr [0x5d7a74], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b75ech
        ; Exact mapped bytes 8B 15 74 7A 5D 00: mov edx, dword ptr [0x5d7a74]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
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
        ; Exact mapped bytes E8 7E 77 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b75fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6A 77 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 41 C3 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes A3 78 7A 5D 00: mov dword ptr [0x5d7a78], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7610h
        ; Exact mapped bytes 8B 0D 78 7A 5D 00: mov ecx, dword ptr [0x5d7a78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
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
        ; Exact mapped bytes E8 38 77 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7624h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 24 77 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FB C2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 89 15 7C 7A 5D 00: mov dword ptr [0x5d7a7c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7638h
        ; Exact mapped bytes A1 7C 7A 5D 00: mov eax, dword ptr [0x5d7a7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 F2 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b764ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DE 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B5 C2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 89 0D 80 7A 5D 00: mov dword ptr [0x5d7a80], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b765ch
        ; Exact mapped bytes 8B 15 80 7A 5D 00: mov edx, dword ptr [0x5d7a80]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
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
        ; Exact mapped bytes E8 AB 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b766ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 97 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 6E C2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes A3 84 7A 5D 00: mov dword ptr [0x5d7a84], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b767ch
        ; Exact mapped bytes 8B 0D 84 7A 5D 00: mov ecx, dword ptr [0x5d7a84]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
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
        ; Exact mapped bytes E8 65 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b768ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 51 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 28 C2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 89 15 88 7A 5D 00: mov dword ptr [0x5d7a88], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b769ch
        ; Exact mapped bytes A1 88 7A 5D 00: mov eax, dword ptr [0x5d7a88]
        __asm _emit 0xa1
        __asm _emit 0x88
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
        ; Exact mapped bytes E8 1F 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b76ach
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B 76 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E2 C1 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 89 0D 8C 7A 5D 00: mov dword ptr [0x5d7a8c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b76b8h
        ; Exact mapped bytes 8B 15 8C 7A 5D 00: mov edx, dword ptr [0x5d7a8c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
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
        ; Exact mapped bytes E8 D8 75 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b76c4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C4 75 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 9B C1 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes A3 90 7A 5D 00: mov dword ptr [0x5d7a90], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b76d0h
        ; Exact mapped bytes 8B 0D 90 7A 5D 00: mov ecx, dword ptr [0x5d7a90]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 92 75 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b76dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E 75 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 55 C1 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 89 15 94 7A 5D 00: mov dword ptr [0x5d7a94], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b76ech
        ; Exact mapped bytes A1 94 7A 5D 00: mov eax, dword ptr [0x5d7a94]
        __asm _emit 0xa1
        __asm _emit 0x94
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
        ; Exact mapped bytes E8 4C 75 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b76fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 38 75 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 0F C1 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 89 0D 98 7A 5D 00: mov dword ptr [0x5d7a98], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7710h
        ; Exact mapped bytes 8B 15 98 7A 5D 00: mov edx, dword ptr [0x5d7a98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
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
        ; Exact mapped bytes E8 05 75 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7724h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F1 74 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C8 C0 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes A3 9C 7A 5D 00: mov dword ptr [0x5d7a9c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7738h
        ; Exact mapped bytes 8B 0D 9C 7A 5D 00: mov ecx, dword ptr [0x5d7a9c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
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
        ; Exact mapped bytes E8 BF 74 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b774ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB 74 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 82 C0 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        ; Exact mapped bytes 89 15 A0 7A 5D 00: mov dword ptr [0x5d7aa0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7764h
        ; Exact mapped bytes A1 A0 7A 5D 00: mov eax, dword ptr [0x5d7aa0]
        __asm _emit 0xa1
        __asm _emit 0xa0
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
        ; Exact mapped bytes E8 79 74 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b777ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 65 74 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3C C0 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 89 0D A4 7A 5D 00: mov dword ptr [0x5d7aa4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7790h
        ; Exact mapped bytes 8B 15 A4 7A 5D 00: mov edx, dword ptr [0x5d7aa4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
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
        ; Exact mapped bytes E8 32 74 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b77a4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1E 74 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F5 BF 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes A3 A8 7A 5D 00: mov dword ptr [0x5d7aa8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b77bch
        ; Exact mapped bytes 8B 0D A8 7A 5D 00: mov ecx, dword ptr [0x5d7aa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
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
        ; Exact mapped bytes E8 EC 73 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b77d4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D8 73 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AF BF 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 AC 7A 5D 00: mov dword ptr [0x5d7aac], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b77e4h
        ; Exact mapped bytes A1 AC 7A 5D 00: mov eax, dword ptr [0x5d7aac]
        __asm _emit 0xa1
        __asm _emit 0xac
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
        ; Exact mapped bytes E8 A6 73 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b77f4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 92 73 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 69 BF 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes 89 0D B0 7A 5D 00: mov dword ptr [0x5d7ab0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7804h
        ; Exact mapped bytes 8B 15 B0 7A 5D 00: mov edx, dword ptr [0x5d7ab0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
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
        ; Exact mapped bytes E8 5F 73 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7814h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4B 73 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 22 BF 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        ; Exact mapped bytes A3 B4 7A 5D 00: mov dword ptr [0x5d7ab4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7824h
        ; Exact mapped bytes 8B 0D B4 7A 5D 00: mov ecx, dword ptr [0x5d7ab4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
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
        ; Exact mapped bytes E8 13 73 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7834h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FF 72 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D6 BE 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 89 15 B8 7A 5D 00: mov dword ptr [0x5d7ab8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7848h
        ; Exact mapped bytes A1 B8 7A 5D 00: mov eax, dword ptr [0x5d7ab8]
        __asm _emit 0xa1
        __asm _emit 0xb8
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
        ; Exact mapped bytes E8 C7 72 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b785ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 72 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 8A BE 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 89 0D BC 7A 5D 00: mov dword ptr [0x5d7abc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7874h
        ; Exact mapped bytes 8B 15 BC 7A 5D 00: mov edx, dword ptr [0x5d7abc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
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
        ; Exact mapped bytes E8 7A 72 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b788ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 72 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3D BE 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes A3 C0 7A 5D 00: mov dword ptr [0x5d7ac0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b78a4h
        ; Exact mapped bytes 8B 0D C0 7A 5D 00: mov ecx, dword ptr [0x5d7ac0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
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
        ; Exact mapped bytes E8 2E 72 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b78bch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1A 72 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F1 BD 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 89 15 C4 7A 5D 00: mov dword ptr [0x5d7ac4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b78d4h
        ; Exact mapped bytes A1 C4 7A 5D 00: mov eax, dword ptr [0x5d7ac4]
        __asm _emit 0xa1
        __asm _emit 0xc4
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
        ; Exact mapped bytes E8 E2 71 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b78ech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE 71 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A5 BD 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 89 0D C8 7A 5D 00: mov dword ptr [0x5d7ac8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7904h
        ; Exact mapped bytes 8B 15 C8 7A 5D 00: mov edx, dword ptr [0x5d7ac8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
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
        ; Exact mapped bytes E8 95 71 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b791ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 81 71 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 58 BD 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes A3 CC 7A 5D 00: mov dword ptr [0x5d7acc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7930h
        ; Exact mapped bytes 8B 0D CC 7A 5D 00: mov ecx, dword ptr [0x5d7acc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
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
        ; Exact mapped bytes E8 49 71 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7944h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 35 71 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 0C BD 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 89 15 D0 7A 5D 00: mov dword ptr [0x5d7ad0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b795ch
        ; Exact mapped bytes A1 D0 7A 5D 00: mov eax, dword ptr [0x5d7ad0]
        __asm _emit 0xa1
        __asm _emit 0xd0
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
        ; Exact mapped bytes E8 FD 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7974h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E9 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C0 BC 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes 89 0D D4 7A 5D 00: mov dword ptr [0x5d7ad4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7988h
        ; Exact mapped bytes 8B 15 D4 7A 5D 00: mov edx, dword ptr [0x5d7ad4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
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
        ; Exact mapped bytes E8 B0 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b799ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9C 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 73 BC 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes A3 D8 7A 5D 00: mov dword ptr [0x5d7ad8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b79a8h
        ; Exact mapped bytes 8B 0D D8 7A 5D 00: mov ecx, dword ptr [0x5d7ad8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
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
        ; Exact mapped bytes E8 64 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b79b4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 27 BC 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes 89 15 DC 7A 5D 00: mov dword ptr [0x5d7adc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b79c4h
        ; Exact mapped bytes A1 DC 7A 5D 00: mov eax, dword ptr [0x5d7adc]
        __asm _emit 0xa1
        __asm _emit 0xdc
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
        ; Exact mapped bytes E8 18 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b79d4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 04 70 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 DB BB 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes 89 0D E0 7A 5D 00: mov dword ptr [0x5d7ae0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b79e4h
        ; Exact mapped bytes 8B 15 E0 7A 5D 00: mov edx, dword ptr [0x5d7ae0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
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
        ; Exact mapped bytes E8 CB 6F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b79f4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B7 6F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 8E BB 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes A3 E4 7A 5D 00: mov dword ptr [0x5d7ae4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7a08h
        ; Exact mapped bytes 8B 0D E4 7A 5D 00: mov ecx, dword ptr [0x5d7ae4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
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
        ; Exact mapped bytes E8 7F 6F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7a1ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6B 6F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 42 BB 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbb
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 89 15 E8 7A 5D 00: mov dword ptr [0x5d7ae8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7a2ch
        ; Exact mapped bytes A1 E8 7A 5D 00: mov eax, dword ptr [0x5d7ae8]
        __asm _emit 0xa1
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 33 6F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7a3ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1F 6F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F6 BA 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes 89 0D EC 7A 5D 00: mov dword ptr [0x5d7aec], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7a48h
        ; Exact mapped bytes 8B 15 EC 7A 5D 00: mov edx, dword ptr [0x5d7aec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
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
        ; Exact mapped bytes E8 E6 6E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7a54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D2 6E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A9 BA 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes A3 F0 7A 5D 00: mov dword ptr [0x5d7af0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7a60h
        ; Exact mapped bytes 8B 0D F0 7A 5D 00: mov ecx, dword ptr [0x5d7af0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
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
        ; Exact mapped bytes E8 9A 6E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7a6ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 86 6E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 5D BA 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 89 15 F4 7A 5D 00: mov dword ptr [0x5d7af4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7a7ch
        ; Exact mapped bytes A1 F4 7A 5D 00: mov eax, dword ptr [0x5d7af4]
        __asm _emit 0xa1
        __asm _emit 0xf4
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
        ; Exact mapped bytes E8 4E 6E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7a8ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3A 6E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 11 BA 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes 89 0D F8 7A 5D 00: mov dword ptr [0x5d7af8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7aa0h
        ; Exact mapped bytes 8B 15 F8 7A 5D 00: mov edx, dword ptr [0x5d7af8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 01 6E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7ab4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 ED 6D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C4 B9 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov eax, dword ptr [ebp - 0cch]
        ; Exact mapped bytes A3 FC 7A 5D 00: mov dword ptr [0x5d7afc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x7a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7ac4h
        ; Exact mapped bytes 8B 0D FC 7A 5D 00: mov ecx, dword ptr [0x5d7afc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
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
        ; Exact mapped bytes E8 B5 6D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7ad4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 6D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 78 B9 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov edx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes 89 15 00 7B 5D 00: mov dword ptr [0x5d7b00], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7ae0h
        ; Exact mapped bytes A1 00 7B 5D 00: mov eax, dword ptr [0x5d7b00]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 69 6D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7aech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 6D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 2C B9 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes 89 0D 04 7B 5D 00: mov dword ptr [0x5d7b04], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7afch
        ; Exact mapped bytes 8B 15 04 7B 5D 00: mov edx, dword ptr [0x5d7b04]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 1C 6D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7b0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 08 6D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 DF B8 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes A3 08 7B 5D 00: mov dword ptr [0x5d7b08], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7b18h
        ; Exact mapped bytes 8B 0D 08 7B 5D 00: mov ecx, dword ptr [0x5d7b08]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 D0 6C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7b24h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC 6C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 93 B8 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes 89 15 0C 7B 5D 00: mov dword ptr [0x5d7b0c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7b2ch
        ; Exact mapped bytes A1 0C 7B 5D 00: mov eax, dword ptr [0x5d7b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 84 6C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7b34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 70 6C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 47 B8 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb8
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes 89 0D 10 7B 5D 00: mov dword ptr [0x5d7b10], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7b44h
        ; Exact mapped bytes 8B 15 10 7B 5D 00: mov edx, dword ptr [0x5d7b10]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 37 6C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7b54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 23 6C 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FA B7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes A3 14 7B 5D 00: mov dword ptr [0x5d7b14], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7b64h
        ; Exact mapped bytes 8B 0D 14 7B 5D 00: mov ecx, dword ptr [0x5d7b14]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 EB 6B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7b74h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 6B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AE B7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov edx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes 89 15 18 7B 5D 00: mov dword ptr [0x5d7b18], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7b84h
        ; Exact mapped bytes A1 18 7B 5D 00: mov eax, dword ptr [0x5d7b18]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 9F 6B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7b94h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8B 6B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 62 B7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 89 0D 1C 7B 5D 00: mov dword ptr [0x5d7b1c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7ba4h
        ; Exact mapped bytes 8B 15 1C 7B 5D 00: mov edx, dword ptr [0x5d7b1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 52 6B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7bb4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3E 6B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 15 B7 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov eax, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes A3 20 7B 5D 00: mov dword ptr [0x5d7b20], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7bc4h
        ; Exact mapped bytes 8B 0D 20 7B 5D 00: mov ecx, dword ptr [0x5d7b20]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 06 6B 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7bd4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F2 6A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C9 B6 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov edx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes 89 15 24 7B 5D 00: mov dword ptr [0x5d7b24], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7be4h
        ; Exact mapped bytes A1 24 7B 5D 00: mov eax, dword ptr [0x5d7b24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 BA 6A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7bf4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A6 6A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 7D B6 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes 89 0D 28 7B 5D 00: mov dword ptr [0x5d7b28], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7c04h
        ; Exact mapped bytes 8B 15 28 7B 5D 00: mov edx, dword ptr [0x5d7b28]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 6D 6A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7c14h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 59 6A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 30 B6 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov eax, dword ptr [ebp - 0fch]
        ; Exact mapped bytes A3 2C 7B 5D 00: mov dword ptr [0x5d7b2c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7c24h
        ; Exact mapped bytes 8B 0D 2C 7B 5D 00: mov ecx, dword ptr [0x5d7b2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 21 6A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7c34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0D 6A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E4 B5 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov edx, dword ptr [ebp - 100h]
        ; Exact mapped bytes 89 15 30 7B 5D 00: mov dword ptr [0x5d7b30], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7c48h
        ; Exact mapped bytes A1 30 7B 5D 00: mov eax, dword ptr [0x5d7b30]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 D5 69 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7c5ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C1 69 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 98 B5 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes 89 0D 34 7B 5D 00: mov dword ptr [0x5d7b34], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7c68h
        ; Exact mapped bytes 8B 15 34 7B 5D 00: mov edx, dword ptr [0x5d7b34]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 88 69 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7c74h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 74 69 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 4B B5 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp - 108h]
        ; Exact mapped bytes A3 38 7B 5D 00: mov dword ptr [0x5d7b38], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7c84h
        ; Exact mapped bytes 8B 0D 38 7B 5D 00: mov ecx, dword ptr [0x5d7b38]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 3C 69 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7c94h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 28 69 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FF B4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov edx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 89 15 3C 7B 5D 00: mov dword ptr [0x5d7b3c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7ca4h
        ; Exact mapped bytes A1 3C 7B 5D 00: mov eax, dword ptr [0x5d7b3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 F0 68 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7cb4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DC 68 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B3 B4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 89 0D 40 7B 5D 00: mov dword ptr [0x5d7b40], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7cc4h
        ; Exact mapped bytes 8B 15 40 7B 5D 00: mov edx, dword ptr [0x5d7b40]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 A3 68 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7cd4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8F 68 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 66 B4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        ; Exact mapped bytes A3 44 7B 5D 00: mov dword ptr [0x5d7b44], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7ce0h
        ; Exact mapped bytes 8B 0D 44 7B 5D 00: mov ecx, dword ptr [0x5d7b44]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 57 68 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7cech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 68 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 1A B4 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp - 118h]
        ; Exact mapped bytes 89 15 48 7B 5D 00: mov dword ptr [0x5d7b48], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7cf8h
        ; Exact mapped bytes A1 48 7B 5D 00: mov eax, dword ptr [0x5d7b48]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 0B 68 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7d04h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F7 67 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CE B3 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes 89 0D 4C 7B 5D 00: mov dword ptr [0x5d7b4c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7d14h
        ; Exact mapped bytes 8B 15 4C 7B 5D 00: mov edx, dword ptr [0x5d7b4c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 BE 67 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7d24h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AA 67 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 81 B3 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        ; Exact mapped bytes A3 50 7B 5D 00: mov dword ptr [0x5d7b50], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7d2ch
        ; Exact mapped bytes 8B 0D 50 7B 5D 00: mov ecx, dword ptr [0x5d7b50]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 72 67 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7d34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5E 67 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 35 B3 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 89 15 54 7B 5D 00: mov dword ptr [0x5d7b54], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7d44h
        ; Exact mapped bytes A1 54 7B 5D 00: mov eax, dword ptr [0x5d7b54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 26 67 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7d54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 67 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E9 B2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes 89 0D 58 7B 5D 00: mov dword ptr [0x5d7b58], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7d6ch
        ; Exact mapped bytes 8B 15 58 7B 5D 00: mov edx, dword ptr [0x5d7b58]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 D9 66 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7d84h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C5 66 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 9C B2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes A3 5C 7B 5D 00: mov dword ptr [0x5d7b5c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7d90h
        ; Exact mapped bytes 8B 0D 5C 7B 5D 00: mov ecx, dword ptr [0x5d7b5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 8D 66 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7d9ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 79 66 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 50 B2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 130h]
        ; Exact mapped bytes 89 15 60 7B 5D 00: mov dword ptr [0x5d7b60], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7db0h
        ; Exact mapped bytes A1 60 7B 5D 00: mov eax, dword ptr [0x5d7b60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 41 66 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7dc4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D 66 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 04 B2 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 89 0D 64 7B 5D 00: mov dword ptr [0x5d7b64], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7dd4h
        ; Exact mapped bytes 8B 15 64 7B 5D 00: mov edx, dword ptr [0x5d7b64]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 F4 65 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7de4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 65 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B7 B1 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        ; Exact mapped bytes A3 68 7B 5D 00: mov dword ptr [0x5d7b68], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7df4h
        ; Exact mapped bytes 8B 0D 68 7B 5D 00: mov ecx, dword ptr [0x5d7b68]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 A8 65 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7e04h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 94 65 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 6B B1 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 89 15 6C 7B 5D 00: mov dword ptr [0x5d7b6c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7e1ch
        ; Exact mapped bytes A1 6C 7B 5D 00: mov eax, dword ptr [0x5d7b6c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 5C 65 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7e34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 48 65 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 1F B1 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes 89 0D 70 7B 5D 00: mov dword ptr [0x5d7b70], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7e4ch
        ; Exact mapped bytes 8B 15 70 7B 5D 00: mov edx, dword ptr [0x5d7b70]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 0F 65 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7e64h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FB 64 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D2 B0 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 144h]
        ; Exact mapped bytes A3 74 7B 5D 00: mov dword ptr [0x5d7b74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7e74h
        ; Exact mapped bytes 8B 0D 74 7B 5D 00: mov ecx, dword ptr [0x5d7b74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 C3 64 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7e84h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AF 64 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 86 B0 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        ; Exact mapped bytes 89 15 78 7B 5D 00: mov dword ptr [0x5d7b78], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7e98h
        ; Exact mapped bytes A1 78 7B 5D 00: mov eax, dword ptr [0x5d7b78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 77 64 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5b7each
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 63 64 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3A B0 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes 89 0D 7C 7B 5D 00: mov dword ptr [0x5d7b7c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b7ec4h
        ; Exact mapped bytes 8B 15 7C 7B 5D 00: mov edx, dword ptr [0x5d7b7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x7b
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
        ; Exact mapped bytes E8 2A 64 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 150h
        cmp ebp, esp
        ; Exact mapped bytes E8 1B 64 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
