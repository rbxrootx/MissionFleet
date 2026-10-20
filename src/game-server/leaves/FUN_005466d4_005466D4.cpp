// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005466D4 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_005466d4_005466D4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 0f0h
        push 5c8c2ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6D 4A FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x54671b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 10h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x54671b
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f1h
        push 5c8c2ch
        ; Exact mapped bytes E8 EA E2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54671b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x5466f3
        __asm _emit 0x75
        __asm _emit 0xd2
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 41 F8 FE FF: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A6 DC FE FF: call 0x5343d8
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 40ffffh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 64h], ecx
        cmp dword ptr [ebp + 24h], 0e800h
        ; Exact mapped bytes 75 0F: jne 0x546759
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 8
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffbf0000h
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        or ecx, 4eh
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        or edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 10h], edx
        push 1000h
        ; Exact mapped bytes E8 7B 0C FB FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x546798
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ffh
        push 5c8c2ch
        ; Exact mapped bytes E8 6D E2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546798
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x546776
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E8 2D FB FF FF: call 0x5462d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 38 8C 5C 00 FF: cmp dword ptr [0x5c8c38], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x5467c0
        __asm _emit 0x75
        __asm _emit 0x14
        push 101h
        push 5c8c2ch
        ; Exact mapped bytes E8 45 E2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5467c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5467a3
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 0B FC FF FF: call 0x5463d6
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 3C 8C 5C 00 FF: cmp dword ptr [0x5c8c3c], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x5467e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 5c8c2ch
        ; Exact mapped bytes E8 1D E2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5467e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5467cb
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5B F5 FE FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4D F8 FE FF: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        push 5c8c74h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 64 BE FA FF: call 0x4f2683
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x546827
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 47: jmp 0x54686e
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F4 00 00 00: call 0x54695d
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
