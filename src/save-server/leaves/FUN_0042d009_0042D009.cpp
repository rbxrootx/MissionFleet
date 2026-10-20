// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D009 .. +0x379 bytes.
extern "C" __declspec(naked) void FUN_0042d009_0042D009() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E3 17 00 00: call 0x42e810
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 10h
        mov esi, esp
        push 0
        push 0
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 58h]
        push eax
        ; Exact mapped bytes FF 15 6C C1 68 00: call dword ptr [0x68c16c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A 7D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 0F 03 00 00: je 0x42d372
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ecx + 0bb4h]
        cmp eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 76 2D: jbe 0x42d0a1
        __asm _emit 0x76
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 7D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 54 7D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 02 00 00: jmp 0x42d372
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 23h
        push 464h
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 44 C1 68 00: call dword ptr [0x68c144]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E 7D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 2D: jne 0x42d0f4
        __asm _emit 0x75
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 14 7D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 7D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 7E 02 00 00: jmp 0x42d372
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 10000h
        mov esi, esp
        push 4
        lea edx, [ebp - 1ch]
        push edx
        push 1001h
        push 0ffffh
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 54 C1 68 00: call dword ptr [0x68c154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D2 7C 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 2D: jne 0x42d150
        __asm _emit 0x75
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 7C 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A5 7C 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x42d372
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 8000h
        mov esi, esp
        push 4
        lea eax, [ebp - 20h]
        push eax
        push 1002h
        push 0ffffh
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 54 C1 68 00: call dword ptr [0x68c154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 76 7C 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 2D: jne 0x42d1ac
        __asm _emit 0x75
        __asm _emit 0x2d
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 7C 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 49 7C 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 C6 01 00 00: jmp 0x42d372
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push -1
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2B 7C 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x42d34a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 50 50 68 00: mov eax, dword ptr [0x685050]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 50 50 68 00: mov dword ptr [0x685050], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 D2 EE FF FF: call 0x42c0d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x42d311
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 0c28h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0c28h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 C1 7B 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x42d2d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 0bb4h]
        add ecx, 1
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0bb4h], ecx
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80010109h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BB CE FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        push eax
        push 0
        push 468h
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 40h]
        ; Exact mapped bytes E8 BC E3 0F 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 0ach], 1
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 52 7B 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4A 14 00 00: call 0x42e6f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x42d2d6
        __asm _emit 0x74
        __asm _emit 0x2c
        mov esi, esp
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 37 7B 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0bb4h]
        imul edx, eax
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 02 14 00 00: call 0x42e6d0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5B EC FF FF: call 0x42bf31
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 37: jmp 0x42d30f
        __asm _emit 0xeb
        __asm _emit 0x37
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 30 CE FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E9 7A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 36 CA FF FF: call 0x429d45
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 61: jmp 0x42d372
        __asm _emit 0xeb
        __asm _emit 0x61
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F7 CD FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 7A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FD C9 FF FF: call 0x429d45
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x42d372
        __asm _emit 0xeb
        __asm _emit 0x28
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 91 7A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E 7A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 72 7A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
