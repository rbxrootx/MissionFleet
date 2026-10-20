// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E628E .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_004e628e_004E628E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e62b7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e8h
        push 6733e0h
        ; Exact mapped bytes E8 8E 2A 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e62b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e629a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 80 B6 68 00: call dword ptr [0x68b680]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e62eb
        __asm _emit 0x75
        __asm _emit 0x14
        push 0edh
        push 6733e0h
        ; Exact mapped bytes E8 5A 2A 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e62eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e62d1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 74 14: je 0x4e6313
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x4e6330
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 0C 29 00 00: call 0x4e8c45
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
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
