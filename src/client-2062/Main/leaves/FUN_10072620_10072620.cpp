// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10072620 .. +0x1F5 bytes.
extern "C" __declspec(naked) void FUN_10072620_10072620() {
    __asm {
        push -1
        push 1016f776h
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
        push ebp
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0ch], edi
        mov dword ptr [edi], 10175cb4h
        mov ecx, dword ptr [edi + 174h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes 74 0C: je 0x10072666
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 174h], ebp
        mov ecx, dword ptr [edi + 120h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007267c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 120h], ebp
        mov ecx, dword ptr [edi + 124h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10072692
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 124h], ebp
        mov ecx, dword ptr [edi + 128h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100726a8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 128h], ebp
        mov eax, dword ptr [edi + 0e0h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x100726c1
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 CC A0 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 0e0h], ebp
        mov ecx, dword ptr [edi + 170h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100726d7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 170h], ebp
        mov ecx, dword ptr [edi + 174h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100726ed
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 174h], ebp
        push ebx
        push esi
        lea esi, [edi + 150h]
        xor ebx, ebx
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes EB 04: jmp 0x10072701
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + 108h]
        mov ecx, dword ptr [ebx + eax]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0F: je 0x1007271d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [edi + 108h]
        mov dword ptr [ebx + eax], ebp
        mov ecx, dword ptr [edi + 10ch]
        mov eax, dword ptr [ebx + ecx]
        cmp eax, ebp
        ; Exact mapped bytes 74 12: je 0x1007273c
        __asm _emit 0x74
        __asm _emit 0x12
        push eax
        ; Exact mapped bytes E8 54 A0 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [edi + 10ch]
        add esp, 4
        mov dword ptr [ebx + edx], ebp
        mov ecx, dword ptr [esi - 20h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007274c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 20h], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1007275a
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        xor esi, esi
        mov eax, dword ptr [edi + 10ch]
        add eax, ebx
        mov ecx, dword ptr [eax]
        cmp dword ptr [esi + ecx], ebp
        ; Exact mapped bytes 74 1B: je 0x10072786
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, ecx
        mov ecx, dword ptr [esi + edx]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1007277a
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 10ch]
        mov edx, dword ptr [ebx + ecx]
        mov dword ptr [edx + esi], ebp
        add esi, 4
        cmp esi, 400h
        ; Exact mapped bytes 7C CB: jl 0x1007275c
        __asm _emit 0x7c
        __asm _emit 0xcb
        mov ecx, dword ptr [esp + 10h]
        add ebx, 4
        add ecx, 4
        cmp ebx, 20h
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 55 FF FF FF: jl 0x100726fd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 10ch]
        pop esi
        cmp eax, ebp
        pop ebx
        ; Exact mapped bytes 74 0F: je 0x100727c3
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 CA 9F 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 10ch], ebp
        mov eax, dword ptr [edi + 108h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x100727dc
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 B1 9F 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 108h], ebp
        mov eax, dword ptr [edi + 208h]
        mov dword ptr [edi + 1f4h], 10175cd0h
        push eax
        ; Exact mapped bytes E8 92 9F 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov ecx, edi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 9C 06 09 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop ebp
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
