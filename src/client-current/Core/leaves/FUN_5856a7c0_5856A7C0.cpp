// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856A7C0 .. +0x1AC bytes.
extern "C" __declspec(naked) void FUN_5856a7c0_5856A7C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x5856a804
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 35ch]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + 6]
        cmp ecx, eax
        ; Exact mapped bytes 75 0F: jne 0x5856a7f5
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3904h], 64h
        ; Exact mapped bytes EB 0D: jmp 0x5856a802
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3904h], 14h
        ; Exact mapped bytes EB 0D: jmp 0x5856a811
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3904h], 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 1C: mov dx, word ptr [ebp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 66 89 91 8C 01 00 00: mov word ptr [ecx + 0x18c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 138h], ecx
        mov edi, dword ptr [ebp - 4]
        add edi, 190h
        mov ecx, 2ah
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 230h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 154h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 158h], 55555555h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 20: je 0x5856a889
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 8B 88 9C 00 00 00: mov cx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 158h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 99 FF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 02 00 00: call 0x5856aae0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB F7 FF FF: call 0x5856a050
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38fch], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 52: je 0x5856a90a
        __asm _emit 0x74
        __asm _emit 0x52
        mov edi, dword ptr [ebp - 4]
        add edi, 238h
        mov ecx, 2dh
        mov esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 2d6h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 38fch], edx
        push 6eh
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2e2h]
        push edx
        push 32c8h
        ; Exact mapped bytes E8 F2 96 F7 FF: call 0x584e3ff0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x96
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2f4h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3908h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 C6 F8 FF: call 0x584f6fb0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x5856a957
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 390ch], ecx
        ; Exact mapped bytes EB 0D: jmp 0x5856a964
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 390ch], 0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
