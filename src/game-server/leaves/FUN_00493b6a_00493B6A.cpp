// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493B6A .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_00493b6a_00493B6A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x493b93
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b4h
        push 5ca8a4h
        ; Exact mapped bytes E8 72 0E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x493b93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x493b76
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x493bb6
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b5h
        push 5ca8a4h
        ; Exact mapped bytes E8 4F 0E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x493bb6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x493b99
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 03 24 0A 00: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B4 D8 FF FF: call 0x4914b6
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x493c67
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 3F 22 0A 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 18 22 0A 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 C2 23 0A 00: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 24 23 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        ; Exact mapped bytes E8 18 23 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes EB 1D: jmp 0x493c84
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
