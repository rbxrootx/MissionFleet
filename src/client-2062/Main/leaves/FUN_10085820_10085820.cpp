// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10085820 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_10085820_10085820() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        sub esp, 800h
        cmp eax, 800h
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 72 14: jb 0x10085849
        __asm _emit 0x72
        __asm _emit 0x14
        mov eax, dword ptr [esp + 814h]
        push 800h
        lea ecx, [esp + 0ch]
        push eax
        push ecx
        ; Exact mapped bytes EB 0F: jmp 0x10085858
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 814h]
        inc eax
        push eax
        lea eax, [esp + 0ch]
        push edx
        push eax
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 80ch]
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x10085909
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 810h]
        mov edx, dword ptr [esi + 0c4h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x10085909
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 47: jne 0x100858d3
        __asm _emit 0x75
        __asm _emit 0x47
        push ecx
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 17 D0 F8 FF: call 0x100128b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100858b4
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100858b4
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esi + 9ch]
        lea ecx, [esp + 8]
        push ecx
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        add esp, 800h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 D0 CF F8 FF: call 0x100128b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100858f8
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100858f8
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esi + 74h]
        lea ecx, [esp + 8]
        push ecx
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        add esp, 800h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
