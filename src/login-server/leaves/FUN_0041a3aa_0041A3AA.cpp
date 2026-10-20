// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A3AA .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_0041a3aa_0041A3AA() {
    __asm {
        mov eax, 43ae7eh
        ; Exact mapped bytes E8 54 52 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov esi, ecx
        cmp edi, ebx
        ; Exact mapped bytes 74 6F: je 0x41a432
        __asm _emit 0x74
        __asm _emit 0x6f
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 69: je 0x41a432
        __asm _emit 0x74
        __asm _emit 0x69
        push 1ch
        ; Exact mapped bytes E8 1C 35 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp + 0ch], ecx
        cmp ecx, ebx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 11: je 0x41a3ee
        __asm _emit 0x74
        __asm _emit 0x11
        push ebx
        push dword ptr [ebp + 8]
        push dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 B1 2D 00 00: call 0x41d19d
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x41a3f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 8ch], eax
        mov ecx, dword ptr [edi + 38h]
        mov dword ptr [eax + 0ch], ecx
        mov eax, dword ptr [esi + 8ch]
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [eax], esi
        mov eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 90 B0 00 00 00: call dword ptr [eax + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 8ch]
        push 1
        push esi
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 7D: jmp 0x41a4af
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov edi, dword ptr [esi + 8ch]
        mov dword ptr [ebp - 10h], ebx
        cmp edi, ebx
        ; Exact mapped bytes 74 70: je 0x41a4af
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, edi
        ; Exact mapped bytes E8 9A 2D 00 00: call 0x41d1e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov eax, dword ptr [ebp + 8]
        cmp eax, -1
        ; Exact mapped bytes 74 05: je 0x41a455
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [edi + 8], eax
        ; Exact mapped bytes 75 45: jne 0x41a49a
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x41a464
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 38h]
        cmp eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 75 36: jne 0x41a49a
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 10h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x41a470
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 18h], ebx
        ; Exact mapped bytes EB 06: jmp 0x41a476
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 8ch], ebx
        mov eax, dword ptr [edi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x41a48f
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [eax + 88h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x41a48f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 0
        push edi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x41a49a
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes E8 7C 34 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x41a4a9
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes E8 3A 2D 00 00: call 0x41d1e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        test ebx, ebx
        mov edi, ebx
        ; Exact mapped bytes 75 90: jne 0x41a43f
        __asm _emit 0x75
        __asm _emit 0x90
        mov ecx, dword ptr [ebp - 0ch]
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
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
