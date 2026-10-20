// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BD74 .. +0x1A8 bytes.
extern "C" __declspec(naked) void FUN_0051bd74_0051BD74() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 D2 9B 01 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 BD 9F 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 93 98 01 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 A7 9F 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 9C 9F 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 48h
        ; Exact mapped bytes E8 91 9F 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        ; Exact mapped bytes E8 86 9F 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 94h
        ; Exact mapped bytes E8 78 9F 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a8h
        ; Exact mapped bytes E8 74 9B 01 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5878ech
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x51be07
        __asm _emit 0x75
        __asm _emit 0x11
        push 29h
        push 5cb704h
        ; Exact mapped bytes E8 FE 8B 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51be07
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x51bdf0
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 75 11: jne 0x51be27
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 5cb704h
        ; Exact mapped bytes E8 DE 8B 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51be27
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51be0d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [eax + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x51be8c
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 2004h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], eax
        ; Exact mapped bytes EB 3B: jmp 0x51bec7
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x51beb2
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 40h
        or dh, 20h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], edx
        ; Exact mapped bytes EB 15: jmp 0x51bec7
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 40h
        or dh, 10h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 80000000h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51befd
        __asm _emit 0x75
        __asm _emit 0x11
        push 3ah
        push 5cb704h
        ; Exact mapped bytes E8 08 8B 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51befd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x51bed4
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 4]
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
