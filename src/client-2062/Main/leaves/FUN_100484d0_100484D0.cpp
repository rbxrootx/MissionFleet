// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100484D0 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_100484d0_100484D0() {
    __asm {
        push -1
        push 1016e8ceh
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
        mov eax, dword ptr [esp + 2ch]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 38h]
        xor ebx, ebx
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push ebx
        push ebx
        push edi
        push ebp
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 A1 64 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        mov dword ptr [esi], 101751f8h
        cmp eax, ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x1004854c
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
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x1004861c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 28h]
        cmp edi, 7
        ; Exact mapped bytes 7C 56: jl 0x100485ca
        __asm _emit 0x7c
        __asm _emit 0x56
        cmp edi, 0ah
        ; Exact mapped bytes 7F 51: jg 0x100485ca
        __asm _emit 0x7f
        __asm _emit 0x51
        push 20h
        ; Exact mapped bytes E8 20 42 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x10048616
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp edi, 8
        ; Exact mapped bytes 8B 3D F4 58 1C 10: mov edi, dword ptr [0x101c58f4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        setg dl
        mov ecx, dword ptr [edi + 170h]
        add edx, 2dh
        cmp ecx, edx
        ; Exact mapped bytes 7E 5B: jle 0x1004860a
        __asm _emit 0x7e
        __asm _emit 0x5b
        cmp edx, ebx
        ; Exact mapped bytes 7C 57: jl 0x1004860a
        __asm _emit 0x7c
        __asm _emit 0x57
        mov edi, dword ptr [edi + 194h]
        cmp edi, ebx
        ; Exact mapped bytes 74 4D: je 0x1004860a
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [edi + edx*4]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 38 03 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4E: jmp 0x10048618
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 20h
        ; Exact mapped bytes E8 CF 41 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x41
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 35: je 0x10048616
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B 15 D8 57 1C 10: mov edx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 170h], edi
        ; Exact mapped bytes 7E 1B: jle 0x1004860a
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp edi, ebx
        ; Exact mapped bytes 7C 17: jl 0x1004860a
        __asm _emit 0x7c
        __asm _emit 0x17
        mov edx, dword ptr [edx + 194h]
        cmp edx, ebx
        ; Exact mapped bytes 74 0D: je 0x1004860a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [edx + edi*4]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 F8 02 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10048618
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor edx, edx
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 EC 02 00 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10048618
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 1ch], bl
        mov ecx, esi
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes E8 4A 02 00 00: call 0x10048870
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x02
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
