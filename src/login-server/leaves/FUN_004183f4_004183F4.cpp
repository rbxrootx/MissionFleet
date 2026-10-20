// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004183F4 .. +0x179 bytes.
extern "C" __declspec(naked) void FUN_004183f4_004183F4() {
    __asm {
        mov eax, 43ad0ch
        ; Exact mapped bytes E8 0A 72 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 7ch
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 18h], 43ec3ch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x418424
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [eax + 4], ebx
        ; Exact mapped bytes 75 35: jne 0x418459
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 8B 3D 6C C0 43 00: mov edi, dword ptr [0x43c06c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 11h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, ebx
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 75 21: jne 0x418456
        __asm _emit 0x75
        __asm _emit 0x21
        push 0dh
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, ebx
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 75 16: jne 0x418456
        __asm _emit 0x75
        __asm _emit 0x16
        mov dword ptr [esi + 44h], ebx
        mov dword ptr [ebp - 18h], 43e2fch
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x41854e
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        lea ecx, [ebp - 88h]
        push ecx
        push 3ch
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 15 4C C0 43 00: call dword ptr [0x43c04c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 6ch]
        mov dword ptr [ebp - 4ch], 20h
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x41847e
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebp - 48h], ebx
        ; Exact mapped bytes EB 35: jmp 0x4184b3
        __asm _emit 0xeb
        __asm _emit 0x35
        lea eax, [ebp - 6ch]
        push eax
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        inc esi
        lea eax, [esi + esi]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 68 6A 00 00: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, esp
        push esi
        push edi
        lea eax, [ebp - 6ch]
        push -1
        push eax
        push ebx
        push ebx
        ; Exact mapped bytes 66 89 1F: mov word ptr [edi], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes FF 15 90 C2 43 00: call dword ptr [0x43c290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 48h], edi
        ; Exact mapped bytes 66 8B 45 88: mov ax, word ptr [ebp - 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 66 89 45 C4: mov word ptr [ebp - 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 66 0F B6 45 8F: movzx ax, byte ptr [ebp - 0x71]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x8f
        ; Exact mapped bytes 66 89 45 C6: mov word ptr [ebp - 0x3a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc6
        movzx eax, byte ptr [ebp - 74h]
        mov dword ptr [ebp - 38h], eax
        movzx eax, byte ptr [ebp - 73h]
        mov dword ptr [ebp - 34h], eax
        movzx eax, byte ptr [ebp - 72h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 88h]
        cmp eax, ebx
        mov edi, eax
        ; Exact mapped bytes 7D 04: jge 0x4184e9
        __asm _emit 0x7d
        __asm _emit 0x04
        neg eax
        mov edi, eax
        push dword ptr [esi + 1ch]
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 13 BD 01 00: call 0x434207
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        push 5ah
        mov byte ptr [ebp - 4], 2
        push dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 15 A8 C0 43 00: call dword ptr [0x43c0a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, eax
        mov eax, edi
        imul eax, eax, 0afc80h
        cdq
        idiv ecx
        add esi, 44h
        mov dword ptr [ebp - 40h], ebx
        push esi
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes E8 3F F3 01 00: call 0x43785e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        push esi
        lea eax, [ebp - 4ch]
        push 440278h
        push eax
        ; Exact mapped bytes FF 15 68 C3 43 00: call dword ptr [0x43c368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 02: jge 0x418535
        __asm _emit 0x7d
        __asm _emit 0x02
        mov dword ptr [esi], ebx
        lea ecx, [ebp - 2ch]
        mov byte ptr [ebp - 4], bl
        ; Exact mapped bytes E8 39 BD 01 00: call 0x434279
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 43e2fch
        mov dword ptr [ebp - 4], 3
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CF BE 01 00: call 0x434425
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        lea esp, [ebp - 94h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
