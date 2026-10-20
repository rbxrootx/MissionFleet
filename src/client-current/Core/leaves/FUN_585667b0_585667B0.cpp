// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585667B0 .. +0x1DE bytes.
extern "C" __declspec(naked) void FUN_585667b0_585667B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 01 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 07: jne 0x585667dd
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 1A: je 0x58566803
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 57 11 00: call 0x5867bfc0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x57
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5856680a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x585668b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 67: je 0x58566887
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 31ch
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 72 FE FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 DC FF FF: call 0x58564550
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 31ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 31ch
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 75 FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x585668ad
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 DC FF FF: call 0x58564550
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 31ch], eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x5856694f
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x5856694f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 67: je 0x58566929
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 3d0h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 71 FE FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 DC FF FF: call 0x58564550
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3d0h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 3d0h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 74 FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 26: jmp 0x5856694f
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F DC FF FF: call 0x58564550
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3d0h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 35: je 0x5856698a
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        xor ecx, 55555555h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 31ch]
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 138h]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 83 11 00: call 0x5867ece0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
