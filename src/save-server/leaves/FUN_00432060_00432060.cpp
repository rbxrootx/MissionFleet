// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432060 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_00432060_00432060() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi]
        sub eax, edi
        mov edi, dword ptr [esp + 14h]
        sar eax, 1
        cmp edi, eax
        ; Exact mapped bytes 76 0D: jbe 0x432084
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 1F 3D 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        mov ebp, dword ptr [esp + 1ch]
        sub eax, edx
        sar eax, 1
        xor esi, esi
        sub eax, edi
        ; Exact mapped bytes 66 39 75 00: cmp word ptr [ebp], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 74 0C: je 0x4320ab
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, ebp
        add ecx, 2
        inc esi
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 75 F6: jne 0x4320a1
        __asm _emit 0x75
        __asm _emit 0xf6
        mov ecx, dword ptr [esp + 18h]
        cmp eax, ecx
        lea eax, [esp + 14h]
        ; Exact mapped bytes 72 04: jb 0x4320bb
        __asm _emit 0x72
        __asm _emit 0x04
        lea eax, [esp + 18h]
        mov ecx, dword ptr [eax]
        lea ebx, [edx + edi*2]
        add ecx, edi
        add esi, esi
        shl ecx, 1
        sub ecx, ebx
        add ecx, edx
        lea edx, [esp + 18h]
        sar ecx, 1
        sar esi, 1
        cmp esi, ecx
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes 7C 04: jl 0x4320e2
        __asm _emit 0x7c
        __asm _emit 0x04
        lea edx, [esp + 14h]
        mov edi, dword ptr [edx]
        xor eax, eax
        test edi, edi
        ; Exact mapped bytes 76 3A: jbe 0x432124
        __asm _emit 0x76
        __asm _emit 0x3a
        mov edx, ebp
        mov ebp, ebx
        sub ebp, dword ptr [esp + 1ch]
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes EB 04: jmp 0x4320fc
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 2C 2A: mov bp, word ptr [edx + ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3B 2A: cmp bp, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x2a
        ; Exact mapped bytes 75 0A: jne 0x43210f
        __asm _emit 0x75
        __asm _emit 0x0a
        inc eax
        add edx, 2
        cmp eax, edi
        ; Exact mapped bytes 72 EB: jb 0x4320f8
        __asm _emit 0x72
        __asm _emit 0xeb
        ; Exact mapped bytes EB 15: jmp 0x432124
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 8B 14 43: mov dx, word ptr [ebx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x43
        ; Exact mapped bytes 66 3B 14 47: cmp dx, word ptr [edi + eax*2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x14
        __asm _emit 0x47
        sbb eax, eax
        and al, 0feh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x432139
        __asm _emit 0x75
        __asm _emit 0x15
        cmp ecx, esi
        ; Exact mapped bytes 7D 0A: jge 0x432132
        __asm _emit 0x7d
        __asm _emit 0x0a
        pop edi
        pop esi
        pop ebp
        or eax, 0ffffffffh
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        cmp ecx, esi
        setg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
