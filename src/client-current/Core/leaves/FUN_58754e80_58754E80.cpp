// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754E80 .. +0x358 bytes.
extern "C" __declspec(naked) void FUN_58754e80_58754E80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 114h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1b0h
        push ecx
        ; Exact mapped bytes E8 ED 79 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 44h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 03 00 00: call 0x587551e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 400h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2c8h
        push ecx
        ; Exact mapped bytes E8 3F 7F 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58754ee6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D BB 00 00 00: jge 0x58754fab
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 2c9h], 55h
        mov edx, dword ptr [ebp - 8]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 2e0h], 55h
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2dch]
        and eax, 0fffffc00h
        or eax, 55h
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 2dch], eax
        mov eax, dword ptr [ebp - 8]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2dch]
        and edx, 0fff003ffh
        or edx, 15400h
        mov eax, dword ptr [ebp - 8]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 2dch], edx
        mov edx, dword ptr [ebp - 8]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2dch]
        and ecx, 0c00fffffh
        or ecx, 5500000h
        mov edx, dword ptr [ebp - 8]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 2dch], ecx
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 2cch], 55h
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x58754edd
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58754fbd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 2b0h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D A1 01 00 00: jge 0x58755171
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, byte ptr [eax]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        lea edi, [edx + ecx + 2c8h]
        mov ecx, 8
        mov esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, byte ptr [eax]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 2c9h]
        xor eax, 55h
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, byte ptr [ecx]
        shl edx, 5
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + edx + 2c9h], al
        mov edx, dword ptr [ebp + 10h]
        movzx eax, byte ptr [edx]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 2e0h]
        xor edx, 55h
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, byte ptr [eax]
        shl ecx, 5
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + ecx + 2e0h], dl
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, byte ptr [ecx]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2dch]
        and ecx, 3ffh
        xor ecx, 55h
        mov edx, dword ptr [ebp + 10h]
        movzx eax, byte ptr [edx]
        shl eax, 5
        and ecx, 3ffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 2dch]
        and eax, 0fffffc00h
        or eax, ecx
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, byte ptr [ecx]
        shl edx, 5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 2dch], eax
        mov edx, dword ptr [ebp + 10h]
        movzx eax, byte ptr [edx]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2dch]
        shr edx, 0ah
        and edx, 3ffh
        xor edx, 55h
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, byte ptr [eax]
        shl ecx, 5
        and edx, 3ffh
        shl edx, 0ah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + ecx + 2dch]
        and ecx, 0fff003ffh
        or ecx, edx
        mov edx, dword ptr [ebp + 10h]
        movzx eax, byte ptr [edx]
        shl eax, 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax + 2dch], ecx
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, byte ptr [eax]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2dch]
        shr eax, 14h
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, byte ptr [ecx]
        shl edx, 5
        and eax, 3ffh
        shl eax, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 2dch]
        and edx, 0c00fffffh
        or edx, eax
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, byte ptr [eax]
        shl ecx, 5
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 2dch], edx
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, byte ptr [ecx]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2cch]
        xor ecx, 55h
        mov edx, dword ptr [ebp + 10h]
        movzx eax, byte ptr [edx]
        shl eax, 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax + 2cch], ecx
        mov eax, dword ptr [ebp + 10h]
        add eax, 20h
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes E9 43 FE FF FF: jmp 0x58754fb4
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58755183
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 0F: jge 0x58755198
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 0bd4h], 0
        ; Exact mapped bytes EB E2: jmp 0x5875517a
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact mapped bytes 0F B6 05 9C 75 94 58: movzx eax, byte ptr [0x5894759c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 23: jne 0x587551c7
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 0F B6 0D 7E 77 94 58: movzx ecx, byte ptr [0x5894777e]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x7e
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 0F B6 15 7D 77 94 58: movzx edx, byte ptr [0x5894777d]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0x7d
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 0F B6 05 7C 77 94 58: movzx eax, byte ptr [0x5894777c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 04 00 00: call 0x587556a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x587551d0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 9F FF FF: call 0x5874f130
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
