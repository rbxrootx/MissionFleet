// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100884C0 .. +0x69F bytes.
extern "C" __declspec(naked) void FUN_100884c0_100884C0() {
    __asm {
        push -1
        push 101703f4h
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
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [ebp], 10175e44h
        mov edi, 2
        lea esi, [ebp + 94h]
        mov dword ptr [esp + 1ch], edi
        xor ebx, ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10088506
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebx
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x100884f8
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebp + 9ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10088525
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebx
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10088517
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebp + 0a4h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10088544
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebx
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10088536
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebp + 0b4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x10088560
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0b4h], ebx
        mov ecx, dword ptr [ebp + 0b8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x10088576
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0b8h], ebx
        mov ecx, dword ptr [ebp + 0c0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1008858c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0c0h], ebx
        mov ecx, dword ptr [ebp + 0c4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100885a2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0c4h], ebx
        mov ecx, dword ptr [ebp + 0c8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100885b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0c8h], ebx
        mov ecx, dword ptr [ebp + 0cch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100885ce
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0cch], ebx
        mov ecx, dword ptr [ebp + 0d0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100885e4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0d0h], ebx
        mov ecx, dword ptr [ebp + 0d4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100885fa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0d4h], ebx
        mov ecx, dword ptr [ebp + 0e0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x10088610
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0e0h], ebx
        mov ecx, dword ptr [ebp + 0d8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x10088626
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0d8h], ebx
        mov ecx, dword ptr [ebp + 0e4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1008863c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0e4h], ebx
        lea esi, [ebp + 110h]
        mov edi, 0ah
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x10088655
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebx
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10088647
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebp + 138h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x10088671
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 138h], ebx
        mov ecx, dword ptr [ebp + 13ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x10088687
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 13ch], ebx
        mov ecx, dword ptr [ebp + 1ech]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1008869d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 1ech], ebx
        mov ecx, dword ptr [ebp + 144h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100886b3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 144h], ebx
        lea esi, [ebp + 148h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100886cc
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebx
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x100886be
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebp + 150h]
        mov ebx, 5
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100886f4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x100886e2
        __asm _emit 0x75
        __asm _emit 0xe8
        dec ebx
        ; Exact mapped bytes 75 E0: jne 0x100886dd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 178h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088717
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 178h], 0
        lea esi, [ebp + 17ch]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088734
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088722
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebp + 1b4h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088757
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088745
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebp + 1cch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008877a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088768
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebp + 1d4h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008879d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x1008878b
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp + 1dch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100887bd
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 1dch], 0
        mov ecx, dword ptr [ebp + 1e0h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100887d7
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 1e0h], 0
        mov ecx, dword ptr [ebp + 1e4h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100887f1
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 1e4h], 0
        mov ecx, dword ptr [ebp + 1e8h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008880b
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 1e8h], 0
        lea esi, [ebp + 1f0h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088828
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088816
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebp + 1f8h]
        mov ebx, 4
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088850
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x1008883e
        __asm _emit 0x75
        __asm _emit 0xe8
        dec ebx
        ; Exact mapped bytes 75 E0: jne 0x10088839
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 218h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088873
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 218h], 0
        mov ecx, dword ptr [ebp + 21ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008888d
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 21ch], 0
        mov ecx, dword ptr [ebp + 220h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100888a7
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 220h], 0
        mov ecx, dword ptr [ebp + 240h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100888c1
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 240h], 0
        mov ecx, dword ptr [ebp + 244h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100888db
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 244h], 0
        mov ecx, dword ptr [ebp + 248h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100888f5
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 248h], 0
        mov ecx, dword ptr [ebp + 24ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008890f
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 24ch], 0
        mov ecx, dword ptr [ebp + 258h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088929
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 258h], 0
        mov ecx, dword ptr [ebp + 25ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088943
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 25ch], 0
        mov ecx, dword ptr [ebp + 260h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008895d
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 260h], 0
        mov ecx, dword ptr [ebp + 26ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088977
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 26ch], 0
        mov ecx, dword ptr [ebp + 270h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088991
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 270h], 0
        mov ecx, dword ptr [ebp + 274h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100889ab
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 274h], 0
        mov ecx, dword ptr [ebp + 278h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100889c5
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 278h], 0
        mov ecx, dword ptr [ebp + 27ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100889df
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 27ch], 0
        mov ecx, dword ptr [ebp + 280h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100889f9
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 280h], 0
        mov ecx, dword ptr [ebp + 284h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088a13
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 284h], 0
        mov ecx, dword ptr [ebp + 288h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088a2d
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 288h], 0
        mov ecx, dword ptr [ebp + 28ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088a47
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 28ch], 0
        mov ecx, dword ptr [ebp + 290h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10088a61
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 290h], 0
        lea esi, [ebp + 294h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088a7e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088a6c
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebp + 2a8h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088aa1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088a8f
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebp + 2bch]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088ac4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088ab2
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebp + 2d0h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10088ae7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x10088ad5
        __asm _emit 0x75
        __asm _emit 0xe8
        mov byte ptr [ebp + 2e5h], 0
        mov eax, dword ptr [ebp + 228h]
        push eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 80 3C 0E 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x00
        xor esi, esi
        mov dword ptr [ebp + 228h], esi
        mov dword ptr [ebp + 22ch], esi
        mov dword ptr [ebp + 230h], esi
        mov eax, dword ptr [ebp + 194h]
        push eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes E8 5C 3C 0E 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        mov ecx, ebp
        mov dword ptr [ebp + 194h], esi
        mov dword ptr [ebp + 198h], esi
        mov dword ptr [ebp + 19ch], esi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 24 F5 FB FF: call 0x10048070
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
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
