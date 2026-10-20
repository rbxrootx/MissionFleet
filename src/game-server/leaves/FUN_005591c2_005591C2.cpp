// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005591C2 .. +0x367 bytes.
extern "C" __declspec(naked) void FUN_005591c2_005591C2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f9ebh
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
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 5ch], ecx
        push 218h
        push 5cfe58h
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 6A 1F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x559213
        __asm _emit 0x75
        __asm _emit 0x14
        push 219h
        push 5cfe58h
        ; Exact mapped bytes E8 F2 B7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559213
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5591f6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 5ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x559236
        __asm _emit 0x75
        __asm _emit 0x14
        push 21ah
        push 5cfe58h
        ; Exact mapped bytes E8 CF B7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559236
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x559219
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 A0 EB FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55925d
        __asm _emit 0x74
        __asm _emit 0x14
        push 21bh
        push 5cfe58h
        ; Exact mapped bytes E8 A8 B7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55925d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x55923c
        __asm _emit 0x75
        __asm _emit 0xd9
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C6 9C FF FF: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        push 58ec68h
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 08 2C FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x55929b
        __asm _emit 0x75
        __asm _emit 0x14
        push 222h
        push 5cfe58h
        ; Exact mapped bytes E8 6A B7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55929b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x559281
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D7 A7 00 00: call 0x563a80
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 1
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F7 A7 00 00: call 0x563ab5
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 34h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 38h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 3ch], 0
        push 0
        push 0
        push 1
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 34 AD FF FF: call 0x55406c
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 4B: jne 0x559387
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 3ch], ecx
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 4F EC FF FF: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x559518
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B7 A1 FF FF: call 0x553546
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4D EA FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 14: je 0x5593b0
        __asm _emit 0x74
        __asm _emit 0x14
        push 23fh
        push 5cfe58h
        ; Exact mapped bytes E8 55 B6 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5593b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x55938f
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 20h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ecx + 38h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 3ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 28h], edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1C A1 FF FF: call 0x553546
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B2 E9 FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55944b
        __asm _emit 0x74
        __asm _emit 0x14
        push 253h
        push 5cfe58h
        ; Exact mapped bytes E8 BA B5 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55944b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x55942a
        __asm _emit 0x75
        __asm _emit 0xd9
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 39 97 FF FF: call 0x552b94
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 3ch], ecx
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 AD A0 FF FF: call 0x553546
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 43 E9 FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 14: je 0x5594ba
        __asm _emit 0x74
        __asm _emit 0x14
        push 25fh
        push 5cfe58h
        ; Exact mapped bytes E8 4B B5 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5594ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x559499
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B8 E9 FF FF: call 0x557e80
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 4
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        push 263h
        push 5cfe58h
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 74 1C FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov dword ptr [ebp - 58h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B9 EA FF FF: call 0x557fce
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 58h]
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
        ret
    }
}
