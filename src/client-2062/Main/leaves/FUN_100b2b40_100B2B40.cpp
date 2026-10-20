// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B2B40 .. +0x226 bytes.
extern "C" __declspec(naked) void FUN_100b2b40_100B2B40() {
    __asm {
        push -1
        push 10171c58h
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
        push esi
        push edi
        mov dword ptr [esp + 0ch], ebx
        mov dword ptr [ebx], 10176150h
        mov dword ptr [esp + 18h], 0
        lea esi, [ebx + 50h]
        mov edi, 3
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2b87
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
        ; Exact mapped bytes 75 E8: jne 0x100b2b75
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 5ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2ba7
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
        ; Exact mapped bytes 75 E8: jne 0x100b2b95
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 64h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2bc7
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
        ; Exact mapped bytes 75 E8: jne 0x100b2bb5
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 6ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2be7
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
        ; Exact mapped bytes 75 E8: jne 0x100b2bd5
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 74h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2c07
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
        ; Exact mapped bytes 75 E8: jne 0x100b2bf5
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 7ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2c27
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
        ; Exact mapped bytes 75 E8: jne 0x100b2c15
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 84h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2c4a
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
        ; Exact mapped bytes 75 E8: jne 0x100b2c38
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 8ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2c6d
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
        ; Exact mapped bytes 75 E8: jne 0x100b2c5b
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 94h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2c90
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
        ; Exact mapped bytes 75 E8: jne 0x100b2c7e
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 9ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2cb3
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
        ; Exact mapped bytes 75 E8: jne 0x100b2ca1
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 0a4h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2cd6
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
        ; Exact mapped bytes 75 E8: jne 0x100b2cc4
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 0ach]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2cf9
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
        ; Exact mapped bytes 75 E8: jne 0x100b2ce7
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 0b4h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2d1c
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
        ; Exact mapped bytes 75 E8: jne 0x100b2d0a
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 0bch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b2d3f
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
        ; Exact mapped bytes 75 E8: jne 0x100b2d2d
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, ebx
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 BC FE 04 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
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
