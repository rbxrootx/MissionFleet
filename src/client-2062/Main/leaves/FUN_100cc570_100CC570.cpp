// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CC570 .. +0x48D bytes.
extern "C" __declspec(naked) void FUN_100cc570_100CC570() {
    __asm {
        push -1
        push 10172e48h
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
        push ecx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10176394h
        mov ecx, dword ptr [esi + 74h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 09: je 0x100cc5aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 74h], ebp
        mov ecx, dword ptr [esi + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100cc5ba
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 78h], ebp
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc5d0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 80h], ebp
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100cc5e0
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 7ch], ebp
        mov ecx, dword ptr [esi + 0ech]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc5f6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ech], ebp
        mov ecx, dword ptr [esi + 0a8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc60c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a8h], ebp
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc622
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ach], ebp
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc638
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 98h], ebp
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc64e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a0h], ebp
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc664
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0b0h], ebp
        mov ecx, dword ptr [esi + 0b8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc67a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0b8h], ebp
        mov ecx, dword ptr [esi + 84h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc690
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 84h], ebp
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc6a6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 9ch], ebp
        mov ecx, dword ptr [esi + 0a4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc6bc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a4h], ebp
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc6d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0b4h], ebp
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc6e8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0bch], ebp
        mov ecx, dword ptr [esi + 88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc6fe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 88h], ebp
        push ebx
        push edi
        lea edi, [esi + 0c0h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100cc719
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100cc70b
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 0c8h]
        mov ebx, 4
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100cc738
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100cc72a
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 0d8h]
        mov ebx, 5
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100cc757
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100cc749
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 0f4h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100cc776
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100cc768
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 130h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc792
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 130h], ebp
        mov ecx, dword ptr [esi + 13ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc7a8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 13ch], ebp
        mov ecx, dword ptr [esi + 140h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc7be
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 140h], ebp
        mov ecx, dword ptr [esi + 0fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc7d4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0fch], ebp
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc7ea
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 100h], ebp
        mov ecx, dword ptr [esi + 104h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc800
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 104h], ebp
        mov ecx, dword ptr [esi + 108h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc816
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 108h], ebp
        mov ecx, dword ptr [esi + 10ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc82c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10ch], ebp
        mov ecx, dword ptr [esi + 110h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc842
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 110h], ebp
        mov ecx, dword ptr [esi + 114h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc858
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 114h], ebp
        mov ecx, dword ptr [esi + 118h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc86e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 118h], ebp
        mov ecx, dword ptr [esi + 11ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc884
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 11ch], ebp
        mov ecx, dword ptr [esi + 120h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc89a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 120h], ebp
        mov ecx, dword ptr [esi + 124h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc8b0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 124h], ebp
        mov ecx, dword ptr [esi + 128h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc8c6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 128h], ebp
        lea edi, [esi + 134h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100cc8df
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100cc8d1
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 12ch]
        pop edi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x100cc8fd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 12ch], ebp
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc913
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8ch], ebp
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc929
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 90h], ebp
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc93f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 94h], ebp
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100cc94f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 70h], ebp
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100cc95f
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100cc96f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], ebp
        mov ecx, dword ptr [esi + 234h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc985
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 234h], ebp
        mov ecx, dword ptr [esi + 238h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc99b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 238h], ebp
        mov ecx, dword ptr [esi + 23ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc9b1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 23ch], ebp
        mov ecx, dword ptr [esi + 240h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc9c7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 240h], ebp
        mov ecx, dword ptr [esi + 244h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100cc9dd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 244h], ebp
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 B4 64 03 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
