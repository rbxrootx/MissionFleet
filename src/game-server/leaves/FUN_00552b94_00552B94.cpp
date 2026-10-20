// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552B94 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_00552b94_00552B94() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        push 55h
        push 5cfa08h
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 97 85 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E2 51 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x552c89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x552c89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C0 51 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 5eh
        push 5cfa08h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 4D 85 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 6D: je 0x552c89
        __asm _emit 0x74
        __asm _emit 0x6d
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B8 04 00 00: call 0x5530e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x552c3d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x552c73
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 64 6B F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 50 E3 F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 20: je 0x552caf
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x552ca7
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E8 92 FF FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        lea esp, [ebp - 3ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
