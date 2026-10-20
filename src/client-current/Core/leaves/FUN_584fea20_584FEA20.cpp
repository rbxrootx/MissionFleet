// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FEA20 .. +0x170 bytes.
extern "C" __declspec(naked) void FUN_584fea20_584FEA20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov edi, dword ptr [ebp - 4]
        add edi, 50h
        mov ecx, 60h
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D C2 FF FF: call 0x584facc0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 58h]
        xor eax, 55h
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 11 58: mov word ptr [ecx + edx + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x58
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 58h]
        xor ecx, 55h
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 10 58: mov word ptr [eax + edx + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x58
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 58h]
        xor eax, 55h
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 0A 58: mov word ptr [edx + ecx + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584feabc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ch
        ; Exact mapped bytes 7D 31: jge 0x584feaf3
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx*2 + 64h]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 4A 64: mov word ptr [edx + ecx*2 + 0x64], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 7C: movsx ecx, byte ptr [eax + 0x7c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x7c
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 7ch], cl
        ; Exact mapped bytes EB C0: jmp 0x584feab3
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        xor edx, 55h
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        ; Exact mapped bytes 66 C1 E2 04: shl dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x04
        mov eax, 0f80fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 41 5E: and ax, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x41
        __asm _emit 0x5e
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 5E: mov word ptr [edx + 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a0h]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A A0 00 00 00: mov word ptr [edx + 0xa0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B EA FF FF: call 0x584fd600
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 85 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 CE 1A 00: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
