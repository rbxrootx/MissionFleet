// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000E210 .. +0x162 bytes.
extern "C" __declspec(naked) void FUN_1000e210_1000E210() {
    __asm {
        push -1
        push 1016d093h
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
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 18h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push 1f4h
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push ebp
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 5B 07 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        xor edi, edi
        mov eax, 270fh
        mov ebx, 1
        push 74h
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esi], 10175304h
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 68h], edi
        mov dword ptr [esi + 94h], 64h
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 9ch], ecx
        mov dword ptr [esi + 0a0h], ebp
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esi + 90h], 8
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0a8h], edi
        mov dword ptr [esi + 0b4h], edi
        mov dword ptr [esi + 0b0h], edi
        mov dword ptr [esi + 0b8h], edi
        mov dword ptr [esi + 0c0h], edi
        mov dword ptr [esi + 0bch], edi
        mov dword ptr [esi + 8ch], edi
        mov dword ptr [esi + 84h], edi
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 88h], 0ffffffffh
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], ebx
        ; Exact mapped bytes E8 A0 E4 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe4
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, edi
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 74 49: je 0x1000e358
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 64h
        ; Exact mapped bytes 7E 12: jle 0x1000e330
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x1000e330
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x1000e332
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        add ebp, 19h
        push 3a98h
        add edx, -13h
        push ebp
        push edx
        push ecx
        push esi
        push edi
        push 2710h
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 0D BC 01 00: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes EB 03: jmp 0x1000e35b
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 6ch], edi
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
