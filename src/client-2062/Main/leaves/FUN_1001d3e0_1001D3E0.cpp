// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001D3E0 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_1001d3e0_1001D3E0() {
    __asm {
        push -1
        push 1016d888h
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
        mov dword ptr [esi], 10175598h
        mov ecx, dword ptr [esi + 7ch]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 09: je 0x1001d41a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 7ch], edi
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1001d430
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 80h], edi
        mov ecx, dword ptr [esi + 84h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1001d446
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 84h], edi
        mov ecx, dword ptr [esi + 78h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1001d456
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 78h], edi
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1001d466
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 68h], edi
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1001d476
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], edi
        mov ecx, dword ptr [esi + 88h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1001d48c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 88h], edi
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1001d4a2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 8ch], edi
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 EF 59 0E 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x59
        __asm _emit 0x0e
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
