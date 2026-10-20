// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100223D0 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_100223d0_100223D0() {
    __asm {
        push -1
        push 1016d8b3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 9B C5 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 5ch], ebx
        xor edi, edi
        mov ebx, 1
        mov dword ptr [esi], 101755cch
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 58h], ebp
        mov dword ptr [esi + 9ch], ebx
        mov dword ptr [esi + 0a0h], 14h
        mov dword ptr [esi + 6ch], edi
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 74h], edi
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esi + 80h], edi
        mov dword ptr [esi + 88h], 22h
        mov dword ptr [esi + 8ch], 55h
        mov dword ptr [esi + 94h], edi
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 1ch], edi
        cmp dword ptr [eax + 170h], 0eh
        ; Exact mapped bytes 7E 0F: jle 0x1002248b
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, edi
        ; Exact mapped bytes 74 05: je 0x1002248b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 38h]
        ; Exact mapped bytes EB 02: jmp 0x1002248d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 20h
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes E8 09 A3 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 32: je 0x100224d8
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 12h
        ; Exact mapped bytes 7E 17: jle 0x100224cc
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0D: je 0x100224cc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 48h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E6 10 0E 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x100224da
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 DA 10 0E 00: call 0x101035b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100224da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 54h], eax
        and ecx, 0e5f0h
        mov eax, esi
        or ch, 5
        pop edi
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 10h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
