// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885E19E .. +0x19D bytes.
extern "C" __declspec(naked) void FUN_5885e19e_5885E19E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        mov ebx, dword ptr [ebp + 18h]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        push 17h
        cmp byte ptr [ebx + 4], 0
        pop eax
        push 34h
        pop ecx
        cmovne eax, ecx
        mov dword ptr [ebp - 4], eax
        cmp edi, 40h
        ; Exact mapped bytes 77 3F: ja 0x5885e202
        __asm _emit 0x77
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 76 0D: jbe 0x5885e1d8
        __asm _emit 0x76
        __asm _emit 0x0d
        cmp dword ptr [edx], 1
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 76 07: jbe 0x5885e1da
        __asm _emit 0x76
        __asm _emit 0x07
        mov edx, dword ptr [edx + 8]
        ; Exact mapped bytes EB 04: jmp 0x5885e1dc
        __asm _emit 0xeb
        __asm _emit 0x04
        xor ecx, ecx
        xor edx, edx
        mov al, byte ptr [ebp + 14h]
        xor al, 1
        push ebx
        movzx eax, al
        push eax
        push dword ptr [ebp + 10h]
        xor eax, eax
        push dword ptr [ebp - 4]
        add eax, ecx
        adc edx, 0
        push edx
        push eax
        ; Exact mapped bytes E8 0B FC FF FF: call 0x5885de05
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x5885e337
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        shr edi, 5
        and ecx, 1fh
        mov dword ptr [ebp - 0ch], ecx
        push esi
        lea esi, [edi - 2]
        mov ecx, esi
        shl ecx, 5
        cmp dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + esi*4 + 4]
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ecx + edi*4]
        ; Exact mapped bytes 75 4C: jne 0x5885e278
        __asm _emit 0x75
        __asm _emit 0x4c
        add eax, dword ptr [ebp - 8]
        xor edi, edi
        add edi, dword ptr [ecx + esi*4 + 4]
        mov dword ptr [ebp - 14h], eax
        mov al, byte ptr [ebp + 14h]
        adc edx, 0
        xor al, 1
        mov dword ptr [ebp - 18h], edx
        mov byte ptr [ebp - 0ch], al
        test esi, esi
        ; Exact mapped bytes 74 1D: je 0x5885e267
        __asm _emit 0x74
        __asm _emit 0x1d
        lea edx, [ecx + 4]
        xor ecx, ecx
        movzx eax, al
        cmp dword ptr [edx], ecx
        lea edx, [edx + 4]
        cmove ecx, eax
        mov al, cl
        sub esi, 1
        ; Exact mapped bytes 75 EC: jne 0x5885e24d
        __asm _emit 0x75
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 18h]
        mov byte ptr [ebp - 0ch], al
        push ebx
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp - 14h]
        push edx
        push edi
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x5885e32e
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        xor ebx, ebx
        inc ebx
        mov eax, ebx
        shl eax, cl
        dec eax
        mov dword ptr [ebp - 10h], eax
        push 40h
        pop eax
        sub eax, ecx
        add ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, eax
        mov dword ptr [ebp - 14h], eax
        mov eax, edx
        xor edx, edx
        lea ecx, [ecx - 20h]
        ; Exact mapped bytes E8 1B EE 01 00: call 0x5887d0c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 10h]
        not eax
        mov dword ptr [ebp - 8], edx
        and eax, dword ptr [ebp - 18h]
        xor edx, edx
        ; Exact mapped bytes E8 93 EF 01 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        add dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        adc dword ptr [ebp - 8], edx
        xor edx, edx
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + edi*4 + 4]
        mov edi, dword ptr [ebp - 10h]
        and eax, edi
        ; Exact mapped bytes E8 E7 ED 01 00: call 0x5887d0c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        adc eax, edx
        cmp byte ptr [ebp + 14h], 0
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 75 05: jne 0x5885e2f4
        __asm _emit 0x75
        __asm _emit 0x05
        test dword ptr [ebp - 18h], edi
        ; Exact mapped bytes 74 02: je 0x5885e2f6
        __asm _emit 0x74
        __asm _emit 0x02
        xor bl, bl
        mov byte ptr [ebp - 0ch], bl
        test esi, esi
        ; Exact mapped bytes 74 23: je 0x5885e320
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        xor ecx, ecx
        movzx eax, bl
        cmp dword ptr [edx], ecx
        lea edx, [edx + 4]
        cmove ecx, eax
        mov bl, cl
        mov byte ptr [ebp - 0ch], bl
        sub esi, 1
        ; Exact mapped bytes 75 E9: jne 0x5885e303
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp - 1ch]
        push eax
        push ecx
        ; Exact mapped bytes E8 D2 FA FF FF: call 0x5885de05
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        pop esi
        pop edi
        pop ebx
        leave
        ret
    }
}
