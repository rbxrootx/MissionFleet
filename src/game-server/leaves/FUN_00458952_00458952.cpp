// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00458952 .. +0x194D bytes.
extern "C" __declspec(naked) void FUN_00458952_00458952() {
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
        mov dword ptr [eax + 4], 0eh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 C6 6B FF FF: call 0x44f555
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6b
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
        ; Exact mapped bytes E8 2E FE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4589c4
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 5b8c3ch
        ; Exact mapped bytes E8 BD 4E 0B 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 21 51 09 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        push 5b8c58h
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 66 55 09 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 3ch
        ; Exact mapped bytes E8 A9 85 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x85
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
        ; Exact mapped bytes E8 D1 FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8c70h
        push 5d78d8h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8c74h
        push 5d78dbh
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9F FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8c78h
        push 5d78deh
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 86 FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8c7ch
        push 5d78e1h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6D FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8c80h
        push 5d78e4h
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 54 FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8c84h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 40 FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 17 49 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 15 C0 7B 5D 00: mov dword ptr [0x5d7bc0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8c8ch
        ; Exact mapped bytes A1 C0 7B 5D 00: mov eax, dword ptr [0x5d7bc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
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
        ; Exact mapped bytes E8 0E FD 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8c94h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FA FC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D1 48 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D C4 7B 5D 00: mov dword ptr [0x5d7bc4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8ca4h
        ; Exact mapped bytes 8B 15 C4 7B 5D 00: mov edx, dword ptr [0x5d7bc4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
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
        ; Exact mapped bytes E8 C7 FC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8cb4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 FC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 8A 48 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A3 C8 7B 5D 00: mov dword ptr [0x5d7bc8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8cc4h
        ; Exact mapped bytes 8B 0D C8 7B 5D 00: mov ecx, dword ptr [0x5d7bc8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
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
        ; Exact mapped bytes E8 81 FC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8cd4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6D FC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 44 48 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 15 CC 7B 5D 00: mov dword ptr [0x5d7bcc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8ce4h
        ; Exact mapped bytes A1 CC 7B 5D 00: mov eax, dword ptr [0x5d7bcc]
        __asm _emit 0xa1
        __asm _emit 0xcc
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
        ; Exact mapped bytes E8 3B FC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8cf4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 27 FC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FE 47 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 89 0D D0 7B 5D 00: mov dword ptr [0x5d7bd0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8d00h
        ; Exact mapped bytes 8B 15 D0 7B 5D 00: mov edx, dword ptr [0x5d7bd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
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
        ; Exact mapped bytes E8 F4 FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B7 47 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes A3 D4 7B 5D 00: mov dword ptr [0x5d7bd4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8d20h
        ; Exact mapped bytes 8B 0D D4 7B 5D 00: mov ecx, dword ptr [0x5d7bd4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
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
        ; Exact mapped bytes E8 AE FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8d34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 71 47 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 15 D8 7B 5D 00: mov dword ptr [0x5d7bd8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8d48h
        ; Exact mapped bytes A1 D8 7B 5D 00: mov eax, dword ptr [0x5d7bd8]
        __asm _emit 0xa1
        __asm _emit 0xd8
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
        ; Exact mapped bytes E8 68 FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8d5ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 54 FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 2B 47 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 0D DC 7B 5D 00: mov dword ptr [0x5d7bdc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8d70h
        ; Exact mapped bytes 8B 15 DC 7B 5D 00: mov edx, dword ptr [0x5d7bdc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
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
        ; Exact mapped bytes E8 21 FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8d84h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0D FB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E4 46 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes A3 E0 7B 5D 00: mov dword ptr [0x5d7be0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8d9ch
        ; Exact mapped bytes 8B 0D E0 7B 5D 00: mov ecx, dword ptr [0x5d7be0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
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
        ; Exact mapped bytes E8 DB FA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8db4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C7 FA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 9E 46 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 89 15 E4 7B 5D 00: mov dword ptr [0x5d7be4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8dbch
        ; Exact mapped bytes A1 E4 7B 5D 00: mov eax, dword ptr [0x5d7be4]
        __asm _emit 0xa1
        __asm _emit 0xe4
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
        ; Exact mapped bytes E8 95 FA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8dc4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 81 FA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 58 46 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 89 0D E8 7B 5D 00: mov dword ptr [0x5d7be8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8dd4h
        ; Exact mapped bytes 8B 15 E8 7B 5D 00: mov edx, dword ptr [0x5d7be8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe8
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
        ; Exact mapped bytes E8 4E FA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8de4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3A FA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 11 46 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes A3 EC 7B 5D 00: mov dword ptr [0x5d7bec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8df0h
        ; Exact mapped bytes 8B 0D EC 7B 5D 00: mov ecx, dword ptr [0x5d7bec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
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
        ; Exact mapped bytes E8 08 FA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8dfch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 F9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CB 45 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 89 15 F0 7B 5D 00: mov dword ptr [0x5d7bf0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8e0ch
        ; Exact mapped bytes A1 F0 7B 5D 00: mov eax, dword ptr [0x5d7bf0]
        __asm _emit 0xa1
        __asm _emit 0xf0
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
        ; Exact mapped bytes E8 C2 F9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8e1ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AE F9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 85 45 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 89 0D F4 7B 5D 00: mov dword ptr [0x5d7bf4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8e28h
        ; Exact mapped bytes 8B 15 F4 7B 5D 00: mov edx, dword ptr [0x5d7bf4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
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
        ; Exact mapped bytes E8 7B F9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8e34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 F9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3E 45 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes A3 F8 7B 5D 00: mov dword ptr [0x5d7bf8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8e48h
        ; Exact mapped bytes 8B 0D F8 7B 5D 00: mov ecx, dword ptr [0x5d7bf8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 35 F9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8e5ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 21 F9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F8 44 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 89 15 FC 7B 5D 00: mov dword ptr [0x5d7bfc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x7b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8e70h
        ; Exact mapped bytes A1 FC 7B 5D 00: mov eax, dword ptr [0x5d7bfc]
        __asm _emit 0xa1
        __asm _emit 0xfc
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
        ; Exact mapped bytes E8 EF F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8e84h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DB F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B2 44 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 89 0D 00 7C 5D 00: mov dword ptr [0x5d7c00], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8e94h
        ; Exact mapped bytes 8B 15 00 7C 5D 00: mov edx, dword ptr [0x5d7c00]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 A8 F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8ea4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 94 F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 6B 44 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes A3 04 7C 5D 00: mov dword ptr [0x5d7c04], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8eb8h
        ; Exact mapped bytes 8B 0D 04 7C 5D 00: mov ecx, dword ptr [0x5d7c04]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 62 F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8ecch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4E F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 25 44 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 89 15 08 7C 5D 00: mov dword ptr [0x5d7c08], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8ee0h
        ; Exact mapped bytes A1 08 7C 5D 00: mov eax, dword ptr [0x5d7c08]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 1C F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8ef4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 08 F8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 DF 43 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 89 0D 0C 7C 5D 00: mov dword ptr [0x5d7c0c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8f04h
        ; Exact mapped bytes 8B 15 0C 7C 5D 00: mov edx, dword ptr [0x5d7c0c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 D5 F7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8f14h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C1 F7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 98 43 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes A3 10 7C 5D 00: mov dword ptr [0x5d7c10], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8f24h
        ; Exact mapped bytes 8B 0D 10 7C 5D 00: mov ecx, dword ptr [0x5d7c10]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 8F F7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8f34h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7B F7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 52 43 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 89 15 14 7C 5D 00: mov dword ptr [0x5d7c14], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8f44h
        ; Exact mapped bytes A1 14 7C 5D 00: mov eax, dword ptr [0x5d7c14]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 49 F7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8f54h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 35 F7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 0C 43 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 89 0D 18 7C 5D 00: mov dword ptr [0x5d7c18], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8f60h
        ; Exact mapped bytes 8B 15 18 7C 5D 00: mov edx, dword ptr [0x5d7c18]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 02 F7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8f6ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EE F6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C5 42 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes A3 1C 7C 5D 00: mov dword ptr [0x5d7c1c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8f78h
        ; Exact mapped bytes 8B 0D 1C 7C 5D 00: mov ecx, dword ptr [0x5d7c1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 BC F6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8f84h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A8 F6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 7F 42 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 89 15 20 7C 5D 00: mov dword ptr [0x5d7c20], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8f94h
        ; Exact mapped bytes A1 20 7C 5D 00: mov eax, dword ptr [0x5d7c20]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 76 F6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8fa4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 62 F6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 39 42 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 89 0D 24 7C 5D 00: mov dword ptr [0x5d7c24], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8fb8h
        ; Exact mapped bytes 8B 15 24 7C 5D 00: mov edx, dword ptr [0x5d7c24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 2F F6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8fcch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1B F6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F2 41 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes A3 28 7C 5D 00: mov dword ptr [0x5d7c28], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b8fe0h
        ; Exact mapped bytes 8B 0D 28 7C 5D 00: mov ecx, dword ptr [0x5d7c28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 E9 F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b8ff4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D5 F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AC 41 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        ; Exact mapped bytes 89 15 2C 7C 5D 00: mov dword ptr [0x5d7c2c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b900ch
        ; Exact mapped bytes A1 2C 7C 5D 00: mov eax, dword ptr [0x5d7c2c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 A3 F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9024h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8F F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 66 41 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 89 0D 30 7C 5D 00: mov dword ptr [0x5d7c30], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9038h
        ; Exact mapped bytes 8B 15 30 7C 5D 00: mov edx, dword ptr [0x5d7c30]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 5C F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b904ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 48 F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 1F 41 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes A3 34 7C 5D 00: mov dword ptr [0x5d7c34], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9064h
        ; Exact mapped bytes 8B 0D 34 7C 5D 00: mov ecx, dword ptr [0x5d7c34]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 16 F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b907ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 F5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D9 40 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 89 15 38 7C 5D 00: mov dword ptr [0x5d7c38], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b908ch
        ; Exact mapped bytes A1 38 7C 5D 00: mov eax, dword ptr [0x5d7c38]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 D0 F4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b909ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC F4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 93 40 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes 89 0D 3C 7C 5D 00: mov dword ptr [0x5d7c3c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b90ach
        ; Exact mapped bytes 8B 15 3C 7C 5D 00: mov edx, dword ptr [0x5d7c3c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 89 F4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b90bch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 75 F4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 4C 40 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        ; Exact mapped bytes A3 40 7C 5D 00: mov dword ptr [0x5d7c40], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b90cch
        ; Exact mapped bytes 8B 0D 40 7C 5D 00: mov ecx, dword ptr [0x5d7c40]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 3D F4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b90dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 29 F4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 00 40 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 89 15 44 7C 5D 00: mov dword ptr [0x5d7c44], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b90f0h
        ; Exact mapped bytes A1 44 7C 5D 00: mov eax, dword ptr [0x5d7c44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 F1 F3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9104h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DD F3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B4 3F 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 89 0D 48 7C 5D 00: mov dword ptr [0x5d7c48], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b911ch
        ; Exact mapped bytes 8B 15 48 7C 5D 00: mov edx, dword ptr [0x5d7c48]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 A4 F3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9134h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 F3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 67 3F 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        ; Exact mapped bytes A3 4C 7C 5D 00: mov dword ptr [0x5d7c4c], eax
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b914ch
        ; Exact mapped bytes 8B 0D 4C 7C 5D 00: mov ecx, dword ptr [0x5d7c4c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 58 F3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9164h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 44 F3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 1B 3F 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 89 15 50 7C 5D 00: mov dword ptr [0x5d7c50], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b917ch
        ; Exact mapped bytes A1 50 7C 5D 00: mov eax, dword ptr [0x5d7c50]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 0C F3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9194h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F8 F2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CF 3E 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 89 0D 54 7C 5D 00: mov dword ptr [0x5d7c54], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b91ach
        ; Exact mapped bytes 8B 15 54 7C 5D 00: mov edx, dword ptr [0x5d7c54]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 BF F2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b91c4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB F2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 82 3E 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes A3 58 7C 5D 00: mov dword ptr [0x5d7c58], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b91d8h
        ; Exact mapped bytes 8B 0D 58 7C 5D 00: mov ecx, dword ptr [0x5d7c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 73 F2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b91ech
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5F F2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 36 3E 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 89 15 5C 7C 5D 00: mov dword ptr [0x5d7c5c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9204h
        ; Exact mapped bytes A1 5C 7C 5D 00: mov eax, dword ptr [0x5d7c5c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 27 F2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b921ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 13 F2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 EA 3D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes 89 0D 60 7C 5D 00: mov dword ptr [0x5d7c60], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9230h
        ; Exact mapped bytes 8B 15 60 7C 5D 00: mov edx, dword ptr [0x5d7c60]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 DA F1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9244h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C6 F1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 9D 3D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes A3 64 7C 5D 00: mov dword ptr [0x5d7c64], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9250h
        ; Exact mapped bytes 8B 0D 64 7C 5D 00: mov ecx, dword ptr [0x5d7c64]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 8E F1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b925ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7A F1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 51 3D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes 89 15 68 7C 5D 00: mov dword ptr [0x5d7c68], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b926ch
        ; Exact mapped bytes A1 68 7C 5D 00: mov eax, dword ptr [0x5d7c68]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 42 F1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b927ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E F1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 05 3D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes 89 0D 6C 7C 5D 00: mov dword ptr [0x5d7c6c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b928ch
        ; Exact mapped bytes 8B 15 6C 7C 5D 00: mov edx, dword ptr [0x5d7c6c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 F5 F0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b929ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E1 F0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B8 3C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes A3 70 7C 5D 00: mov dword ptr [0x5d7c70], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b92b0h
        ; Exact mapped bytes 8B 0D 70 7C 5D 00: mov ecx, dword ptr [0x5d7c70]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 A9 F0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b92c4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 95 F0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 6C 3C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 89 15 74 7C 5D 00: mov dword ptr [0x5d7c74], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b92d4h
        ; Exact mapped bytes A1 74 7C 5D 00: mov eax, dword ptr [0x5d7c74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 5D F0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b92e4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 49 F0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 20 3C 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes 89 0D 78 7C 5D 00: mov dword ptr [0x5d7c78], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b92f0h
        ; Exact mapped bytes 8B 15 78 7C 5D 00: mov edx, dword ptr [0x5d7c78]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 10 F0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b92fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC EF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D3 3B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes A3 7C 7C 5D 00: mov dword ptr [0x5d7c7c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9308h
        ; Exact mapped bytes 8B 0D 7C 7C 5D 00: mov ecx, dword ptr [0x5d7c7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 C4 EF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9314h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 EF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 87 3B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes 89 15 80 7C 5D 00: mov dword ptr [0x5d7c80], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9324h
        ; Exact mapped bytes A1 80 7C 5D 00: mov eax, dword ptr [0x5d7c80]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 78 EF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9334h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 64 EF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3B 3B 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes 89 0D 84 7C 5D 00: mov dword ptr [0x5d7c84], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9348h
        ; Exact mapped bytes 8B 15 84 7C 5D 00: mov edx, dword ptr [0x5d7c84]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 2B EF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b935ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 17 EF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 EE 3A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov eax, dword ptr [ebp - 0cch]
        ; Exact mapped bytes A3 88 7C 5D 00: mov dword ptr [0x5d7c88], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b936ch
        ; Exact mapped bytes 8B 0D 88 7C 5D 00: mov ecx, dword ptr [0x5d7c88]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 DF EE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b937ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CB EE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A2 3A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov edx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes 89 15 8C 7C 5D 00: mov dword ptr [0x5d7c8c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9388h
        ; Exact mapped bytes A1 8C 7C 5D 00: mov eax, dword ptr [0x5d7c8c]
        __asm _emit 0xa1
        __asm _emit 0x8c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 93 EE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9394h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7F EE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 56 3A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes 89 0D 90 7C 5D 00: mov dword ptr [0x5d7c90], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b93a4h
        ; Exact mapped bytes 8B 15 90 7C 5D 00: mov edx, dword ptr [0x5d7c90]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 46 EE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b93b4h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 32 EE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 09 3A 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes A3 94 7C 5D 00: mov dword ptr [0x5d7c94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b93c0h
        ; Exact mapped bytes 8B 0D 94 7C 5D 00: mov ecx, dword ptr [0x5d7c94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 FA ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b93cch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E6 ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 BD 39 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes 89 15 98 7C 5D 00: mov dword ptr [0x5d7c98], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b93d4h
        ; Exact mapped bytes A1 98 7C 5D 00: mov eax, dword ptr [0x5d7c98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 AE ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b93dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 71 39 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes 89 0D 9C 7C 5D 00: mov dword ptr [0x5d7c9c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b93ech
        ; Exact mapped bytes 8B 15 9C 7C 5D 00: mov edx, dword ptr [0x5d7c9c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 61 ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b93fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4D ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 24 39 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes A3 A0 7C 5D 00: mov dword ptr [0x5d7ca0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b940ch
        ; Exact mapped bytes 8B 0D A0 7C 5D 00: mov ecx, dword ptr [0x5d7ca0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 15 ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b941ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 ED 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 D8 38 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov edx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes 89 15 A4 7C 5D 00: mov dword ptr [0x5d7ca4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b942ch
        ; Exact mapped bytes A1 A4 7C 5D 00: mov eax, dword ptr [0x5d7ca4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 C9 EC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b943ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B5 EC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 8C 38 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes 89 0D A8 7C 5D 00: mov dword ptr [0x5d7ca8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b944ch
        ; Exact mapped bytes 8B 15 A8 7C 5D 00: mov edx, dword ptr [0x5d7ca8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 7C EC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b945ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 68 EC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3F 38 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov eax, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes A3 AC 7C 5D 00: mov dword ptr [0x5d7cac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b946ch
        ; Exact mapped bytes 8B 0D AC 7C 5D 00: mov ecx, dword ptr [0x5d7cac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 30 EC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b947ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1C EC 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F3 37 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov edx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes 89 15 B0 7C 5D 00: mov dword ptr [0x5d7cb0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b948ch
        ; Exact mapped bytes A1 B0 7C 5D 00: mov eax, dword ptr [0x5d7cb0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 E4 EB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b949ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D0 EB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 A7 37 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes 89 0D B4 7C 5D 00: mov dword ptr [0x5d7cb4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b94ach
        ; Exact mapped bytes 8B 15 B4 7C 5D 00: mov edx, dword ptr [0x5d7cb4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 97 EB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b94bch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 83 EB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 5A 37 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov eax, dword ptr [ebp - 0fch]
        ; Exact mapped bytes A3 B8 7C 5D 00: mov dword ptr [0x5d7cb8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b94cch
        ; Exact mapped bytes 8B 0D B8 7C 5D 00: mov ecx, dword ptr [0x5d7cb8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 4B EB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b94dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 37 EB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 0E 37 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov edx, dword ptr [ebp - 100h]
        ; Exact mapped bytes 89 15 BC 7C 5D 00: mov dword ptr [0x5d7cbc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b94f0h
        ; Exact mapped bytes A1 BC 7C 5D 00: mov eax, dword ptr [0x5d7cbc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 FF EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9504h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EB EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C2 36 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes 89 0D C0 7C 5D 00: mov dword ptr [0x5d7cc0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9510h
        ; Exact mapped bytes 8B 15 C0 7C 5D 00: mov edx, dword ptr [0x5d7cc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 B2 EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b951ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9E EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 75 36 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp - 108h]
        ; Exact mapped bytes A3 C4 7C 5D 00: mov dword ptr [0x5d7cc4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b952ch
        ; Exact mapped bytes 8B 0D C4 7C 5D 00: mov ecx, dword ptr [0x5d7cc4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 66 EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b953ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 52 EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 29 36 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x36
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov edx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes 89 15 C8 7C 5D 00: mov dword ptr [0x5d7cc8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b954ch
        ; Exact mapped bytes A1 C8 7C 5D 00: mov eax, dword ptr [0x5d7cc8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 1A EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b955ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 EA 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 DD 35 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 89 0D CC 7C 5D 00: mov dword ptr [0x5d7ccc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b956ch
        ; Exact mapped bytes 8B 15 CC 7C 5D 00: mov edx, dword ptr [0x5d7ccc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 CD E9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b957ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B9 E9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 90 35 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        ; Exact mapped bytes A3 D0 7C 5D 00: mov dword ptr [0x5d7cd0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9588h
        ; Exact mapped bytes 8B 0D D0 7C 5D 00: mov ecx, dword ptr [0x5d7cd0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 81 E9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9594h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6D E9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 44 35 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp - 118h]
        ; Exact mapped bytes 89 15 D4 7C 5D 00: mov dword ptr [0x5d7cd4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b95a0h
        ; Exact mapped bytes A1 D4 7C 5D 00: mov eax, dword ptr [0x5d7cd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 35 E9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b95ach
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 21 E9 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F8 34 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes 89 0D D8 7C 5D 00: mov dword ptr [0x5d7cd8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b95bch
        ; Exact mapped bytes 8B 15 D8 7C 5D 00: mov edx, dword ptr [0x5d7cd8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 E8 E8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b95cch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D4 E8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AB 34 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        ; Exact mapped bytes A3 DC 7C 5D 00: mov dword ptr [0x5d7cdc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b95d4h
        ; Exact mapped bytes 8B 0D DC 7C 5D 00: mov ecx, dword ptr [0x5d7cdc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 9C E8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b95dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 88 E8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 5F 34 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 89 15 E0 7C 5D 00: mov dword ptr [0x5d7ce0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b95ech
        ; Exact mapped bytes A1 E0 7C 5D 00: mov eax, dword ptr [0x5d7ce0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 50 E8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b95fch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3C E8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 13 34 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes 89 0D E4 7C 5D 00: mov dword ptr [0x5d7ce4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9614h
        ; Exact mapped bytes 8B 15 E4 7C 5D 00: mov edx, dword ptr [0x5d7ce4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 03 E8 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b962ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EF E7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 C6 33 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        ; Exact mapped bytes A3 E8 7C 5D 00: mov dword ptr [0x5d7ce8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9638h
        ; Exact mapped bytes 8B 0D E8 7C 5D 00: mov ecx, dword ptr [0x5d7ce8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 B7 E7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9644h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 E7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 7A 33 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 130h]
        ; Exact mapped bytes 89 15 EC 7C 5D 00: mov dword ptr [0x5d7cec], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9658h
        ; Exact mapped bytes A1 EC 7C 5D 00: mov eax, dword ptr [0x5d7cec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 6B E7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b966ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 57 E7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 2E 33 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 89 0D F0 7C 5D 00: mov dword ptr [0x5d7cf0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b967ch
        ; Exact mapped bytes 8B 15 F0 7C 5D 00: mov edx, dword ptr [0x5d7cf0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 1E E7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b968ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0A E7 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 E1 32 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        ; Exact mapped bytes A3 F4 7C 5D 00: mov dword ptr [0x5d7cf4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b969ch
        ; Exact mapped bytes 8B 0D F4 7C 5D 00: mov ecx, dword ptr [0x5d7cf4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 D2 E6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b96ach
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BE E6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 95 32 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes 89 15 F8 7C 5D 00: mov dword ptr [0x5d7cf8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b96c4h
        ; Exact mapped bytes A1 F8 7C 5D 00: mov eax, dword ptr [0x5d7cf8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 86 E6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b96dch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 72 E6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 49 32 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes 89 0D FC 7C 5D 00: mov dword ptr [0x5d7cfc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x7c
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b96f4h
        ; Exact mapped bytes 8B 15 FC 7C 5D 00: mov edx, dword ptr [0x5d7cfc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x7c
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
        ; Exact mapped bytes E8 39 E6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b970ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 25 E6 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 FC 31 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 144h]
        ; Exact mapped bytes A3 00 7D 5D 00: mov dword ptr [0x5d7d00], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x7d
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b971ch
        ; Exact mapped bytes 8B 0D 00 7D 5D 00: mov ecx, dword ptr [0x5d7d00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x7d
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
        ; Exact mapped bytes E8 ED E5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b972ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D9 E5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 B0 31 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        ; Exact mapped bytes 89 15 04 7D 5D 00: mov dword ptr [0x5d7d04], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x7d
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b9740h
        ; Exact mapped bytes A1 04 7D 5D 00: mov eax, dword ptr [0x5d7d04]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x7d
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
        ; Exact mapped bytes E8 A1 E5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 5b9754h
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8D E5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        ; Exact mapped bytes E8 64 31 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes 89 0D 08 7D 5D 00: mov dword ptr [0x5d7d08], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x7d
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 5b976ch
        ; Exact mapped bytes 8B 15 08 7D 5D 00: mov edx, dword ptr [0x5d7d08]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x7d
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
        ; Exact mapped bytes E8 54 E5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 150h
        cmp ebp, esp
        ; Exact mapped bytes E8 45 E5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
