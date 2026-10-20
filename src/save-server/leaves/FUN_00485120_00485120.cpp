// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485120 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00485120_00485120() {
    __asm {
        ; Exact mapped bytes 83 3D 40 90 68 00 00: cmp dword ptr [0x689040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes 74 72: je 0x48519c
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [esp + 8]
        cmp eax, 134h
        ; Exact mapped bytes 72 67: jb 0x48519c
        __asm _emit 0x72
        __asm _emit 0x67
        cmp eax, 137h
        ; Exact mapped bytes 74 60: je 0x48519c
        __asm _emit 0x74
        __asm _emit 0x60
        cmp eax, 134h
        ; Exact mapped bytes 75 31: jne 0x485174
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 66 81 3D 60 90 68 00 5F 03: cmp word ptr [0x689060], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 73 20: jae 0x48516e
        __asm _emit 0x73
        __asm _emit 0x20
        mov esi, dword ptr [esp + 10h]
        push 5
        push esi
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x48516e
        __asm _emit 0x74
        __asm _emit 0x0f
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and al, 3
        cmp al, 3
        ; Exact mapped bytes 75 06: jne 0x485174
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, dword ptr [esp + 0ch]
        ; Exact mapped bytes A1 70 90 68 00: mov eax, dword ptr [0x689070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 94 B6 68 00: call dword ptr [0x68b694]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 68 90 68 00: mov ecx, dword ptr [0x689068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        push esi
        ; Exact mapped bytes FF 15 90 B6 68 00: call dword ptr [0x68b690]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 88 90 68 00: mov eax, dword ptr [0x689088]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
