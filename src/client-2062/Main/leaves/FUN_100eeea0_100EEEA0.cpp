// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EEEA0 .. +0x2C8 bytes.
extern "C" __declspec(naked) void FUN_100eeea0_100EEEA0() {
    __asm {
        sub esp, 30h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0e74h]
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        shr eax, 0ch
        and eax, 7
        mov ecx, eax
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100eeec8
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        neg ecx
        sbb ecx, ecx
        neg ecx
        add ecx, eax
        mov dword ptr [esi + 0b0h], ecx
        mov edx, dword ptr [esi + 0e74h]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        shr eax, 3
        and eax, 3fh
        mov ecx, eax
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100eeef5
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        neg ecx
        sbb ecx, ecx
        mov edx, dword ptr [esi + 0b0h]
        neg ecx
        shl edx, 1
        lea ebp, [ecx + eax]
        mov dword ptr [esi + 0b0h], edx
        mov ecx, ebp
        mov dword ptr [esi + 0b4h], ebp
        shl ecx, 1
        lea eax, [ebp*4]
        mov dword ptr [esi + 0b4h], ecx
        mov ecx, eax
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 9ch], eax
        add eax, eax
        mov dword ptr [esi + 0a8h], eax
        mov dword ptr [esi + 0ach], eax
        mov eax, dword ptr [esi + 0b4h]
        xor ebx, ebx
        mov edx, eax
        mov dword ptr [esi + 0a0h], ebx
        imul edx, eax
        neg ecx
        push edx
        mov dword ptr [esi + 90h], ecx
        mov dword ptr [esi + 94h], ecx
        mov dword ptr [esi + 0a4h], ebx
        ; Exact mapped bytes E8 34 D8 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        mov edi, eax
        imul ecx, ecx
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        mov dword ptr [esp + 24h], edi
        add esp, 4
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov edi, dword ptr [esi + 0b4h]
        mov ecx, dword ptr [esi + 0b0h]
        mov eax, edi
        sub eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        test edi, edi
        ; Exact mapped bytes 7E 31: jle 0x100eefd8
        __asm _emit 0x7e
        __asm _emit 0x31
        xor edx, edx
        test ecx, ecx
        ; Exact mapped bytes 7E 20: jle 0x100eefcd
        __asm _emit 0x7e
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 0b4h]
        mov edi, dword ptr [esp + 20h]
        imul ecx, ebx
        add ecx, edx
        add ecx, eax
        inc edx
        mov byte ptr [ecx + edi], 1
        mov ecx, dword ptr [esi + 0b0h]
        cmp edx, ecx
        ; Exact mapped bytes 7C E0: jl 0x100eefad
        __asm _emit 0x7c
        __asm _emit 0xe0
        mov edx, dword ptr [esi + 0b4h]
        inc ebx
        cmp ebx, edx
        ; Exact mapped bytes 7C CF: jl 0x100eefa7
        __asm _emit 0x7c
        __asm _emit 0xcf
        lea edx, [esi + 0b8h]
        mov dword ptr [esp + 1ch], 0
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 28h], 24h
        mov eax, dword ptr [esi + 0b4h]
        mov ecx, eax
        imul ecx, eax
        push ecx
        ; Exact mapped bytes E8 9D D7 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd7
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov edi, eax
        xor eax, eax
        add esp, 4
        mov dword ptr [edx], edi
        mov ecx, dword ptr [esi + 0b4h]
        imul ecx, ecx
        mov edx, ecx
        mov dword ptr [esp + 14h], 0
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [esi + 0b4h]
        test eax, eax
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x100ef12e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [ebp + ebp*4]
        shl ebx, 1
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esp + 18h], ebx
        xor ecx, ecx
        test eax, eax
        mov dword ptr [esp + 24h], ecx
        ; Exact mapped bytes 0F 8E B3 00 00 00: jle 0x100ef10c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [esp + 14h]
        add eax, ecx
        mov ecx, dword ptr [esp + 20h]
        cmp byte ptr [eax + ecx], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x100ef0ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 3ch], edx
        lea ecx, [esp + 30h]
        push eax
        lea edx, [esp + 3ch]
        push ecx
        push edx
        mov dword ptr [esp + 44h], ebx
        ; Exact mapped bytes E8 42 2E F3 FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 3ch]
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, dword ptr [esp + 40h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 66666667h
        add edx, ebp
        add esp, 0ch
        mov edi, edx
        imul ecx
        sar edx, 2
        mov ecx, edx
        mov eax, ebp
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esp + 30h], edi
        sub eax, edx
        test edi, edi
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 7C 1F: jl 0x100ef0ee
        __asm _emit 0x7c
        __asm _emit 0x1f
        mov ecx, dword ptr [esi + 0b4h]
        cmp edi, ecx
        ; Exact mapped bytes 7D 15: jge 0x100ef0ee
        __asm _emit 0x7d
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100ef0ee
        __asm _emit 0x7c
        __asm _emit 0x11
        cmp eax, ecx
        ; Exact mapped bytes 7D 0D: jge 0x100ef0ee
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [esp + 10h]
        imul ecx, eax
        add ecx, dword ptr [edx]
        mov byte ptr [ecx + edi], 1
        mov ecx, dword ptr [esp + 24h]
        mov eax, dword ptr [esi + 0b4h]
        inc ecx
        sub ebx, 0ah
        cmp ecx, eax
        mov dword ptr [esp + 24h], ecx
        ; Exact mapped bytes 0F 8C 51 FF FF FF: jl 0x100ef059
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 18h]
        mov eax, dword ptr [esi + 0b4h]
        inc ecx
        sub edi, 0ah
        cmp ecx, eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 0F 8C 1D FF FF FF: jl 0x100ef04b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 28h]
        add edx, 64h
        add ecx, 4
        dec eax
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 0F 85 9F FE FF FF: jne 0x100eeff2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        push eax
        ; Exact mapped bytes E8 27 D6 07 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd6
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 30h
        ret
    }
}
