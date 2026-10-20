// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557C12 .. +0x367 bytes.
extern "C" __declspec(naked) void FUN_00557c12_00557C12() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f4cbh
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
        push 67c630h
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 1A 26 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557c63
        __asm _emit 0x75
        __asm _emit 0x14
        push 219h
        push 67c630h
        ; Exact mapped bytes E8 E2 10 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557c63
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557c46
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 5ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x557c86
        __asm _emit 0x75
        __asm _emit 0x14
        push 21ah
        push 67c630h
        ; Exact mapped bytes E8 BF 10 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557c86
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x557c69
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 AA EB FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x557cad
        __asm _emit 0x74
        __asm _emit 0x14
        push 21bh
        push 67c630h
        ; Exact mapped bytes E8 98 10 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557cad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x557c8c
        __asm _emit 0x75
        __asm _emit 0xd9
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E6 9C FF FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        push 641458h
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 28 2C FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 14: jne 0x557ceb
        __asm _emit 0x75
        __asm _emit 0x14
        push 222h
        push 67c630h
        ; Exact mapped bytes E8 5A 10 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557ceb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x557cd1
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 87 1C 01 00: call 0x569980
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 1
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A7 1C 01 00: call 0x5699b5
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1c
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 54 AD FF FF: call 0x552adc
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 4B: jne 0x557dd7
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
        ; Exact mapped bytes E8 59 EC FF FF: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x557f68
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 D7 A1 FF FF: call 0x551fb6
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 57 EA FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 14: je 0x557e00
        __asm _emit 0x74
        __asm _emit 0x14
        push 23fh
        push 67c630h
        ; Exact mapped bytes E8 45 0F FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557e00
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x557ddf
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
        ; Exact mapped bytes E8 3C A1 FF FF: call 0x551fb6
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 BC E9 FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x557e9b
        __asm _emit 0x74
        __asm _emit 0x14
        push 253h
        push 67c630h
        ; Exact mapped bytes E8 AA 0E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557e9b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x557e7a
        __asm _emit 0x75
        __asm _emit 0xd9
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 59 97 FF FF: call 0x551604
        __asm _emit 0xe8
        __asm _emit 0x59
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
        ; Exact mapped bytes E8 CD A0 FF FF: call 0x551fb6
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4D E9 FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 74 14: je 0x557f0a
        __asm _emit 0x74
        __asm _emit 0x14
        push 25fh
        push 67c630h
        ; Exact mapped bytes E8 3B 0E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557f0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x557ee9
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C2 E9 FF FF: call 0x5568da
        __asm _emit 0xe8
        __asm _emit 0xc2
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
        push 67c630h
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 24 23 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 C3 EA FF FF: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0xc3
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
