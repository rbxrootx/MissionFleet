// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057606D .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_0057606d_0057606D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x576153
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 98 FD FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 74: je 0x576128
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5760d1
        __asm _emit 0x75
        __asm _emit 0x14
        push 7a0h
        push 67cd14h
        ; Exact mapped bytes E8 74 2C FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5760d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5760b4
        __asm _emit 0x75
        __asm _emit 0xdd
        push 640ca0h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 0E 48 FD FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x576105
        __asm _emit 0x75
        __asm _emit 0x14
        push 7a3h
        push 67cd14h
        ; Exact mapped bytes E8 40 2C FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x576105
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5760eb
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x57609f
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x57614d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x576128
        __asm _emit 0x75
        __asm _emit 0xd5
        push 7ach
        push 67cd14h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FA 40 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x40
        __asm _emit 0xf6
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
