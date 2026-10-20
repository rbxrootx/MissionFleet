// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000CE40 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_1000ce40_1000CE40() {
    __asm {
        push -1
        push 1016d06ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 110h
        mov al, byte ptr [esp + 3]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor ecx, ecx
        lea edi, [ebp + 8]
        mov dword ptr [esp + 14h], ebp
        mov byte ptr [edi], al
        mov dword ptr [edi + 4], ecx
        mov dword ptr [edi + 8], ecx
        mov dword ptr [edi + 0ch], ecx
        mov eax, dword ptr [esp + 12ch]
        mov dword ptr [ebp], 10175298h
        mov dword ptr [ebp + 4], eax
        mov dword ptr [esp + 124h], ecx
        mov eax, dword ptr [eax + 88h]
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        cmp esi, edx
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x1000cf4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi]
        lea edx, [esp + 20h]
        add ecx, 58h
        push ecx
        push 1017f34ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 244h
        ; Exact mapped bytes E8 CB F8 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        mov byte ptr [esp + 128h], 1
        ; Exact mapped bytes 74 0C: je 0x1000cef4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FE 46 FF FF: call 0x100015f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1000cef6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi]
        mov dword ptr [esp + 14h], eax
        add edx, 58h
        lea eax, [esp + 20h]
        push edx
        push 1017f344h
        push eax
        mov byte ptr [esp + 134h], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        lea ecx, [esp + 20h]
        push ecx
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi + 8]
        lea edx, [esp + 14h]
        push edx
        push 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DC 8C 08 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        add esi, 4
        mov edx, dword ptr [ecx + 88h]
        cmp esi, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 62 FF FF FF: jne 0x1000ceab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        pop ebx
        mov eax, dword ptr [edi + 4]
        cmp eax, ecx
        ; Exact mapped bytes 74 1F: je 0x1000cf72
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [edi + 8]
        sub edx, eax
        sar edx, 2
        ; Exact mapped bytes 74 15: je 0x1000cf72
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 0ch]
        xor edx, edx
        mov dl, byte ptr [eax + 330h]
        mov dword ptr [ebp + 18h], edx
        ; Exact mapped bytes EB 03: jmp 0x1000cf75
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp + 18h], ecx
        mov dword ptr [ebp + 1ch], ecx
        mov ecx, dword ptr [esp + 11ch]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 11ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
