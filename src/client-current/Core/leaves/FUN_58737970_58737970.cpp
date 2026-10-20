// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58737970 .. +0x251 bytes.
extern "C" __declspec(naked) void FUN_58737970_58737970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 10h]
        mov byte ptr [ecx + 56h], dl
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 14h]
        mov byte ptr [eax + 57h], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 8ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [eax + 90h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [edx + 94h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 28h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        push ecx
        ; Exact mapped bytes E8 0D 94 D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 67 D9 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x67
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 18h
        mov eax, dword ptr [ebp - 4]
        add eax, 70h
        push eax
        ; Exact mapped bytes E8 DD 93 D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x93
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 70h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 67 D9 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x67
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0b4h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5E DC 07 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 104h
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3D DC 07 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 151h
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1D DC 07 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 19fh
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FC DB 07 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 56h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        ; Exact mapped bytes E8 0B 27 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x27
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 588b479ch
        push 80h
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 01 93 D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x93
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 57h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        ; Exact mapped bytes E8 CD 26 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x26
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        push 588b47a0h
        push 80h
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 C3 92 D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x92
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        ; Exact mapped bytes E8 8E 26 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x26
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        push 588b47a4h
        push 80h
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 84 92 D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0cch]
        ; Exact mapped bytes E8 4E 26 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x26
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        push 588b47a8h
        push 80h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 44 92 D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x92
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 2ch]
        mov dword ptr [ecx + 0f4h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 2C 00: ret 0x2c
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x00
    }
}
