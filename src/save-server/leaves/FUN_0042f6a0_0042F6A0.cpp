// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F6A0 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_0042f6a0_0042F6A0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        sub ecx, edi
        sar ecx, 1
        cmp ecx, 1
        ; Exact mapped bytes 72 43: jb 0x42f6f6
        __asm _emit 0x72
        __asm _emit 0x43
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        mov ebx, dword ptr [esi]
        mov edi, dword ptr [esi + 4]
        add ebx, 2
        cmp ebx, edi
        ; Exact mapped bytes 74 66: je 0x42f72d
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, edi
        sub eax, edi
        sar eax, 1
        inc eax
        ; Exact mapped bytes 74 0E: je 0x42f6de
        __asm _emit 0x74
        __asm _emit 0x0e
        lea ecx, [eax + eax]
        push ecx
        push edi
        push ebx
        ; Exact mapped bytes E8 85 65 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 4]
        sub edi, ebx
        sar edi, 1
        neg edi
        shl edi, 1
        add eax, edi
        pop edi
        mov dword ptr [esi + 4], eax
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 76 16: jbe 0x42f714
        __asm _emit 0x76
        __asm _emit 0x16
        mov eax, edx
        ; Exact mapped bytes 66 8B D8: mov bx, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd8
        shl ebx, 10h
        ; Exact mapped bytes 66 8B D8: mov bx, ax
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xd8
        mov eax, ebx
        shr ecx, 1
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        adc ecx, ecx
        ; Exact mapped bytes 66 F3 AB: rep stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esi]
        push edx
        mov edx, dword ptr [esi + 4]
        mov ecx, esi
        sub edx, eax
        mov eax, 1
        sar edx, 1
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 73 34 00 00: call 0x432ba0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
