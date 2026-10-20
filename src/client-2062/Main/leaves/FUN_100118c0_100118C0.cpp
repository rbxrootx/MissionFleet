// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100118C0 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_100118c0_100118C0() {
    __asm {
        push -1
        push 1016d22bh
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
        mov eax, dword ptr [esp + 14h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, dword ptr [esp + 2ch]
        push edi
        xor ebx, ebx
        push 40h
        push ebx
        push ebx
        push esi
        mov edi, ecx
        push ebp
        push eax
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 B6 D0 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        or byte ptr [edi + 24h], 20h
        mov dword ptr [edi + 50h], ebp
        mov dword ptr [edi + 54h], esi
        mov dword ptr [edi + 58h], 100h
        mov dword ptr [edi + 5ch], ebx
        mov ecx, dword ptr [edi + 40h]
        mov dword ptr [esp + 1ch], ebx
        cmp ecx, ebx
        mov dword ptr [edi], 10175390h
        ; Exact mapped bytes 66 C7 47 26 BC 7F: mov word ptr [edi + 0x26], 0x7fbc
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xbc
        __asm _emit 0x7f
        ; Exact mapped bytes 74 06: je 0x1001192b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 75 D6 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10011938
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 C8 D5 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [edi + 18h]
        ; Exact mapped bytes 66 81 67 24 F0 FF: and word ptr [edi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        add ecx, 32h
        lea edx, [eax*4]
        mov dword ptr [edi + 74h], eax
        push edx
        mov dword ptr [edi + 20h], ecx
        mov dword ptr [edi + 64h], ebx
        ; Exact mapped bytes E8 42 AE 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xae
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [edi + 60h], eax
        mov eax, dword ptr [edi + 74h]
        add esp, 4
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr [esp + 24h], ebp
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x10011a28
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 24 AE 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xae
        __asm _emit 0x15
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 28h], esi
        cmp esi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6F: je 0x100119fd
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [esp + 30h]
        push 40h
        ; Exact mapped bytes 8B 2D BC 56 1C 10: mov ebp, dword ptr [0x101c56bc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [eax + 1ah]
        add eax, 7
        push ecx
        mov ecx, dword ptr [esp + 34h]
        lea edx, [ecx + 96h]
        add ecx, 0ah
        push edx
        push eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 F7 CF 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 60h], 0ffffffh
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 58h], 8
        mov dword ptr [esi + 5ch], 10h
        mov dword ptr [esi + 54h], ebx
        push 80h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [esi], 10175338h
        ; Exact mapped bytes E8 B1 AD 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xad
        __asm _emit 0x15
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 28h]
        mov dword ptr [esi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x100119ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [edi + 60h]
        inc ebp
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [eax + ebp*4 - 4], esi
        mov ecx, dword ptr [edi + 60h]
        mov edx, dword ptr [ecx + ebp*4 - 4]
        mov dword ptr [edx + 60h], 1
        mov eax, dword ptr [edi + 74h]
        cmp ebp, eax
        ; Exact mapped bytes 0F 8C 4D FF FF FF: jl 0x10011975
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edi + 6ch], ebx
        mov dword ptr [edi + 70h], ebx
        mov dword ptr [edi + 78h], ebx
        mov dword ptr [edi + 80h], ebx
        mov dword ptr [edi + 68h], 64h
        ; Exact mapped bytes 66 89 5F 7C: mov word ptr [edi + 0x7c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x7c
        mov dword ptr [edi + 84h], ebx
        mov eax, edi
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
