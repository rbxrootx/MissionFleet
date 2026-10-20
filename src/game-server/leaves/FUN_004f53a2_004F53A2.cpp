// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F53A2 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_004f53a2_004F53A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f53d3
        __asm _emit 0x75
        __asm _emit 0x14
        push 98dh
        push 5c5574h
        ; Exact mapped bytes E8 32 F6 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f53d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f53ae
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0A 73 04 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4f53f1
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 06: jne 0x4f53f1
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1F: je 0x4f5410
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C 25 5E 00: call dword ptr [0x5e259c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 75: jmp 0x4f5485
        __asm _emit 0xeb
        __asm _emit 0x75
        push 5
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5D: je 0x4f5485
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 11: jmp 0x4f543b
        __asm _emit 0xeb
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 8B 7D F9 FF: call 0x48d1c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 44: je 0x4f5485
        __asm _emit 0x74
        __asm _emit 0x44
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 08 09 04 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0A D5 00 00: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        push 15h
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 14 26 5E 00: call dword ptr [0x5e2614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB A5: jmp 0x4f542a
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 06: je 0x4f5494
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 02: je 0x4f5496
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 19: jmp 0x4f54af
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
