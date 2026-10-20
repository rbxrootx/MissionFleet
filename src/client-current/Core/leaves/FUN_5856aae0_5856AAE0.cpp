// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856AAE0 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_5856aae0_5856AAE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 28 02 00 00: mov cx, word ptr [eax + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 7C 16: jl 0x5856ab15
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 28 02 00 00: mov cx, word ptr [eax + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 06: jmp 0x5856ab1b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 C5 FF FF: call 0x58567110
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x5856ab36
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 40000000h
        ; Exact mapped bytes EB 07: jmp 0x5856ab3d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0f8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 55555555h
        mov edx, dword ptr [ebp + 8]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ech], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D BE F1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbe
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 3F: jne 0x5856abbd
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 32 FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ech]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2ech
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 32 FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
