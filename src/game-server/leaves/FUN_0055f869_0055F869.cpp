// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F869 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_0055f869_0055F869() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 370h
        push 5cff18h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 D8 B8 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x55f8a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 371h
        push 5cff18h
        ; Exact mapped bytes E8 60 51 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f8a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55f888
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F1 85 FF FF: call 0x557ea4
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55f8cb
        __asm _emit 0x75
        __asm _emit 0x14
        push 372h
        push 5cff18h
        ; Exact mapped bytes E8 3A 51 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f8cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x55f8ab
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x55f8fc
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 72 05 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55f8fc
        __asm _emit 0x75
        __asm _emit 0x14
        push 374h
        push 5cff18h
        ; Exact mapped bytes E8 09 51 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f8fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x55f8d1
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x55f92d
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 41 05 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55f92d
        __asm _emit 0x75
        __asm _emit 0x14
        push 376h
        push 5cff18h
        ; Exact mapped bytes E8 D8 50 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f92d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x55f902
        __asm _emit 0x75
        __asm _emit 0xcf
        push 58e460h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 42 C5 FE FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x55f954
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x55fa2f
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F5 63 FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 35: jne 0x55f997
        __asm _emit 0x75
        __asm _emit 0x35
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x55f97c
        __asm _emit 0x74
        __asm _emit 0x14
        push 382h
        push 5cff18h
        ; Exact mapped bytes E8 89 50 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f97c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55f962
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        lea eax, [ebp - 14h]
        mov dword ptr [ebp + 8], eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 B2 63 FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x55f9bd
        __asm _emit 0x75
        __asm _emit 0x18
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp + 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x55f9d7
        __asm _emit 0x75
        __asm _emit 0x14
        push 38eh
        push 5cff18h
        ; Exact mapped bytes E8 2E 50 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f9d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55f9bd
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x55f9f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 38fh
        push 5cff18h
        ; Exact mapped bytes E8 0E 50 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f9f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x55f9dd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 28h]
        xor eax, eax
        cmp dword ptr [edx + 30h], 0
        setge al
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
