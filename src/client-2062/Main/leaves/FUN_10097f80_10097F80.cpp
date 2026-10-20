// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10097F80 .. +0x1B0 bytes.
extern "C" __declspec(naked) void FUN_10097f80_10097F80() {
    __asm {
        push -1
        push 10170d18h
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
        mov dword ptr [ebx], 10175f40h
        xor ebp, ebp
        lea esi, [ebx + 58h]
        mov dword ptr [esp + 1ch], ebp
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10097fc2
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
        ; Exact mapped bytes 75 EC: jne 0x10097fb4
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10097fd8
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 60h], ebp
        mov ecx, dword ptr [ebx + 54h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10097fe8
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 54h], ebp
        mov ecx, dword ptr [ebx + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10097ff8
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 64h], ebp
        lea esi, [ebx + 70h]
        mov edi, 2
        mov ecx, dword ptr [esi - 8]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10098010
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 8], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1009801e
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
        ; Exact mapped bytes 75 DC: jne 0x10098000
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebx + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10098034
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 78h], ebp
        mov ecx, dword ptr [ebx + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10098044
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 7ch], ebp
        mov ecx, dword ptr [ebx + 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009805a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 80h], ebp
        lea esi, [ebx + 84h]
        mov edi, 5
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10098073
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
        ; Exact mapped bytes 75 EC: jne 0x10098065
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 98h]
        mov ebp, 5
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1009809b
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
        ; Exact mapped bytes 75 E8: jne 0x10098089
        __asm _emit 0x75
        __asm _emit 0xe8
        dec ebp
        ; Exact mapped bytes 75 E0: jne 0x10098084
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebx + 0c0h]
        xor esi, esi
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x100980bc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0c0h], esi
        mov ecx, dword ptr [ebx + 0c4h]
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x100980d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0c4h], esi
        mov ecx, dword ptr [ebx + 0c8h]
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x100980e8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0c8h], esi
        mov ecx, dword ptr [ebx + 0cch]
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x100980fe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0cch], esi
        mov ecx, dword ptr [ebx + 50h]
        cmp ecx, esi
        ; Exact mapped bytes 74 09: je 0x1009810e
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 50h], esi
        mov ecx, ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 F3 AA 06 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0x06
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
