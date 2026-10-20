// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AF31 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_0051af31_0051AF31() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x51af52
        __asm _emit 0x75
        __asm _emit 0x11
        push 65h
        push 5cb0ach
        ; Exact mapped bytes E8 B3 9A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51af52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x51af3b
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x51af6f
        __asm _emit 0x75
        __asm _emit 0x11
        push 66h
        push 5cb0ach
        ; Exact mapped bytes E8 96 9A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51af6f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x51af58
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D2 4E FB FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4e
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51af99
        __asm _emit 0x75
        __asm _emit 0x11
        push 68h
        push 5cb0ach
        ; Exact mapped bytes E8 6C 9A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51af99
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x51af75
        __asm _emit 0x75
        __asm _emit 0xd6
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A8 4E FB FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4e
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51afc3
        __asm _emit 0x75
        __asm _emit 0x11
        push 69h
        push 5cb0ach
        ; Exact mapped bytes E8 42 9A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51afc3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x51af9f
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp + 8]
        mov edx, ecx
        mov eax, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
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
