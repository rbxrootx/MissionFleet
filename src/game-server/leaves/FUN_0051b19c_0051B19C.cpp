// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B19C .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_0051b19c_0051B19C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0aeh
        push 5cb0ach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A5 FF FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x51b1c8
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x51b294
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x51b1e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b3h
        push 5cb0ach
        ; Exact mapped bytes E8 23 98 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b1e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51b1c8
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5F 4C FB FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51b20f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4h
        push 5cb0ach
        ; Exact mapped bytes E8 F6 97 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b20f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x51b1e8
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 14h]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 76 04: jbe 0x51b227
        __asm _emit 0x76
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6D: jmp 0x51b294
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 11: jbe 0x51b249
        __asm _emit 0x76
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        sub ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 06: jmp 0x51b24f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], edx
        push 0c2h
        push 5cb0ach
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 CF FE FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
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
