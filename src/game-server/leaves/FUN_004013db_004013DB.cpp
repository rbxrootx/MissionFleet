// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004013DB .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_004013db_004013DB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57981ch
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
        sub esp, 34h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 40h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 581020h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 0d70h], 0
        ; Exact mapped bytes 74 46: je 0x40146e
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0d70h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1A: je 0x40145a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 8B 73 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x401461
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0d70h], 0
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 0d78h], 0
        ; Exact mapped bytes 74 46: je 0x4014c0
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0d78h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x4014ac
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 39 73 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x4014b3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0d78h], 0
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 0d7ch], 0
        ; Exact mapped bytes 74 46: je 0x401512
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0d7ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1A: je 0x4014fe
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 E7 72 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x401505
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0d7ch], 0
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 0d74h], 0
        ; Exact mapped bytes 74 46: je 0x401564
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0d74h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1A: je 0x401550
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 95 72 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x401557
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0d74h], 0
        mov byte ptr [ebp - 4], 0
        push 47b571h
        push 3
        push 40h
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 0cb0h
        push ecx
        ; Exact mapped bytes E8 D0 73 0A 00: call 0x4a8950
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 74 82 08 00: call 0x489803
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x82
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
        pop edi
        pop esi
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 3B 72 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
