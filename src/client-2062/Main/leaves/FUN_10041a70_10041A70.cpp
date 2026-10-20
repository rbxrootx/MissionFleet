// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041A70 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_10041a70_10041A70() {
    __asm {
        sub esp, 8
        mov eax, dword ptr [ecx + 0e0h]
        mov dword ptr [esp + 4], ecx
        mov ecx, dword ptr [ecx + 0e4h]
        push ebp
        push esi
        cmp eax, ecx
        push edi
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x10041ba9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        mov esi, dword ptr [eax]
        cmp dword ptr [esi + 78h], edx
        ; Exact mapped bytes 74 14: je 0x10041ab1
        __asm _emit 0x74
        __asm _emit 0x14
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x10041a96
        __asm _emit 0x75
        __asm _emit 0xf2
        pop edi
        pop esi
        mov dword ptr [esp + 4], eax
        pop ebp
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0ch], eax
        mov ecx, dword ptr [ecx + 88h]
        mov ebp, dword ptr [ecx + 4]
        mov edx, dword ptr [ecx + 8]
        cmp ebp, edx
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x10041ba9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 18h]
        push ebx
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [edx + 88h]
        mov edi, dword ptr [ecx + 4]
        mov edx, dword ptr [ecx + 8]
        cmp edi, edx
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x10041b90
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edi + 4]
        mov eax, dword ptr [esi + 0f10h]
        mov ecx, dword ptr [edi]
        add ecx, 0eh
        mov eax, dword ptr [eax + 6ch]
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
        ; Exact mapped bytes 75 6C: jne 0x10041b74
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [edi]
        mov dl, byte ptr [esi + 330h]
        push 0
        push eax
        mov byte ptr [eax + 0ch], dl
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [eax + 4], edx
        mov cl, byte ptr [esi + 331h]
        mov byte ptr [eax + 0dh], cl
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes E8 ED FB FF FF: call 0x10041720
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp]
        mov eax, ebx
        mov ecx, dword ptr [edx + 88h]
        mov edx, dword ptr [ecx + 8]
        cmp ebx, edx
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 74 18: je 0x10041b61
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, edi
        sub edx, ebx
        mov ebp, dword ptr [eax]
        mov dword ptr [edx + eax], ebp
        mov ebp, dword ptr [esp + 1ch]
        add eax, 4
        cmp eax, ebp
        ; Exact mapped bytes 75 F0: jne 0x10041b4d
        __asm _emit 0x75
        __asm _emit 0xf0
        mov ebp, dword ptr [esp + 20h]
        mov eax, dword ptr [ecx + 8]
        sub edi, 4
        add eax, -4
        sub ebx, 4
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [ebp]
        add edi, 4
        add ebx, 4
        mov ecx, dword ptr [eax + 88h]
        cmp edi, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 85 62 FF FF FF: jne 0x10041aee
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [eax]
        add ebp, 4
        mov dword ptr [esp + 20h], ebp
        mov ecx, dword ptr [edx + 88h]
        cmp ebp, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 85 2C FF FF FF: jne 0x10041ad4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
