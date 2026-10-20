// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048660 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_10048660_10048660() {
    __asm {
        push -1
        push 1016e8f3h
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
        mov eax, dword ptr [esp + 30h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 30h]
        push esi
        push edi
        mov edi, dword ptr [esp + 3ch]
        xor ebx, ebx
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 34h]
        push ebx
        push ebx
        push edi
        push ebp
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 11 63 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x63
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        mov dword ptr [esi], 101751f8h
        cmp eax, ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x100486dc
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 1ch], ebx
        cmp eax, ebx
        mov dword ptr [esi], 10175af4h
        mov dword ptr [esi + 58h], ebx
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], edi
        ; Exact mapped bytes 75 54: jne 0x1004874b
        __asm _emit 0x75
        __asm _emit 0x54
        push 20h
        ; Exact mapped bytes E8 A2 40 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x40
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 40h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 37: je 0x10048745
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 2ch]
        cmp dword ptr [edx + 170h], edi
        ; Exact mapped bytes 7E 1B: jle 0x10048739
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp edi, ebx
        ; Exact mapped bytes 7C 17: jl 0x10048739
        __asm _emit 0x7c
        __asm _emit 0x17
        mov edx, dword ptr [edx + 194h]
        cmp edx, ebx
        ; Exact mapped bytes 74 0D: je 0x10048739
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [edx + edi*4]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 C9 01 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10048747
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 BD 01 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10048747
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], bl
        mov ecx, esi
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes E8 1B 01 00 00: call 0x10048870
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov eax, esi
        pop edi
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
