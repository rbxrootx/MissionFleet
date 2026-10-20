// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052CCC6 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_0052ccc6_0052CCC6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57deebh
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 24h]
        and al, 0bfh
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x52cde7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 DC 41 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x52cd60
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x52cd52
        __asm _emit 0x74
        __asm _emit 0x14
        push 5deh
        push 5c8fcch
        ; Exact mapped bytes E8 B3 7C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52cd52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52cd38
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 43: jmp 0x52cda3
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3D: je 0x52cda3
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp + 8], 0ef06h
        ; Exact mapped bytes 75 13: jne 0x52cd82
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 07: je 0x52cd82
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0f005h
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0A 42 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F 22 FC FF: call 0x4eefce
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x22
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B 7D FC FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 18: je 0x52cdd8
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 90h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 65 0A FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
