// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58619730 .. +0x2DD bytes.
extern "C" __declspec(naked) void FUN_58619730_58619730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 94h], 19h
        shr ecx, 1
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 87 B9 02 00 00: ja 0x58619a07
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 94h], 19h
        shr eax, 2
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 87 40 01 00 00: ja 0x586198a4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 4
        div ecx
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 87 22 01 00 00: ja 0x5861989f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 10 9A 61 58: jmp dword ptr [edx*4 + 0x58619a10]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0x9a
        __asm _emit 0x61
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 90h]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 8ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 59 BE 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xbe
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x5861989f
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 90h]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 11 BE 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbe
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x5861989f
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 8ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C9 BD 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 45: jmp 0x5861989f
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 3
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 82 BD 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x586199f9
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        xor edx, edx
        mov ecx, 3
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x586199f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 4
        div ecx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 87 22 01 00 00: ja 0x586199f9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 20 9A 61 58: jmp dword ptr [edx*4 + 0x58619a20]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x9a
        __asm _emit 0x61
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 90h]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 8ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FF BC 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x586199f9
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 90h]
        push edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B7 BC 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x586199f9
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 8ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6F BC 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 45: jmp 0x586199f9
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, edx
        push ecx
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        mov ecx, 2
        div ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 28 BC 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
