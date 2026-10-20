// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427563 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_00427563_00427563() {
    __asm {
        ; Exact mapped bytes 83 3D 84 11 45 00 00: cmp dword ptr [0x451184], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        ; Exact mapped bytes 8B 35 D8 FC 44 00: mov esi, dword ptr [0x44fcd8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 74 65: je 0x4275da
        __asm _emit 0x74
        __asm _emit 0x65
        test esi, esi
        ; Exact mapped bytes 75 1B: jne 0x427594
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 39 35 E0 FC 44 00: cmp dword ptr [0x44fce0], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 59: je 0x4275da
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes E8 57 0E 00 00: call 0x4283dd
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 50: jne 0x4275da
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes 8B 35 D8 FC 44 00: mov esi, dword ptr [0x44fcd8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 46: je 0x4275da
        __asm _emit 0x74
        __asm _emit 0x46
        mov ebx, dword ptr [esp + 10h]
        test ebx, ebx
        ; Exact mapped bytes 74 3E: je 0x4275da
        __asm _emit 0x74
        __asm _emit 0x3e
        push ebx
        ; Exact mapped bytes E8 9E 75 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x4275da
        __asm _emit 0x74
        __asm _emit 0x2f
        push eax
        ; Exact mapped bytes E8 8F 75 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        pop ecx
        ; Exact mapped bytes 76 17: jbe 0x4275cd
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi]
        cmp byte ptr [eax + edi], 3dh
        ; Exact mapped bytes 75 0F: jne 0x4275cd
        __asm _emit 0x75
        __asm _emit 0x0f
        push edi
        push ebx
        push eax
        ; Exact mapped bytes E8 D8 0D 00 00: call 0x42839e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4275d2
        __asm _emit 0x74
        __asm _emit 0x05
        add esi, 4
        ; Exact mapped bytes EB D3: jmp 0x4275a5
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [esi]
        lea eax, [eax + edi + 1]
        ; Exact mapped bytes EB 02: jmp 0x4275dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}
