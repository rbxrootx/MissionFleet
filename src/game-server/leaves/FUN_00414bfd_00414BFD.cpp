// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414BFD .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_00414bfd_00414BFD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 4], 0
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 0c0000000h
        mov eax, dword ptr [ebp - 74h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 98 3B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x414c5d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 138h]
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x414d26
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 140h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x414d21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x414d21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x414d21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 26 3B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        push 5ch
        lea edx, [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 07 3B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E9 3A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0ch]
        push eax
        push 4
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CA 3A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x414c95
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2E FF FF FF: jmp 0x414c54
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A7 3A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 9B 3A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
