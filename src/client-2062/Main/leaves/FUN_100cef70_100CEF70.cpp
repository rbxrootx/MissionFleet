// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CEF70 .. +0x19D bytes.
extern "C" __declspec(naked) void FUN_100cef70_100CEF70() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov cl, bl
        mov eax, dword ptr [esi + 130h]
        and cl, 1
        ; Exact mapped bytes 66 0F B6 F9: movzx di, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xf9
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fffeh
        or edx, edi
        test ebx, ebx
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x100cf02b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov ebp, 80h
        push 30h
        mov dword ptr [eax + 50h], 18h
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 45 07 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, 1
        push ecx
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 54h], ecx
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 28 07 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        push 78h
        mov dword ptr [eax + 50h], ebp
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 0F 07 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 130h]
        mov edx, dword ptr [eax + 88h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [eax + 50h], edx
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes EB 5C: jmp 0x100cf087
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [esi + 0b4h]
        mov ebp, 80h
        push 30h
        mov dword ptr [eax + 50h], 2
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 D3 06 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        push 1
        mov dword ptr [eax + 50h], 1
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 B6 06 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        push 78h
        mov dword ptr [eax + 50h], 1
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 99 06 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ech]
        test ebx, ebx
        sete dl
        and dl, 1
        ; Exact mapped bytes 66 33 C9: xor cx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc9
        mov cl, dl
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        shl ecx, 1
        and edx, 0fffdh
        or ecx, edx
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 13ch]
        lea ecx, [edi + edi]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fffdh
        or edx, ecx
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 13ch]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fffeh
        or edx, edi
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 140h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fffdh
        or edx, ecx
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [esi + 140h]
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0fffeh
        or eax, edi
        pop edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
