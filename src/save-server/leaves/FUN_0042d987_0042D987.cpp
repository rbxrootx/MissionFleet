// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D987 .. +0x286 bytes.
extern "C" __declspec(naked) void FUN_0042d987_0042D987() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0c28h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x42d9d2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 B5 FF FF: call 0x428f9e
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 BC FF FF: call 0x42964a
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 0D 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DD: jmp 0x42d9af
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 30 06 00 00: call 0x42e010
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x42da32
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 DE 09 00 00: call 0x42e3d0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 33: je 0x42da30
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1A: je 0x42da29
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 CC 73 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x42da30
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB A0: jmp 0x42d9d2
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 86 0E 00 00: call 0x42e8c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 40c54h]
        ; Exact mapped bytes E8 A8 06 00 00: call 0x42e0f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 40c54h]
        ; Exact mapped bytes E8 6A 06 00 00: call 0x42e0c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x42db09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 40c54h]
        ; Exact mapped bytes E8 04 0B 00 00: call 0x42e570
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        and eax, 0ffffh
        cmp eax, 8
        ; Exact mapped bytes 75 19: jne 0x42da9d
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 73 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 67: jmp 0x42db04
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 53: je 0x42db04
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 7D 07 00 00: call 0x42e240
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1F: je 0x42daeb
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 43 D2 FF FF: call 0x42ad1b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 75 08: jne 0x42dae9
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5C C2 FF FF: call 0x429d45
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x42db04
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 75 13: jne 0x42db04
        __asm _emit 0x75
        __asm _emit 0x13
        mov esi, esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EC 72 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F FF FF FF: jmp 0x42da48
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 40c54h]
        ; Exact mapped bytes E8 79 05 00 00: call 0x42e090
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 40c54h]
        ; Exact mapped bytes E8 EB 05 00 00: call 0x42e110
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 40c54h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 40c50h]
        mov dword ptr [ecx + 40c54h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 40c50h], edx
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 63 05 00 00: call 0x42e0c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x42dbea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 FD 09 00 00: call 0x42e570
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 74 53: je 0x42dbe5
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 9C 06 00 00: call 0x42e240
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1F: je 0x42dbcc
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 62 D1 FF FF: call 0x42ad1b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 75 08: jne 0x42dbca
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7B C1 FF FF: call 0x429d45
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x42dbe5
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 75 13: jne 0x42dbe5
        __asm _emit 0x75
        __asm _emit 0x13
        mov esi, esp
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B 72 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x42db4f
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 98 04 00 00: call 0x42e090
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 E7 71 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
