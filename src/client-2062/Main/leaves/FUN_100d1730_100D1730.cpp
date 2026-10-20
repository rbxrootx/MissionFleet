// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D1730 .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_100d1730_100D1730() {
    __asm {
        push -1
        push 10173088h
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
        mov dword ptr [ebx], 10176400h
        mov ecx, dword ptr [ebx + 74h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 09: je 0x100d176c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 74h], ebp
        mov ecx, dword ptr [ebx + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d177c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 78h], ebp
        mov ecx, dword ptr [ebx + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d178c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 7ch], ebp
        mov ecx, dword ptr [ebx + 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100d17a2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 80h], ebp
        mov ecx, dword ptr [ebx + 84h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100d17b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 84h], ebp
        mov ecx, dword ptr [ebx + 0e04h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100d17ce
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0e04h], ebp
        lea esi, [ebx + 0de8h]
        mov edi, 4
        mov ecx, dword ptr [esi - 4]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d17e9
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 4], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d17f7
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 DC: jne 0x100d17d9
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebx + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d180d
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 60h], ebp
        mov ecx, dword ptr [ebx + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d181d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 64h], ebp
        mov ecx, dword ptr [ebx + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d182d
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 6ch], ebp
        mov ecx, dword ptr [ebx + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d183d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 68h], ebp
        mov ecx, dword ptr [ebx + 88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100d1853
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 88h], ebp
        lea esi, [ebx + 0c3ch]
        mov edi, 32h
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100d1874
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c8h], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d1882
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
        ; Exact mapped bytes 75 D6: jne 0x100d185e
        __asm _emit 0x75
        __asm _emit 0xd6
        lea esi, [ebx + 8ch]
        mov edi, 8
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d18a1
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
        ; Exact mapped bytes 75 EC: jne 0x100d1893
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 0dcch]
        mov edi, 3
        mov ecx, dword ptr [esi + 0ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d18c2
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ch], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d18d0
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
        ; Exact mapped bytes 75 DC: jne 0x100d18b2
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 BB 15 03 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x03
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
