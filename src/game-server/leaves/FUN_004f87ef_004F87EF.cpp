// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F87EF .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_004f87ef_004F87EF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 5A: je 0x4f885c
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 05: je 0x4f8810
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x4f88d1
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x4f8832
        __asm _emit 0x72
        __asm _emit 0x14
        push 289h
        push 5c5b58h
        ; Exact mapped bytes E8 D3 C1 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8832
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4f8810
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        neg eax
        sbb eax, eax
        and al, 0fdh
        add eax, 3
        or ah, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 F6 29 04 00: call 0x53b250
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 6B: jmp 0x4f88c7
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8879
        __asm _emit 0x75
        __asm _emit 0x14
        push 290h
        push 5c5b58h
        ; Exact mapped bytes E8 8C C1 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8879
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f885c
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 33: jne 0x4f88b8
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 75 22: jne 0x4f88b8
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 8F 47 04 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 68 44 04 00: call 0x53cd19
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C3 6B FF FF: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 42 6B FF FF: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
