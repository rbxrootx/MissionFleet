// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041960 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_10041960_10041960() {
    __asm {
        sub esp, 10h
        push ebp
        mov ebp, ecx
        mov dword ptr [esp + 0ch], ebp
        mov ecx, dword ptr [ebp + 0e0h]
        mov eax, dword ptr [ebp + 0e4h]
        cmp ecx, eax
        mov dword ptr [esp + 8], ecx
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x10041a68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 88h]
        mov ebx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        cmp ebx, edx
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x10041a50
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 88h]
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        cmp esi, edx
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x10041a38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 4]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esp + 24h]
        add ecx, 0eh
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x10041a21
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x100419e2
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 AB AD 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xad
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi], 0
        mov edx, dword ptr [ebx]
        mov eax, edi
        mov ecx, dword ptr [edx + 88h]
        mov edx, dword ptr [ecx + 8]
        cmp edi, edx
        ; Exact mapped bytes 74 18: je 0x10041a0b
        __asm _emit 0x74
        __asm _emit 0x18
        mov ebx, esi
        sub ebx, edi
        mov ebp, dword ptr [eax]
        mov dword ptr [ebx + eax], ebp
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F4: jne 0x100419f7
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ebp, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 10h]
        mov eax, dword ptr [ecx + 8]
        sub esi, 4
        add eax, -4
        sub edi, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [ecx + 8], eax
        dec dword ptr [ebp + 44h]
        mov eax, dword ptr [ebx]
        add esi, 4
        add edi, 4
        mov ecx, dword ptr [eax + 88h]
        cmp esi, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 84: jne 0x100419b8
        __asm _emit 0x75
        __asm _emit 0x84
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [ecx]
        add ebx, 4
        mov dword ptr [esp + 10h], ebx
        mov eax, dword ptr [edx + 88h]
        cmp ebx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 85 4F FF FF FF: jne 0x1004199f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0e4h]
        add ecx, 4
        cmp ecx, eax
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 0F 85 20 FF FF FF: jne 0x10041985
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
