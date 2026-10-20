// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534B1B .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_00534b1b_00534B1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        mov dword ptr [ebp - 208h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1B: jne 0x534b4b
        __asm _emit 0x75
        __asm _emit 0x1b
        push 5c7714h
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 10 FF FF FF: call 0x534a50
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x534c53
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 7C E8 5D 00 00: cmp dword ptr [0x5de87c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x534b5f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 208h]
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x534c53
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x534c27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 200h]
        mov dword ptr [ebp - 204h], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x534c04
        __asm _emit 0x74
        __asm _emit 0x7f
        lea ecx, [ebp - 3]
        cmp dword ptr [ebp - 204h], ecx
        ; Exact mapped bytes 76 27: jbe 0x534bb7
        __asm _emit 0x76
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 204h]
        mov byte ptr [edx], 0
        lea eax, [ebp - 200h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x534a50
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 200h]
        mov dword ptr [ebp - 204h], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 0ah
        ; Exact mapped bytes 75 18: jne 0x534bda
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 204h]
        mov byte ptr [ecx], 0dh
        mov edx, dword ptr [ebp - 204h]
        add edx, 1
        mov dword ptr [ebp - 204h], edx
        mov eax, dword ptr [ebp - 204h]
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 204h]
        add eax, 1
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x534b7b
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 204h]
        mov byte ptr [edx], 0
        lea eax, [ebp - 200h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 31 FE FF FF: call 0x534a50
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        ; Exact mapped bytes EB 2C: jmp 0x534c53
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 208h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
