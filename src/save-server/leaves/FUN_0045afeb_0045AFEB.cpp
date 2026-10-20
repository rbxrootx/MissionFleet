// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045AFEB .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_0045afeb_0045AFEB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0dh
        ; Exact mapped bytes 0F 87 A9 00 00 00: ja 0x45b0b0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 95 DE B0 45 00: jmp dword ptr [edx*4 + 0x45b0de]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xde
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x45b0d5
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 6B 43 00 00: call 0x45f390
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x45b0d5
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 5A 43 00 00: call 0x45f390
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x45b0d5
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes D9 41 08: fld dword ptr [ecx + 8]
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes D8 35 D0 A4 63 00: fdiv dword ptr [0x63a4d0]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 2B 01 00: call 0x46dba0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x45b0d5
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes DD 42 08: fld qword ptr [edx + 8]
        __asm _emit 0xdd
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes DC 35 C8 A4 63 00: fdiv qword ptr [0x63a4c8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 3E 2B 01 00: call 0x46dba0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 71: jmp 0x45b0d5
        __asm _emit 0xeb
        __asm _emit 0x71
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 1F 43 00 00: call 0x45f390
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 62: jmp 0x45b0d5
        __asm _emit 0xeb
        __asm _emit 0x62
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 11 43 00 00: call 0x45f390
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 54: jmp 0x45b0d5
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes DD 41 08: fld qword ptr [ecx + 8]
        __asm _emit 0xdd
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes DC 35 C8 A4 63 00: fdiv qword ptr [0x63a4c8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 0E 2B 01 00: call 0x46dba0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 41: jmp 0x45b0d5
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 F9 71 04 00: call 0x4a2299
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x45b0d5
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 E2 42 00 00: call 0x45f390
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x45b0d5
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x45b0cd
        __asm _emit 0x74
        __asm _emit 0x14
        push 413h
        push 678664h
        ; Exact mapped bytes E8 78 DC 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45b0cd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x45b0b0
        __asm _emit 0x75
        __asm _emit 0xdd
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
