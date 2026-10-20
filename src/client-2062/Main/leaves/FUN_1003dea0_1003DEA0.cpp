// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003DEA0 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_1003dea0_1003DEA0() {
    __asm {
        push -1
        push 1016e608h
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
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 101758f8h
        mov ecx, dword ptr [esi + 60h]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 09: je 0x1003deda
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 60h], edi
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1003deea
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 68h], edi
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1003defa
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1003df0a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], edi
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1003df1a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], edi
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1003df2a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 74h], edi
        mov ecx, dword ptr [esi + 78h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1003df3a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 78h], edi
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1003df4a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 7ch], edi
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 47 4F 0C 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
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
