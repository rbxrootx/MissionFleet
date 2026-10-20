// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555149 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_00555149_00555149() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        push 6412d8h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 7E 57 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 19: jne 0x55519a
        __asm _emit 0x75
        __asm _emit 0x19
        push 67c350h
        push 67c388h
        ; Exact mapped bytes E8 85 B4 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x555272
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 14: jne 0x5551b4
        __asm _emit 0x75
        __asm _emit 0x14
        push 630h
        push 67c1e0h
        ; Exact mapped bytes E8 91 3B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5551b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55519a
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x5551d4
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 13: jne 0x5551e7
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x555272
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 20h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x555258
        __asm _emit 0x75
        __asm _emit 0x59
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x555219
        __asm _emit 0x74
        __asm _emit 0x14
        push 63dh
        push 67c1e0h
        ; Exact mapped bytes E8 2C 3B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555219
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5551ff
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 31: je 0x555256
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x555233
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        mov eax, 1
        ; Exact mapped bytes EB 1C: jmp 0x555272
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes EB 8F: jmp 0x5551e7
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
