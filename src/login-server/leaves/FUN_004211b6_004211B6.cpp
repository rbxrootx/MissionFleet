// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004211B6 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004211b6_004211B6() {
    __asm {
        push edi
        ; Exact mapped bytes E8 9F 00 00 00: call 0x42125b
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        pop edi
        ; Exact mapped bytes 39 3D F8 FC 44 00: cmp dword ptr [0x44fcf8], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4211d8
        __asm _emit 0x75
        __asm _emit 0x11
        push dword ptr [esp + 8]
        ; Exact mapped bytes FF 15 DC C0 43 00: call dword ptr [0x43c0dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 44 C1 43 00: call dword ptr [0x43c144]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esp + 0ch], 0
        push ebx
        mov ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 89 3D F4 FC 44 00: mov dword ptr [0x44fcf4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 88 1D F0 FC 44 00: mov byte ptr [0x44fcf0], bl
        __asm _emit 0x88
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 3C: jne 0x42122c
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes A1 90 11 45 00: mov eax, dword ptr [0x451190]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x42121b
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 8C 11 45 00: mov ecx, dword ptr [0x45118c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        lea esi, [ecx - 4]
        cmp esi, eax
        ; Exact mapped bytes 72 13: jb 0x42121a
        __asm _emit 0x72
        __asm _emit 0x13
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x42120f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        sub esi, 4
        ; Exact mapped bytes 3B 35 90 11 45 00: cmp esi, dword ptr [0x451190]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 73 ED: jae 0x421207
        __asm _emit 0x73
        __asm _emit 0xed
        pop esi
        push 4480b4h
        push 4480ach
        ; Exact mapped bytes E8 43 00 00 00: call 0x42126d
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push 4480c0h
        push 4480b8h
        ; Exact mapped bytes E8 32 00 00 00: call 0x42126d
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test ebx, ebx
        pop ebx
        ; Exact mapped bytes 74 07: je 0x421249
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 1D 00 00 00: call 0x421264
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        ret
        push dword ptr [esp + 8]
        ; Exact mapped bytes 89 3D F8 FC 44 00: mov dword ptr [0x44fcf8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 C1 43 00: call dword ptr [0x43c124]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        ret
    }
}
