// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58845CFB .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_58845cfb_58845CFB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov byte ptr [ebp - 4], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FD: mov word ptr [ebp - 3], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfd
        and dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 77 07: ja 0x58845d1f
        __asm _emit 0x77
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x58845e78
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 34 01 00: call 0x58859130
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        sub eax, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 07: jle 0x58845d4c
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x58845e78
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 07: jmp 0x58845d59
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 0ch]
        inc eax
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 38: jge 0x58845d9e
        __asm _emit 0x7d
        __asm _emit 0x38
        push 2
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ecx + eax*2]
        push eax
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 55 0E 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E7 18 01 00: call 0x58857672
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ebp - 18h]
        mov byte ptr [eax], cl
        ; Exact mapped bytes EB B4: jmp 0x58845d52
        __asm _emit 0xeb
        __asm _emit 0xb4
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x58845dab
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x58845e78
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 04 01: movsx eax, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        cmp eax, 2
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x58845e75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        shl eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 04 01: movsx eax, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        mov dword ptr [ebp - 8], eax
        imul eax, dword ptr [ebp - 8], 7
        mov dword ptr [ebp - 8], eax
        xor eax, eax
        inc eax
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        add ecx, 46h
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 04 02: movsx eax, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x02
        xor eax, ecx
        xor ecx, ecx
        inc ecx
        shl ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [ebp - 8]
        inc eax
        mov dword ptr [ebp - 8], eax
        imul eax, dword ptr [ebp - 8], 7
        mov dword ptr [ebp - 8], eax
        xor eax, eax
        inc eax
        imul eax, eax, 3
        mov ecx, dword ptr [ebp - 8]
        add ecx, 46h
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 04 02: movsx eax, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x02
        xor eax, ecx
        xor ecx, ecx
        inc ecx
        imul ecx, ecx, 3
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [ebp - 8]
        inc eax
        mov dword ptr [ebp - 8], eax
        and dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 07: jmp 0x58845e3a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 0ch]
        inc eax
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 2A: jge 0x58845e6c
        __asm _emit 0x7d
        __asm _emit 0x2a
        imul eax, dword ptr [ebp - 8], 7
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 40 04: movsx eax, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x40
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 8]
        add ecx, 46h
        xor eax, ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx], al
        mov eax, dword ptr [ebp - 8]
        inc eax
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB C7: jmp 0x58845e33
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 14h]
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
