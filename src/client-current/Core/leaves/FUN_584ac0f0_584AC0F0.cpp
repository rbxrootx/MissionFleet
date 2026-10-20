// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC0F0 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_584ac0f0_584AC0F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 BF 01 00 00: je 0x584ac2ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 40: je 0x584ac163
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 27: je 0x584ac156
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 EE 4E 38 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4e
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CD 4E 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4e
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes E8 6B 0C 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0c
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 100h], 0
        ; Exact mapped bytes 74 40: je 0x584ac1f4
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 100h], 0
        ; Exact mapped bytes 74 27: je 0x584ac1e7
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 5D 4E 38 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4e
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 100h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 100h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 3C 4E 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x4e
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 100h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        push eax
        ; Exact mapped bytes E8 DA 0B 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x0b
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 104h], 0
        ; Exact mapped bytes 74 40: je 0x584ac285
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 104h], 0
        ; Exact mapped bytes 74 27: je 0x584ac278
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 CC 4D 38 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4d
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AB 4D 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x4d
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 104h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        push eax
        ; Exact mapped bytes E8 49 0B 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0b
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
