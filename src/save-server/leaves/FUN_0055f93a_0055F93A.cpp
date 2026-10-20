// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F93A .. +0x186 bytes.
extern "C" __declspec(naked) void FUN_0055f93a_0055F93A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f1a3h
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 06 CE FF FF: call 0x55c76d
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], 63c220h
        push 54h
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 39 5F F0 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 60h], 54h
        mov ecx, dword ptr [ebp + 8]
        or ecx, 40h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55f9c1
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 EF F0 F6 FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55f9c1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes E8 BA D1 FF FF: call 0x55cb80
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55f9d9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 20h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 70h], 55c710h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 3ch], 7807h
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8B 9F 00 00: call 0x569980
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 2C: jne 0x55fa2b
        __asm _emit 0x75
        __asm _emit 0x2c
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 72 A9 00 00: call 0x56a379
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55fa1f
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a3h
        push 67b3b8h
        ; Exact mapped bytes E8 26 93 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55fa1f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x55f9ff
        __asm _emit 0x75
        __asm _emit 0xda
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x55fa45
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a6h
        push 67b3b8h
        ; Exact mapped bytes E8 00 93 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55fa45
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55fa2b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 46 A0 00 00: call 0x569a9b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 84h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 0b4h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 90h], edx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 94h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 85 6F FF FF: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
