// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D880 .. +0x194 bytes.
extern "C" __declspec(naked) void FUN_0041d880_0041D880() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b46dh
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
        sub esp, 6ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 78h]
        mov ecx, 1bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc0h]
        ; Exact mapped bytes E8 E8 3C FE FF: call 0x4015b4
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8E 09 01 00 00: jle 0x41d9de
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 3F FE FF: call 0x401848
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x41d9de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 0F BF 0D 3C 04 67 00: movsx ecx, word ptr [0x67043c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 0bh
        push ecx
        push 670388h
        push 24h
        ; Exact mapped bytes E8 C5 E7 0A 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x41d938
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BA 3F FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x41d93f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A5 36 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 2]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 92 36 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B6 3F FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 98 3B FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 80020fa3h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E C7 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1A: je 0x41d9d0
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 25 74 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x41d9d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, 1
        ; Exact mapped bytes EB 19: jmp 0x41d9f7
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020fa3h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D C7 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
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
        add esp, 78h
        cmp ebp, esp
        ; Exact mapped bytes E8 E2 73 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
