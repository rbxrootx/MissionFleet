// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10036290 .. +0x336 bytes.
extern "C" __declspec(naked) void FUN_10036290_10036290() {
    __asm {
        push -1
        push 1016e538h
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
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esi], 10175850h
        mov ecx, dword ptr [esi + 0dch]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 0C: je 0x100362d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0dch], ebp
        mov ecx, dword ptr [esi + 0e0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100362e8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0e0h], ebp
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100362f8
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 64h], ebp
        mov ecx, dword ptr [esi + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10036308
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 78h], ebp
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10036318
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 74h], ebp
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10036328
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], ebp
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10036338
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], ebp
        mov ecx, dword ptr [esi + 0b8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1003634e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0b8h], ebp
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10036364
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0bch], ebp
        mov ecx, dword ptr [esi + 1f8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1003637a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1f8h], ebp
        mov ecx, dword ptr [esi + 1fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10036390
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1fch], ebp
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100363a6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c8h], ebp
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100363bc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c0h], ebp
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100363d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c4h], ebp
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100363e8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0cch], ebp
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100363fe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d0h], ebp
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1003640e
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 7ch], ebp
        mov ecx, dword ptr [esi + 1ech]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10036424
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1ech], ebp
        mov ecx, dword ptr [esi + 1f0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1003643a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1f0h], ebp
        mov ecx, dword ptr [esi + 1f4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10036450
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1f4h], ebp
        mov ecx, dword ptr [esi + 200h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10036466
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 200h], ebp
        mov ecx, dword ptr [esi + 1d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1003647c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1d0h], ebp
        mov ecx, dword ptr [esi + 1dch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10036492
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1dch], ebp
        mov ecx, dword ptr [esi + 1d4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100364a8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1d4h], ebp
        mov ecx, dword ptr [esi + 10ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100364be
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10ch], ebp
        mov ecx, dword ptr [esi + 0e8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100364d4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0e8h], ebp
        mov ecx, dword ptr [esi + 108h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100364ea
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 108h], ebp
        lea edi, [esi + 110h]
        mov ebx, 30h
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10036503
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
        ; Exact mapped bytes 75 EC: jne 0x100364f5
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 1e0h]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10036522
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
        ; Exact mapped bytes 75 EC: jne 0x10036514
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 0ech]
        mov ebx, 7
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10036541
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
        ; Exact mapped bytes 75 EC: jne 0x10036533
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 80h]
        mov ebx, 4
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10036560
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
        ; Exact mapped bytes 75 EC: jne 0x10036552
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 90h]
        mov ebx, 4
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1003657f
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
        ; Exact mapped bytes 75 EC: jne 0x10036571
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 0a8h]
        mov ebx, 4
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1003659e
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
        ; Exact mapped bytes 75 EC: jne 0x10036590
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, esi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 ED C8 0C 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc8
        __asm _emit 0x0c
        __asm _emit 0x00
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
