// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58704070 .. +0x170 bytes.
extern "C" __declspec(naked) void FUN_58704070_58704070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x587041ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 13: jne 0x587040a4
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x587041b8
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0E: jne 0x587040bd
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 03 00 00: call 0x58704460
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x587041b8
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x58704167
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov eax, 2
        shl eax, 0
        movzx ecx, word ptr [edx + eax + 8]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        add eax, ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [edx + ecx + 8]
        xor edx, 55h
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, 2
        imul eax, edx, 0bh
        movzx ecx, word ptr [ecx + eax + 14h]
        xor ecx, 55h
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 31: jge 0x5870415c
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 35 70 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 04 00 00: call 0x587045b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 51: jmp 0x587041b8
        __asm _emit 0xeb
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 46: jne 0x587041b8
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 1
        ; Exact mapped bytes 7E 31: jle 0x587041af
        __asm _emit 0x7e
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 6F 0B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 03 00 00: call 0x587045b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x587041d8
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 02: jne 0x587041c2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 16: jmp 0x587041d8
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x587041d8
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 FE DC FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
