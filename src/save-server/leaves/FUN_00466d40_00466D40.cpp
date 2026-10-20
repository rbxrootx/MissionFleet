// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466D40 .. +0x511 bytes.
extern "C" __declspec(naked) void FUN_00466d40_00466D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x466d73
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 55 FA FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 D7 04 00 00: jmp 0x46724a
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x466d96
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 17: jne 0x466d96
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D4 05 00 00: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 B4 04 00 00: jmp 0x46724a
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 DA 67 00: mov eax, dword ptr [0x67da60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x466dd2
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 79 0D 00 00: call 0x467b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x466dcc
        __asm _emit 0x75
        __asm _emit 0x21
        push 63e24ch
        push 0
        push 246h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 9D 60 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466dcc
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x466da2
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 15 64 DA 67 00: mov edx, dword ptr [0x67da64]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 05 68 DA 67 00: cmp eax, dword ptr [0x67da68]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 75 01: jne 0x466de7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 2
        ; Exact mapped bytes FF 15 20 E2 67 00: call dword ptr [0x67e220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 5E: jne 0x466e6c
        __asm _emit 0x75
        __asm _emit 0x5e
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 2B: je 0x466e3f
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 63e3d4h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 32 60 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466e37
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x466e14
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes EB 26: jmp 0x466e65
        __asm _emit 0xeb
        __asm _emit 0x26
        push 63e3b0h
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 0A 60 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466e5f
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x466e3f
        __asm _emit 0x75
        __asm _emit 0xda
        xor eax, eax
        ; Exact mapped bytes E9 DE 03 00 00: jmp 0x46724a
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], -25h
        ; Exact mapped bytes 76 2C: jbe 0x466e9e
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 63e380h
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 D8 5F 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466e91
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x466e72
        __asm _emit 0x75
        __asm _emit 0xdb
        xor eax, eax
        ; Exact mapped bytes E9 AC 03 00 00: jmp 0x46724a
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 42: je 0x466ee6
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp ecx, 4
        ; Exact mapped bytes 74 34: je 0x466ee6
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        cmp edx, 2
        ; Exact mapped bytes 74 26: je 0x466ee6
        __asm _emit 0x74
        __asm _emit 0x26
        push 63e18ch
        push 63310ch
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 89 5F 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466ee0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x466ec0
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 11 11 00 00: call 0x468000
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x466f17
        __asm _emit 0x75
        __asm _emit 0x21
        push 63e35ch
        push 0
        push 26eh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 52 5F 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466f17
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x466ee6
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 75 07: jne 0x466f36
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 3E: je 0x466f7a
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0ch], 0fedcbabch
        ; Exact mapped bytes 75 09: jne 0x466f51
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 21: je 0x466f72
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e314h
        push 0
        push 278h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 F7 5E 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466f72
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C4: jne 0x466f3c
        __asm _emit 0x75
        __asm _emit 0xc4
        ; Exact mapped bytes EB 64: jmp 0x466fde
        __asm _emit 0xeb
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 75 15: jne 0x466f9f
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 07: jne 0x466f9f
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 2
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 74 21: je 0x466fd8
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e2d8h
        push 0
        push 27fh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 91 5E 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x466fd8
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C1: jne 0x466f9f
        __asm _emit 0x75
        __asm _emit 0xc1
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 25: je 0x467009
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 0ch]
        add eax, 24h
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 AC B6 00 00: call 0x4726a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x467007
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 43 02 00 00: jmp 0x46724a
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x46702c
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 0ch]
        add edx, 24h
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 77 B4 00 00: call 0x472490
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x46702c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x46724a
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 64 DA 67 00: mov ecx, dword ptr [0x67da64]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 1
        ; Exact mapped bytes 89 0D 64 DA 67 00: mov dword ptr [0x67da64], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 56: jne 0x467097
        __asm _emit 0x75
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 1C 72 68 00: mov eax, dword ptr [0x68721c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, dword ptr [edx + 10h]
        ; Exact mapped bytes A3 1C 72 68 00: mov dword ptr [0x68721c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 72 68 00: mov ecx, dword ptr [0x68721c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 0D 1C 72 68 00: mov dword ptr [0x68721c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 24 72 68 00: mov eax, dword ptr [0x687224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, dword ptr [edx + 10h]
        ; Exact mapped bytes A3 24 72 68 00: mov dword ptr [0x687224], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 72 68 00: mov ecx, dword ptr [0x687224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 0D 24 72 68 00: mov dword ptr [0x687224], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 24 72 68 00: mov edx, dword ptr [0x687224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 15 28 72 68 00: cmp edx, dword ptr [0x687228]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 76 0A: jbe 0x467097
        __asm _emit 0x76
        __asm _emit 0x0a
        ; Exact mapped bytes A1 24 72 68 00: mov eax, dword ptr [0x687224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 28 72 68 00: mov dword ptr [0x687228], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 20h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 76 24: jbe 0x4670cf
        __asm _emit 0x76
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ecx + 10h]
        push edx
        xor eax, eax
        ; Exact mapped bytes A0 6E DA 67 00: mov al, byte ptr [0x67da6e]
        __asm _emit 0xa0
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 F4 E7 FF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 4
        xor eax, eax
        ; Exact mapped bytes A0 6C DA 67 00: mov al, byte ptr [0x67da6c]
        __asm _emit 0xa0
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 DB E7 FF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1B: jne 0x467109
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 2F: jne 0x467147
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 08: jne 0x467126
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 21: je 0x467147
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e2a4h
        push 0
        push 2b5h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 22 5D 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467147
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C5: jne 0x467112
        __asm _emit 0x75
        __asm _emit 0xc5
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 06: je 0x46715b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x467163
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x46724a
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 10: je 0x46717b
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes EB 3C: jmp 0x4671b7
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes A1 18 72 68 00: mov eax, dword ptr [0x687218]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 21: je 0x4671a6
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e288h
        push 0
        push 2c4h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 C3 5C 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4671a6
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x46717b
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes A3 18 72 68 00: mov dword ptr [0x687218], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x4671cf
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 3B: jmp 0x46720a
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes A1 20 72 68 00: mov eax, dword ptr [0x687220]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 21: je 0x4671fa
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e26ch
        push 0
        push 2cfh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 6F 5C 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4671fa
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x4671cf
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes A3 20 72 68 00: mov dword ptr [0x687220], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 20 72 68 00 00: cmp dword ptr [0x687220], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x467221
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 20 72 68 00: mov ecx, dword ptr [0x687220]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 08: jmp 0x467229
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A3 18 72 68 00: mov dword ptr [0x687218], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 15 20 72 68 00: mov edx, dword ptr [0x687220]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 0D 20 72 68 00: mov dword ptr [0x687220], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
