// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004941BF .. +0x23D bytes.
extern "C" __declspec(naked) void FUN_004941bf_004941BF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e3a5h
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
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x494203
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x494203
        __asm _emit 0x75
        __asm _emit 0x14
        push 553h
        push 5ca8a4h
        ; Exact mapped bytes E8 02 08 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x494203
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4941e0
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x4942f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x4942f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 556h
        push 5ca8a4h
        push 1ch
        ; Exact mapped bytes E8 05 8E 05 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1D: je 0x49425e
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 04 3B 00 00: call 0x497d5d
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x494265
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 8ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8ch]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8ch]
        mov ecx, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 8ch]
        mov edx, dword ptr [eax + 0ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8ch]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 88h]
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax + 8ch]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x4943e9
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x4943e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA 3A 00 00: call 0x497de7
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 0F: je 0x494335
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x4943cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x49434d
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 38h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x4943cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0B: je 0x49435e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes EB 0C: jmp 0x49436a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 32: je 0x4943a5
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 23: je 0x4943a5
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 88h]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        mov eax, dword ptr [edx + 88h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0F: je 0x4943c6
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CF 48 00 00: call 0x498c90
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x4943cd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0B: je 0x4943de
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 3A 00 00: call 0x497de7
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x49430b
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
