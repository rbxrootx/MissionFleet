// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2A3E .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_004d2a3e_004D2A3E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 E4 01 00: call 0x4f0ed4
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 5d0e48h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 20 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5F 22 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x22
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        push 5d0e5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 20 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6D 23 06 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x23
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [edx + 70h]
        push ecx
        push 5d0e6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 20 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 0D E1 02 00: call 0x500bb2
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        push edx
        push 5d0e84h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 20 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 35 E1 02 00: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 78h
        push eax
        push 5d0e9ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 20 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 1B E1 02 00: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 4cfec0h
        ; Exact mapped bytes 75 0F: jne 0x4d2af7
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5d0eb4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 20 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d2b04
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5d0eech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 20 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a4h], 4cfec0h
        ; Exact mapped bytes 75 0F: jne 0x4d2b22
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5d0f24h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 1F 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d2b2f
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5d0f5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 1F 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        push 5d0f94h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF 1F 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1f
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
