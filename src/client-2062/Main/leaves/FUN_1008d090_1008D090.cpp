// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008D090 .. +0x702 bytes.
extern "C" __declspec(naked) void FUN_1008d090_1008D090() {
    __asm {
        push -1
        push 101706b6h
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
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [ebx], 10175e70h
        mov dword ptr [esp + 1ch], 1
        lea esi, [ebx + 94h]
        mov edi, 2
        xor ebp, ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008d0d9
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1008d0cb
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 9ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008d0f8
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1008d0ea
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 0a4h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008d117
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1008d109
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx + 0ach]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d133
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0ach], ebp
        mov ecx, dword ptr [ebx + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d149
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0b0h], ebp
        mov ecx, dword ptr [ebx + 0b4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d15f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0b4h], ebp
        mov ecx, dword ptr [ebx + 0b8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d175
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0b8h], ebp
        mov ecx, dword ptr [ebx + 0c0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d18b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0c0h], ebp
        mov ecx, dword ptr [ebx + 0c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d1a1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0c4h], ebp
        mov ecx, dword ptr [ebx + 0c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d1b7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0c8h], ebp
        mov ecx, dword ptr [ebx + 0cch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d1cd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0cch], ebp
        mov ecx, dword ptr [ebx + 0d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d1e3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0d0h], ebp
        mov ecx, dword ptr [ebx + 0d4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d1f9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0d4h], ebp
        mov ecx, dword ptr [ebx + 0d8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d20f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0d8h], ebp
        mov ecx, dword ptr [ebx + 0dch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d225
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0dch], ebp
        lea esi, [ebx + 0e0h]
        mov edi, 0ah
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008d23e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1008d230
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 108h]
        mov edi, 0ah
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008d25d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1008d24f
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx + 140h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d279
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 140h], ebp
        lea esi, [ebx + 144h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008d292
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1008d284
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx + 14ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d2ae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 14ch], ebp
        mov ecx, dword ptr [ebx + 150h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d2c4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 150h], ebp
        mov ecx, dword ptr [ebx + 154h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d2da
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 154h], ebp
        mov ecx, dword ptr [ebx + 158h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d2f0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 158h], ebp
        lea esi, [ebx + 15ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008d309
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1008d2fb
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx + 170h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d325
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 170h], ebp
        mov ecx, dword ptr [ebx + 174h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d33b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 174h], ebp
        mov ecx, dword ptr [ebx + 178h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1008d351
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 178h], ebp
        lea esi, [ebx + 17ch]
        mov ebp, 5
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d373
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
        ; Exact mapped bytes 75 E8: jne 0x1008d361
        __asm _emit 0x75
        __asm _emit 0xe8
        dec ebp
        ; Exact mapped bytes 75 E0: jne 0x1008d35c
        __asm _emit 0x75
        __asm _emit 0xe0
        lea esi, [ebx + 1a4h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d399
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
        ; Exact mapped bytes 75 E8: jne 0x1008d387
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 1b8h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d3bc
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
        ; Exact mapped bytes 75 E8: jne 0x1008d3aa
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 1c0h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d3df
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
        ; Exact mapped bytes 75 E8: jne 0x1008d3cd
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [ebx + 1c8h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d3ff
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 1c8h], 0
        mov ecx, dword ptr [ebx + 1cch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d419
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 1cch], 0
        mov ecx, dword ptr [ebx + 1d0h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d433
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 1d0h], 0
        mov ecx, dword ptr [ebx + 1d4h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d44d
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 1d4h], 0
        mov ecx, dword ptr [ebx + 1d8h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d467
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 1d8h], 0
        lea esi, [ebx + 1dch]
        mov edi, 3
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d484
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
        ; Exact mapped bytes 75 E8: jne 0x1008d472
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 1e8h]
        mov ebp, 4
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d4ac
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
        ; Exact mapped bytes 75 E8: jne 0x1008d49a
        __asm _emit 0x75
        __asm _emit 0xe8
        dec ebp
        ; Exact mapped bytes 75 E0: jne 0x1008d495
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebx + 208h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d4cf
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 208h], 0
        mov ecx, dword ptr [ebx + 20ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d4e9
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 20ch], 0
        mov ecx, dword ptr [ebx + 210h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d503
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 210h], 0
        mov ecx, dword ptr [ebx + 230h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d51d
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 230h], 0
        mov ecx, dword ptr [ebx + 234h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d537
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 234h], 0
        mov ecx, dword ptr [ebx + 238h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d551
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 238h], 0
        mov ecx, dword ptr [ebx + 23ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d56b
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 23ch], 0
        mov ecx, dword ptr [ebx + 248h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d585
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 248h], 0
        mov ecx, dword ptr [ebx + 24ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d59f
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 24ch], 0
        mov ecx, dword ptr [ebx + 250h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d5b9
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 250h], 0
        mov ecx, dword ptr [ebx + 25ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d5d3
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 25ch], 0
        mov ecx, dword ptr [ebx + 260h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d5ed
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 260h], 0
        mov ecx, dword ptr [ebx + 264h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d607
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 264h], 0
        mov ecx, dword ptr [ebx + 268h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d621
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 268h], 0
        mov ecx, dword ptr [ebx + 26ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d63b
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 26ch], 0
        mov ecx, dword ptr [ebx + 270h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d655
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 270h], 0
        mov ecx, dword ptr [ebx + 274h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d66f
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 274h], 0
        mov ecx, dword ptr [ebx + 278h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d689
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 278h], 0
        mov ecx, dword ptr [ebx + 27ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d6a3
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 27ch], 0
        mov ecx, dword ptr [ebx + 280h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1008d6bd
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 280h], 0
        lea esi, [ebx + 284h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d6da
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
        ; Exact mapped bytes 75 E8: jne 0x1008d6c8
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 298h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d6fd
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
        ; Exact mapped bytes 75 E8: jne 0x1008d6eb
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 2ach]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d720
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
        ; Exact mapped bytes 75 E8: jne 0x1008d70e
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 2c0h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1008d743
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
        ; Exact mapped bytes 75 E8: jne 0x1008d731
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [ebx + 218h]
        push eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 2B F0 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        xor eax, eax
        add esp, 4
        mov ecx, ebx
        mov dword ptr [ebx + 218h], eax
        mov dword ptr [ebx + 21ch], eax
        mov dword ptr [ebx + 220h], eax
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 F1 A8 FB FF: call 0x10048070
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa8
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
