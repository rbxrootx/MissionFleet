// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CF140 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_100cf140_100CF140() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        mov cl, bl
        mov eax, dword ptr [esi + 240h]
        and cl, 1
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fffeh
        or edx, ecx
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 244h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fffeh
        or edx, ecx
        test ebx, ebx
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 74 6A: je 0x100cf1eb
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [esi + 0ech]
        push 101ace48h
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0b4h]
        push 8
        mov dword ptr [eax + 50h], 8
        mov dword ptr [eax + 54h], 40h
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 66 05 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, 1
        push ecx
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 54h], ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 49 05 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, 28h
        push ecx
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes EB 58: jmp 0x100cf243
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [esi + 0b4h]
        push 30h
        mov dword ptr [eax + 50h], 2
        mov dword ptr [eax + 54h], 80h
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 14 05 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        push 1
        mov dword ptr [eax + 50h], 1
        mov dword ptr [eax + 54h], 80h
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 F3 04 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        push 78h
        mov dword ptr [eax + 50h], 1
        mov dword ptr [eax + 54h], 80h
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 D2 04 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, dword ptr [esi + 0ech]
        test ebx, ebx
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        sete dl
        and dl, 1
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        mov al, dl
        and ecx, 0fffdh
        shl eax, 1
        or eax, ecx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
