// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DE650 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_100de650_100DE650() {
    __asm {
        push -1
        push 10173838h
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
        mov dword ptr [esi], 101764e0h
        mov ecx, dword ptr [esi + 70h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 09: je 0x100de68c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], ebp
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100de69c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], ebp
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100de6b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 94h], ebp
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100de6c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 98h], ebp
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100de6d8
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 74h], ebp
        mov ecx, dword ptr [esi + 94h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100de6ee
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 94h], ebp
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100de704
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 98h], ebp
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100de71a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9ch], ebp
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100de730
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a0h], ebp
        lea edi, [esi + 2ach]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100de749
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
        ; Exact mapped bytes 75 EC: jne 0x100de73b
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 78h]
        mov ebx, 7
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100de765
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
        ; Exact mapped bytes 75 EC: jne 0x100de757
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, esi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 26 47 02 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x47
        __asm _emit 0x02
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
