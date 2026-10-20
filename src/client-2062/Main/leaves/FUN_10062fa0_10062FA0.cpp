// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10062FA0 .. +0x4D7 bytes.
extern "C" __declspec(naked) void FUN_10062fa0_10062FA0() {
    __asm {
        push -1
        push 1016f526h
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
        mov dword ptr [esi], 10175c4ch
        mov ecx, dword ptr [esi + 109fch]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], 1
        ; Exact mapped bytes 74 0C: je 0x10062fe4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 109fch], ebp
        mov ecx, dword ptr [esi + 10a00h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10062ffa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10a00h], ebp
        mov ecx, dword ptr [esi + 10a04h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063010
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10a04h], ebp
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10063020
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 20bb8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063036
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20bb8h], ebp
        mov ecx, dword ptr [esi + 20c54h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006304c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c54h], ebp
        mov ecx, dword ptr [esi + 20c4ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063062
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c4ch], ebp
        mov ecx, dword ptr [esi + 20c30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063078
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c30h], ebp
        mov ecx, dword ptr [esi + 20c34h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006308e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c34h], ebp
        mov ecx, dword ptr [esi + 20c50h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100630a4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c50h], ebp
        mov ecx, dword ptr [esi + 20c58h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100630ba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c58h], ebp
        mov ecx, dword ptr [esi + 20c60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100630d0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c60h], ebp
        mov ecx, dword ptr [esi + 20c68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100630e6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c68h], ebp
        mov ecx, dword ptr [esi + 20c70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100630fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c70h], ebp
        mov ecx, dword ptr [esi + 20c78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063112
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c78h], ebp
        mov ecx, dword ptr [esi + 20c5ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063128
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c5ch], ebp
        mov ecx, dword ptr [esi + 20c64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006313e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c64h], ebp
        mov ecx, dword ptr [esi + 20c6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063154
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c6ch], ebp
        mov ecx, dword ptr [esi + 20c74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006316a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c74h], ebp
        mov ecx, dword ptr [esi + 20c7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063180
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c7ch], ebp
        mov ecx, dword ptr [esi + 104fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063196
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 104fch], ebp
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100631a6
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 21a48h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100631bc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 21a48h], ebp
        mov ecx, dword ptr [esi + 10a60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100631d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10a60h], ebp
        mov ecx, dword ptr [esi + 10a30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100631e8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10a30h], ebp
        mov ecx, dword ptr [esi + 10a34h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100631fe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10a34h], ebp
        mov ecx, dword ptr [esi + 10a28h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063214
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10a28h], ebp
        push ebx
        push edi
        lea edi, [esi + 0f0h]
        mov ebx, 8
        mov ecx, dword ptr [edi - 20h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10063231
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi - 20h], ebp
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1006323f
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
        ; Exact mapped bytes 75 DC: jne 0x10063221
        __asm _emit 0x75
        __asm _emit 0xdc
        lea edi, [esi + 10a4ch]
        mov ebx, 4
        mov ecx, dword ptr [edi - 14h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10063260
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi - 14h], ebp
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1006326e
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
        ; Exact mapped bytes 75 DC: jne 0x10063250
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [esi + 10a48h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006328a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10a48h], ebp
        mov ecx, dword ptr [esi + 104e0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100632a0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 104e0h], ebp
        mov ecx, dword ptr [esi + 20b00h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100632b6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20b00h], ebp
        mov ecx, dword ptr [esi + 104d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100632cc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 104d0h], ebp
        mov ecx, dword ptr [esi + 10a64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100632e2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10a64h], ebp
        mov ecx, dword ptr [esi + 10a68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100632f8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10a68h], ebp
        mov ecx, dword ptr [esi + 10a6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006330e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10a6ch], ebp
        mov ecx, dword ptr [esi + 20b94h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063324
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20b94h], ebp
        mov ecx, dword ptr [esi + 20b98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006333a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20b98h], ebp
        mov ecx, dword ptr [esi + 20bb8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063350
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20bb8h], ebp
        mov ecx, dword ptr [esi + 20c90h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063366
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c90h], ebp
        mov ecx, dword ptr [esi + 20c94h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1006337c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20c94h], ebp
        mov ecx, dword ptr [esi + 20c98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063392
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20c98h], ebp
        mov eax, dword ptr [esi + 84h]
        push eax
        ; Exact mapped bytes FF 15 38 50 17 10: call dword ptr [0x10175038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 20b9ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100633b5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20b9ch], ebp
        mov ecx, dword ptr [esi + 20ba0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100633cb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 20ba0h], ebp
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100633db
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 74h], ebp
        mov ecx, dword ptr [esi + 21a5ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100633f1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 21a5ch], ebp
        mov ecx, dword ptr [esi + 21a60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10063407
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 21a60h], ebp
        lea edi, [esi + 21a54h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10063420
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
        ; Exact mapped bytes 75 EC: jne 0x10063412
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 21a50h]
        pop edi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x1006343e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 21a50h], ebp
        mov eax, dword ptr [esi + 104a0h]
        mov dword ptr [esi + 1048ch], 10175c68h
        push eax
        ; Exact mapped bytes E8 30 93 10 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 3A FA 09 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0x09
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
