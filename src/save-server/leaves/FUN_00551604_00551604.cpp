// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551604 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_00551604_00551604() {
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
        push 67c1e0h
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 27 8C F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8c
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 CC 51 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x5516f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5516f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AA 51 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 5eh
        push 67c1e0h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 DD 8B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 6D: je 0x5516f9
        __asm _emit 0x74
        __asm _emit 0x6d
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B8 04 00 00: call 0x551b50
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5516ad
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x5516e3
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D4 48 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 10 BF EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xbf
        __asm _emit 0xef
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
        ; Exact mapped bytes 74 20: je 0x55171f
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x551717
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
        ; Exact mapped bytes E8 E8 92 FF FF: call 0x54aa07
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
