// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055434F .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_0055434f_0055434F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 48eh
        push 67c1e0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F2 5E F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x55438b
        __asm _emit 0x75
        __asm _emit 0x14
        push 48fh
        push 67c1e0h
        ; Exact mapped bytes E8 BA 49 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55438b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55436e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 43h]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x5543a2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x554485
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 640ca0h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 43 65 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5543d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 496h
        push 67c1e0h
        ; Exact mapped bytes E8 75 49 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5543d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5543b6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 31: je 0x554410
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2B: jne 0x554410
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 1C: je 0x55440a
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 48h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 48h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5543e5
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 48h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x55443b
        __asm _emit 0x74
        __asm _emit 0x14
        push 49dh
        push 67c1e0h
        ; Exact mapped bytes E8 0A 49 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55443b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x554410
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 28: je 0x55447e
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 34h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 34h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ecx + 34h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 48h], 0
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 43h], 0
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
