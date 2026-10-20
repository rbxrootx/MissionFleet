// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDE2E .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_004ede2e_004EDE2E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4ede45
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x4edf4c
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6C 30 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7F 1B: jg 0x4ede6d
        __asm _emit 0x7f
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F 30 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [eax + 4]
        add esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 30 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 5B: jle 0x4edec8
        __asm _emit 0x7e
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 44 30 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2B 30 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 26 FD FF FF: call 0x4edbc0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4edeb4
        __asm _emit 0x75
        __asm _emit 0x14
        push 1bah
        push 5c4bd4h
        ; Exact mapped bytes E8 51 6B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4edeb4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4ede9a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9F F7 FF FF: call 0x4ed662
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x4edf4c
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 2F 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [eax + 4]
        push edx
        ; Exact mapped bytes E8 3A B1 FB FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb1
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 2F 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AD 2F 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 2F 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 14: jle 0x4edf32
        __asm _emit 0x7e
        __asm _emit 0x14
        push 1c2h
        push 5c4bd4h
        ; Exact mapped bytes E8 D3 6A 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4edf32
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x4edf04
        __asm _emit 0x75
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 79 2F 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        mov byte ptr [edx + eax], 0
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
