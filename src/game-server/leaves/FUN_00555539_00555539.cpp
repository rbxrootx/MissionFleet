// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555539 .. +0x311 bytes.
extern "C" __declspec(naked) void FUN_00555539_00555539() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 57 28 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        push 432h
        push 5cfa08h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 E1 5B FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x55559c
        __asm _emit 0x75
        __asm _emit 0x14
        push 433h
        push 5cfa08h
        ; Exact mapped bytes E8 69 F4 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55559c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55557f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x5555bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 434h
        push 5cfa08h
        ; Exact mapped bytes E8 46 F4 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5555bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5555a2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 48h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 14: je 0x5555e2
        __asm _emit 0x74
        __asm _emit 0x14
        push 435h
        push 5cfa08h
        ; Exact mapped bytes E8 23 F4 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5555e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5555c5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x55569c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [eax + 34h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 38h], 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CD F3 FF FF: call 0x5549f0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 98 F7 FF FF: call 0x554dc7
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 1C: je 0x555654
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 34h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 34h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 34h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55562f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 48h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x55567f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 38h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 38h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 38h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55565a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 38h], eax
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x55583e
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 38 DA FF FF: call 0x5530e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x5556c5
        __asm _emit 0x75
        __asm _emit 0x14
        push 44bh
        push 5cfa08h
        ; Exact mapped bytes E8 40 F3 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5556c5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5556a8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x555782
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 09: jne 0x5556f6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 36: jmp 0x55572c
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 AB 40 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x40
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], esp
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 97 B8 F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        lea eax, [ebp - 30h]
        push eax
        push 0
        push 0
        push 11012h
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 1A: je 0x555772
        __asm _emit 0x74
        __asm _emit 0x1a
        lea edx, [ebp - 28h]
        push edx
        push 5cfb0ch
        ; Exact mapped bytes E8 AF A4 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa4
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 18 7D FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 48h], edx
        mov eax, dword ptr [ebp - 48h]
        mov byte ptr [eax + 43h], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x55579c
        __asm _emit 0x75
        __asm _emit 0x14
        push 45dh
        push 5cfa08h
        ; Exact mapped bytes E8 69 F2 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55579c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x555782
        __asm _emit 0x75
        __asm _emit 0xe0
        push 58e4b0h
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 D3 66 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5557d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 462h
        push 5cfa08h
        ; Exact mapped bytes E8 35 F2 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5557d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5557b6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 74 10: je 0x5557f6
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x55580e
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 B8 29 5E 00: call dword ptr [0x5e29b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x555829
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 61 7C FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov byte ptr [edx + 43h], 1
        push 2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        lea esp, [ebp - 5ch]
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
