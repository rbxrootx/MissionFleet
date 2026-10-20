// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FAD30 .. +0x1B1 bytes.
extern "C" __declspec(naked) void FUN_100fad30_100FAD30() {
    __asm {
        push -1
        push 10174526h
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
        push esi
        push edi
        mov esi, ecx
        push 45ch
        ; Exact mapped bytes E8 4B 1A 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 74 10: je 0x100fad76
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 20h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9E AD F2 FF: call 0x10025b10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xad
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100fad78
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 18h]
        push ebp
        or ebp, 0ffffffffh
        cmp eax, ebx
        mov dword ptr [esp + 1ch], ebp
        push 14h
        ; Exact mapped bytes 75 30: jne 0x100fadb9
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 12 1A 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 1A: je 0x100fadaf
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [eax], 10175688h
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes EB 4A: jmp 0x100fadf9
        __asm _emit 0xeb
        __asm _emit 0x4a
        xor eax, eax
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes EB 40: jmp 0x100fadf9
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes E8 E2 19 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 24h], eax
        cmp eax, ebx
        mov dword ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 0A: je 0x100faddb
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 67 05 00 00: call 0x100fb340
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100faddd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 18h]
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [esi + 18h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [esi + 18h], eax
        mov edx, dword ptr [esi + 1ch]
        inc edx
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [edi + 0e8h]
        cmp eax, ebp
        ; Exact mapped bytes 74 21: je 0x100fae2b
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 14: je 0x100fae25
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ecx + 48h]
        shr edx, 0ah
        cmp edx, eax
        ; Exact mapped bytes 74 4E: je 0x100fae69
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ecx + 0b70h]
        cmp ecx, ebx
        ; Exact mapped bytes 75 EC: jne 0x100fae11
        __asm _emit 0x75
        __asm _emit 0xec
        mov dword ptr [edi + 0e8h], ebp
        mov eax, dword ptr [edi + 0e8h]
        cmp eax, ebp
        pop ebp
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x100faecb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 28h]
        push 14h
        cmp eax, ebx
        ; Exact mapped bytes 75 4B: jne 0x100fae8e
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes E8 58 19 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 35: je 0x100fae84
        __asm _emit 0x74
        __asm _emit 0x35
        mov dword ptr [eax], 10175688h
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        mov dword ptr [esi + 28h], eax
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes EB 5F: jmp 0x100faec8
        __asm _emit 0xeb
        __asm _emit 0x5f
        cmp ecx, ebx
        ; Exact mapped bytes 74 B8: je 0x100fae25
        __asm _emit 0x74
        __asm _emit 0xb8
        mov eax, dword ptr [edi + 60h]
        shr eax, 0ch
        and eax, 0fh
        mov dword ptr [ecx + eax*4 + 83ch], edi
        ; Exact mapped bytes E8 EE 75 FF FF: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A7: jmp 0x100fae2b
        __asm _emit 0xeb
        __asm _emit 0xa7
        xor eax, eax
        mov dword ptr [esi + 28h], eax
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes EB 3A: jmp 0x100faec8
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes E8 0D 19 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 14: je 0x100faeae
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [eax], 10175688h
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        ; Exact mapped bytes EB 02: jmp 0x100faeb0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 28h]
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [esi + 28h]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [esi + 28h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 28h], ecx
        inc dword ptr [esi + 2ch]
        mov ecx, dword ptr [esp + 10h]
        mov eax, edi
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
