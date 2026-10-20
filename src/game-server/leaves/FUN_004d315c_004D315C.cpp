// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D315C .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_004d315c_004D315C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 DD 01 00: call 0x4f0ed4
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5d0f98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 19 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E 1B 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 24: je 0x4d31bd
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 4C DC 02 00: call 0x500df4
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 5d0fach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 19 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE 1B 06 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        push edx
        push 5d0fbch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 19 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 19 1C 06 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 18: mov dx, word ptr [ecx + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x18
        push edx
        push 5d0fcch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 19 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 98 1A 06 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 1A: mov dx, word ptr [ecx + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1a
        push edx
        push 5d0fe0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 19 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 79 1A 06 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 1C: mov dx, word ptr [ecx + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1c
        push edx
        push 5d0ff4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A 1A 06 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 1E: mov dx, word ptr [ecx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x1e
        push edx
        push 5d1008h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3B 1A 06 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 66 8B 51 20: mov dx, word ptr [ecx + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x20
        push edx
        push 5d101ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1C 1A 06 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 2eh], 4cfec0h
        ; Exact mapped bytes 75 0F: jne 0x4d3294
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5d1030h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d32a1
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5d1068h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 2ah], 4cfec0h
        ; Exact mapped bytes 75 0F: jne 0x4d32bf
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5d10a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d32cc
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5d10d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        push 5d1110h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 18 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
