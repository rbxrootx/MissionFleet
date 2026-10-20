// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562556 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_00562556_00562556() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 18 05 00 00: call 0x562a8a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x56259a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes FF 15 1C 2A 5E 00: call dword ptr [0x5e2a1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x5626c2
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 12: je 0x5625b5
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 24h]
        cmp edx, dword ptr [ecx + 20h]
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x562659
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 14: jne 0x5625d2
        __asm _emit 0x75
        __asm _emit 0x14
        push 95h
        push 5ce898h
        ; Exact mapped bytes E8 33 24 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5625d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5625b5
        __asm _emit 0x75
        __asm _emit 0xdd
        push 96h
        push 5ce898h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 14h]
        add eax, dword ptr [ecx + 28h]
        imul eax, eax, 24h
        push eax
        ; Exact mapped bytes E8 3C AA F8 FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 28h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 20h], ecx
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 32: je 0x562650
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 24h]
        imul eax, eax, 24h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E8 69 F4 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 BC AD F8 FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x562676
        __asm _emit 0x75
        __asm _emit 0x14
        push 9fh
        push 5ce898h
        ; Exact mapped bytes E8 8F 23 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562676
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x562659
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x562699
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a0h
        push 5ce898h
        ; Exact mapped bytes E8 6C 23 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562699
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x56267c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 24h]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, edx
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 24h]
        add eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 20h], eax
        mov esi, dword ptr [ebp + 8]
        mov ecx, 5
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
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
