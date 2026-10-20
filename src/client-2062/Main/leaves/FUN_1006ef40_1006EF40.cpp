// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006EF40 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_1006ef40_1006EF40() {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 38ch], 40000000h
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x1006f050
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        xor esi, esi
        cmp dword ptr [ebx + 0e74h], esi
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x1006f050
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov dword ptr [esp + 10h], esi
        lea ebp, [edi + 88h]
        cmp dword ptr [ebp], 0
        ; Exact mapped bytes 74 33: je 0x1006efac
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + esi + 0f7ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x1006efac
        __asm _emit 0x74
        __asm _emit 0x20
        mov ebx, dword ptr [eax + 0ch]
        mov ecx, ebx
        ; Exact mapped bytes E8 2A A9 F9 FF: call 0x100098c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x1006efa8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [ebx + 4c8h]
        cmp eax, edx
        ; Exact mapped bytes 74 14: je 0x1006efbc
        __asm _emit 0x74
        __asm _emit 0x14
        mov ebx, dword ptr [esp + 18h]
        add esi, 10h
        add ebp, 4
        cmp esi, 80h
        ; Exact mapped bytes 7C B9: jl 0x1006ef73
        __asm _emit 0x7c
        __asm _emit 0xb9
        ; Exact mapped bytes EB 0C: jmp 0x1006efc8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ebx, dword ptr [esp + 18h]
        mov dword ptr [esp + 10h], 1
        mov eax, dword ptr [edi + 104e0h]
        mov edx, dword ptr [esp + 10h]
        push edx
        mov ecx, dword ptr [eax + 54h]
        mov eax, dword ptr [eax + 50h]
        push ecx
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 6E C5 07 00: call 0x100eb550
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        cmp eax, 40000000h
        pop ebp
        ; Exact mapped bytes 75 45: jne 0x1006f02f
        __asm _emit 0x75
        __asm _emit 0x45
        xor eax, eax
        mov dword ptr [edi + 38ch], 0
        mov dword ptr [edi + 10510h], ebx
        ; Exact mapped bytes 66 8B 83 2C 03 00 00: mov ax, word ptr [ebx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 104b0h], eax
        mov eax, dword ptr [ebx + 0e9ch]
        neg eax
        sbb eax, eax
        add eax, 2
        mov dword ptr [edi + 104a8h], eax
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 D8 35 07 00: call 0x100e2600
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi + 10510h], 0
        mov dword ptr [edi + 104b0h], 0ffffffffh
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 B0 35 07 00: call 0x100e2600
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
