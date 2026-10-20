// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004435FC .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_004435fc_004435FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov dword ptr [ebp - 4], 1014h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5b6544h
        ; Exact mapped bytes E8 47 A2 0C 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x443750
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 68h], 0
        mov esi, esp
        push 1
        ; Exact mapped bytes FF 15 E4 28 5E 00: call dword ptr [0x5e28e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 82 51 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 7F 83 04 00: call 0x48b9eb
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 D9 83 04 00: call 0x48ba53
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 44 30 00 00: call 0x4466d0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 14 24 5E 00: call dword ptr [0x5e2414]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 46 51 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 47: je 0x4436ed
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1B: je 0x4436d9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 0C 51 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4436e0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 46: je 0x44373f
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1A: je 0x44372b
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
        ; Exact mapped bytes E8 BA 50 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x443732
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0a0h], 0
        mov esi, esp
        push 0
        ; Exact mapped bytes FF 15 B4 28 5E 00: call dword ptr [0x5e28b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 50 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 85 50 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
