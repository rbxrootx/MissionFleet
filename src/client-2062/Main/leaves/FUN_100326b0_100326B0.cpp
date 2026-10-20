// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100326B0 .. +0x1E3 bytes.
extern "C" __declspec(naked) void FUN_100326b0_100326B0() {
    __asm {
        push -1
        push 1016e323h
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
        mov edx, dword ptr [esp + 14h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov ecx, dword ptr [esp + 28h]
        push eax
        push ebx
        push ebx
        push ebp
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 C2 C2 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esi], 101751f8h
        cmp eax, ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x1003272b
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push edi
        push 58h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 101757e4h
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 0bch], ebx
        mov dword ptr [esi + 0c0h], ebx
        mov dword ptr [esi + 0c4h], ebx
        ; Exact mapped bytes E8 4B A0 13 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa0
        __asm _emit 0x13
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 2A: je 0x10032791
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 46 26: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x26
        mov ecx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        add ebp, 3
        push eax
        push ebx
        push ebx
        push ebp
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2F C2 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10032793
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0b4h], ecx
        ; Exact mapped bytes E8 B9 C9 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        lea ecx, [esi + 0ach]
        xor edx, edx
        pop edi
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, 40000000h
        mov dword ptr [esi + 88h], ebx
        mov dword ptr [esi + 8ch], ebx
        mov dword ptr [esi + 90h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 78h], 2
        mov dword ptr [esi + 74h], 0ah
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [esi + 0b4h]
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebx
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 80h], ebx
        ; Exact mapped bytes 74 5D: je 0x1003287d
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [ecx + 50h], ebx
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, eax
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 75 03: jne 0x10032839
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [esi + 60h], ebx
        mov eax, dword ptr [esi + 88h]
        mov edx, dword ptr [esi + 0c4h]
        cmp eax, ebx
        mov dword ptr [esi + 54h], edx
        ; Exact mapped bytes 74 31: je 0x1003287d
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esp + 10h]
        mov eax, esi
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
