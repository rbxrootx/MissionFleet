// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58566FB0 .. +0x131 bytes.
extern "C" __declspec(naked) void FUN_58566fb0_58566FB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x5856704f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 0A 03 00 00: mov cx, word ptr [eax + 0x30a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 0D: jne 0x58566fe8
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 05 00 00: call 0x585675e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58566ff3
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 05 00 00: call 0x585675e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 314h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 158h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C D2 FF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 7C 10: jl 0x5856703f
        __asm _emit 0x7c
        __asm _emit 0x10
        push 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 87 F3 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x5856704a
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 87 F3 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x585670d8
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 BE 03 00 00: mov cx, word ptr [eax + 0x3be]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 0D: jne 0x58567076
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 05 00 00: call 0x585675e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58567081
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 05 00 00: call 0x585675e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 3c8h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 158h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE D1 FF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 7C 10: jl 0x585670cd
        __asm _emit 0x7c
        __asm _emit 0x10
        push 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 86 F3 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x86
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x585670d8
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 86 F3 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
