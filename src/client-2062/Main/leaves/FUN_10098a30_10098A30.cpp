// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10098A30 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_10098a30_10098A30() {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp + 0ch]
        push ebx
        and eax, 0ffh
        mov dword ptr [esp + 8], ecx
        push ebp
        push esi
        mov ecx, dword ptr [eax*4 + 101ace80h]
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 79 22 06 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, eax
        mov dword ptr [esp + 1ch], 0
        mov ebx, 0c6h
        lea edx, [esi + 9cch]
        mov dword ptr [esp + 10h], edx
        xor edi, edi
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [eax]
        test edx, edx
        ; Exact mapped bytes 74 6B: je 0x10098ae7
        __asm _emit 0x74
        __asm _emit 0x6b
        mov al, byte ptr [edx]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 60: jne 0x10098ae7
        __asm _emit 0x75
        __asm _emit 0x60
        lea ecx, [ebx + edi]
        mov ecx, dword ptr [esi + ecx*4 + 734h]
        test ecx, ecx
        ; Exact mapped bytes 74 52: je 0x10098ae7
        __asm _emit 0x74
        __asm _emit 0x52
        test edi, edi
        ; Exact mapped bytes 75 3A: jne 0x10098ad3
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 0b4ch]
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 2C 18: mov bp, word ptr [eax + ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x18
        mov eax, ebp
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 6A 1E: mov bp, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x1e
        sub eax, ebp
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x10098ae7
        __asm _emit 0x7e
        __asm _emit 0x34
        lea eax, [eax + eax*4]
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 69 1E: mov bp, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1e
        push 1
        shl eax, 1
        cdq
        idiv ebp
        mov edx, dword ptr [esp + 20h]
        xor al, 0aah
        ; Exact mapped bytes 66 33 C9: xor cx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc9
        mov cl, al
        push ecx
        push edi
        push edx
        ; Exact mapped bytes EB 0D: jmp 0x10098ae0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [esp + 1ch]
        push 1
        push 0aah
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F9 8E 05 00: call 0x100f19e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        inc edi
        cmp edi, 2
        ; Exact mapped bytes 7C 85: jl 0x10098a72
        __asm _emit 0x7c
        __asm _emit 0x85
        mov edi, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        add ebx, 2
        inc edi
        add ecx, 4
        cmp ebx, 106h
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 60 FF FF FF: jl 0x10098a70
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes E8 F7 FC FF FF: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
