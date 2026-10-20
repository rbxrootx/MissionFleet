// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D554 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0048d554_0048D554() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes E8 F1 FC FF FF: call 0x48d250
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x48d576
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 10 E5 5D 00: call dword ptr [0x5de510]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x48d627
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 12340042h
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x48d625
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x48d625
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx], 28h
        ; Exact mapped bytes 0F 82 8C 00 00 00: jb 0x48d625
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 10h]
        push eax
        push 0
        push 30h
        ; Exact mapped bytes FF 15 F8 25 5E 00: call dword ptr [0x5e25f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 78: je 0x48d625
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], 0
        push 0
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 1
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        add eax, 14h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 24h], 1
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 48h
        ; Exact mapped bytes 72 12: jb 0x48d61e
        __asm _emit 0x72
        __asm _emit 0x12
        push 5c5624h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 28h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x48d627
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
