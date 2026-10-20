// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C27E0 .. +0x30B bytes.
extern "C" __declspec(naked) void ___free_lc_time_004C27E0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4c27ee
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FB 02 00 00: jmp 0x4c2ae9
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 C4 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 B3 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 A2 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 91 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        ; Exact mapped bytes E8 80 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        ; Exact mapped bytes E8 6F 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 5F 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 4E 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes E8 3D 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        ; Exact mapped bytes E8 2C 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes E8 1B 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 30h]
        push edx
        ; Exact mapped bytes E8 0A 84 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes E8 F9 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 E8 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 38h]
        push edx
        ; Exact mapped bytes E8 D7 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        ; Exact mapped bytes E8 C6 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40h]
        push eax
        ; Exact mapped bytes E8 B5 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 44h]
        push edx
        ; Exact mapped bytes E8 A4 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 48h]
        push ecx
        ; Exact mapped bytes E8 93 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4ch]
        push eax
        ; Exact mapped bytes E8 82 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 50h]
        push edx
        ; Exact mapped bytes E8 71 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 60 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 58h]
        push eax
        ; Exact mapped bytes E8 4F 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        ; Exact mapped bytes E8 3E 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        ; Exact mapped bytes E8 2D 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        push eax
        ; Exact mapped bytes E8 1C 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 68h]
        push edx
        ; Exact mapped bytes E8 0B 83 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        ; Exact mapped bytes E8 FA 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 70h]
        push eax
        ; Exact mapped bytes E8 E9 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 74h]
        push edx
        ; Exact mapped bytes E8 D8 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        ; Exact mapped bytes E8 C7 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 7ch]
        push eax
        ; Exact mapped bytes E8 B6 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 80h]
        push edx
        ; Exact mapped bytes E8 A2 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        ; Exact mapped bytes E8 8E 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 88h]
        push eax
        ; Exact mapped bytes E8 7A 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        ; Exact mapped bytes E8 66 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        ; Exact mapped bytes E8 52 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 94h]
        push eax
        ; Exact mapped bytes E8 3E 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes E8 2A 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes E8 16 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        ; Exact mapped bytes E8 02 82 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        ; Exact mapped bytes E8 EE 81 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0a8h]
        push ecx
        ; Exact mapped bytes E8 DA 81 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        pop ebp
        ret
    }
}
