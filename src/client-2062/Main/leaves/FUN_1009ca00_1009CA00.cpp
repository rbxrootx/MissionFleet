// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009CA00 .. +0x1EE bytes.
extern "C" __declspec(naked) void FUN_1009ca00_1009CA00() {
    __asm {
        push -1
        push 10170f58h
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
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [ebp], 10175f78h
        mov ecx, dword ptr [ebp + 68h]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 74 09: je 0x1009ca3f
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 68h], ebx
        mov ecx, dword ptr [ebp + 2d0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1009ca55
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 2d0h], ebx
        mov ecx, dword ptr [ebp + 2a0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1009ca6b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 2a0h], ebx
        mov ecx, dword ptr [ebp + 298h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1009ca81
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 298h], ebx
        mov ecx, dword ptr [ebp + 29ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1009ca97
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 29ch], ebx
        mov ecx, dword ptr [ebp + 2a8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1009caad
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 2a8h], ebx
        mov ecx, dword ptr [ebp + 74h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x1009cabd
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 74h], ebx
        mov ecx, dword ptr [ebp + 78h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x1009cacd
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 78h], ebx
        mov ecx, dword ptr [ebp + 2a4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1009cae3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 2a4h], ebx
        mov ecx, dword ptr [ebp + 0ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1009caf9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0ach], ebx
        mov ecx, dword ptr [ebp + 6ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x1009cb09
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 6ch], ebx
        mov ecx, dword ptr [ebp + 70h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x1009cb19
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 70h], ebx
        lea esi, [ebp + 180h]
        mov dword ptr [esp + 10h], 2
        mov edi, 2
        mov ecx, dword ptr [esi - 10h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x1009cb3c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 10h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1009cb4a
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
        ; Exact mapped bytes 75 DC: jne 0x1009cb2c
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [esp + 10h]
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 CC: jne 0x1009cb27
        __asm _emit 0x75
        __asm _emit 0xcc
        lea esi, [ebp + 0f0h]
        mov edi, 20h
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1009cb74
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
        ; Exact mapped bytes 75 EC: jne 0x1009cb66
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebp + 80h]
        lea edi, [ebp + 0b0h]
        mov ebx, 20h
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1009cb9d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], 0
        mov ecx, dword ptr [esi - 4]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x1009cbb1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 4], 0
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1009cbc3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add edi, 4
        add esi, 8
        dec ebx
        ; Exact mapped bytes 75 BF: jne 0x1009cb8b
        __asm _emit 0x75
        __asm _emit 0xbf
        mov ecx, ebp
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 C5 62 06 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
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
        add esp, 14h
        ret
    }
}
