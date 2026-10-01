// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748E40 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_58748e40() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 90h], eax
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x58748f22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 90h], eax
        mov eax, dword ptr [esi + 80h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58748e76
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 D9 3D 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 80h], 0
        mov eax, dword ptr [esi + 90h]
        inc eax
        push eax
        ; Exact mapped bytes E8 AB 86 22 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        inc ecx
        push ecx
        push 0
        push eax
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 AF 3D 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [esi + 100h]
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58748eb9
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 96 3D 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 100h], 0
        mov edx, dword ptr [esi + 90h]
        inc edx
        push edx
        ; Exact mapped bytes E8 68 86 22 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        inc ecx
        push ecx
        push 0
        push eax
        mov dword ptr [esi + 100h], eax
        ; Exact mapped bytes E8 6C 3D 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [esi + 104h]
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58748efc
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 53 3D 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 104h], 0
        mov edx, dword ptr [esi + 90h]
        inc edx
        push edx
        ; Exact mapped bytes E8 25 86 22 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        inc ecx
        push ecx
        push 0
        push eax
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes E8 29 3D 23 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 10h
        pop esi
        ret 4
    }
}
