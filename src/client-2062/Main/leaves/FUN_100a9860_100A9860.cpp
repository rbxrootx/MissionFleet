// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A9860 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_100a9860_100A9860() {
    __asm {
        push -1
        push 10171648h
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
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [edi], 101760a8h
        mov ecx, dword ptr [edi + 60h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 74 09: je 0x100a989e
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 60h], ebp
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100a98ae
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 64h], ebp
        mov ecx, dword ptr [edi + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100a98be
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 68h], ebp
        mov ecx, dword ptr [edi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100a98ce
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 6ch], ebp
        mov ecx, dword ptr [edi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100a98de
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 70h], ebp
        mov ecx, dword ptr [edi + 0fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100a98f4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0fch], ebp
        mov ecx, dword ptr [edi + 74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100a9904
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 74h], ebp
        lea esi, [edi + 7ch]
        lea ebx, [edi + 0d0h]
        mov dword ptr [esp + 10h], 0bh
        mov ecx, dword ptr [ebx]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100a9923
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx], ebp
        mov ecx, dword ptr [esi - 4]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100a9933
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
        ; Exact mapped bytes 74 08: je 0x100a9941
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        mov eax, dword ptr [esp + 10h]
        add ebx, 4
        add esi, 8
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 C3: jne 0x100a9915
        __asm _emit 0x75
        __asm _emit 0xc3
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 3F 95 05 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x95
        __asm _emit 0x05
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
