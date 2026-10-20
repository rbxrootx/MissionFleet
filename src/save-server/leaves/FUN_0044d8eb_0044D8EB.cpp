// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D8EB .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_0044d8eb_0044D8EB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dd52h
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
        sub esp, 10h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 63939ch
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x44d940
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 79 00 00: call 0x455280
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44d947
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1C 1E 00 00: call 0x44f76b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 3ch
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EC 15 00 00: call 0x44ef51
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 64h]
        push edx
        push 640c40h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D8 15 00 00: call 0x44ef51
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 640bf0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C1 15 00 00: call 0x44ef51
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 74 2E: je 0x44d9c7
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 1C: je 0x44d9ec
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 54h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 44: je 0x44da39
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 18h]
        add edx, 0a8h
        push edx
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push -1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8F 2D 00 00: call 0x4507e4
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 74 47: je 0x44daa8
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 3B: je 0x44daa8
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 90h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 29: je 0x44daa8
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 90h]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 9ch
        ; Exact mapped bytes E8 32 EE 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xee
        __asm _emit 0x07
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 58h
        ; Exact mapped bytes E8 17 D5 0F 00: call 0x54afe0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 03 93 08 00: call 0x4d6ddb
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
