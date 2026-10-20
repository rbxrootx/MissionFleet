// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EFC0 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_5879efc0_5879EFC0() {
    __asm {
        sub esp, 8
        mov ecx, dword ptr [esp + 10h]
        mov edx, 1
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        dec ecx
        push esi
        xor ebx, ebx
        mov dword ptr [esp + 0ch], edx
        xor esi, esi
        mov dword ptr [esp + 10h], esi
        mov byte ptr [ecx], bl
        cmp ecx, ebp
        ; Exact mapped bytes 0F 86 14 01 00 00: jbe 0x5879f0fe
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esp + 28h]
        nop
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x5879effc
        __asm _emit 0x75
        __asm _emit 0x08
        cmp ebx, edx
        ; Exact mapped bytes 0F 8D F8 00 00 00: jge 0x5879f0f4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        dec eax
        cmp eax, 4
        ; Exact mapped bytes 0F 87 A8 00 00 00: ja 0x5879f0b2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 08 F1 79 58: jmp dword ptr [eax*4 + 0x5879f108]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xf1
        __asm _emit 0x79
        __asm _emit 0x58
        mov dword ptr [esp + 10h], 5
        test esi, esi
        ; Exact mapped bytes 75 1D: jne 0x5879f03a
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, 0cccccccdh
        mul edi
        mov eax, edi
        mov ebp, edx
        shr ebp, 3
        lea esi, [ebp*4]
        add esi, ebp
        add esi, esi
        sub eax, esi
        ; Exact mapped bytes 74 2C: je 0x5879f066
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, 0cccccccdh
        mov dword ptr [esp + 14h], 1
        mul edi
        dec ecx
        mov eax, 588b76a0h
        mov ebp, edx
        shr ebp, 3
        lea edx, [ebp*4]
        add edx, ebp
        add edx, edx
        sub eax, edx
        mov al, byte ptr [eax + edi]
        mov byte ptr [ecx], al
        mov edi, ebp
        inc ebx
        mov ebp, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 4D: jmp 0x5879f0bc
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov dword ptr [esp + 10h], 2
        mov eax, 0cccccccdh
        dec ecx
        mul edi
        mov eax, 588b76a0h
        shr edx, 3
        lea esi, [edx + edx*4]
        add esi, esi
        sub eax, esi
        mov al, byte ptr [eax + edi]
        mov edi, edx
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB 1D: jmp 0x5879f0b4
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov dword ptr [esp + 10h], 2
        mov eax, edi
        dec ecx
        and eax, 0fh
        shr edi, 4
        mov al, byte ptr [eax + 588b76a0h]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB 02: jmp 0x5879f0b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        inc ebx
        cmp dword ptr [esp + 24h], 5
        ; Exact mapped bytes 75 27: jne 0x5879f0e3
        __asm _emit 0x75
        __asm _emit 0x27
        cmp ebx, 5
        ; Exact mapped bytes 75 22: jne 0x5879f0e3
        __asm _emit 0x75
        __asm _emit 0x22
        cmp ecx, ebp
        ; Exact mapped bytes 76 2F: jbe 0x5879f0f4
        __asm _emit 0x76
        __asm _emit 0x2f
        mov esi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x5879f0d3
        __asm _emit 0x74
        __asm _emit 0x06
        dec ecx
        mov byte ptr [ecx], 2eh
        ; Exact mapped bytes EB 10: jmp 0x5879f0e3
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [esp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 85 1D FF FF FF: jne 0x5879effc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec ecx
        mov byte ptr [ecx], 30h
        cmp ecx, ebp
        ; Exact mapped bytes 76 0D: jbe 0x5879f0f4
        __asm _emit 0x76
        __asm _emit 0x0d
        mov edx, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 14h]
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x5879eff0
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 8
        ret
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}
