// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0AB7 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_004a0ab7_004A0AB7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 F0 BE 0A 00: call 0x54c9b8
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5F C0 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x4a0ae2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 56 C2 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x4a0afd
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 54 C0 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 BE 0A 00: call 0x54c9e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 79: jmp 0x4a0b76
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A C0 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x4a0b17
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 21 C2 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x4a0b32
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1F C0 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 BE 0A 00: call 0x54c9e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 44: jmp 0x4a0b76
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 27 F7 FF FF: call 0x4a0268
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DC 02: fadd qword ptr [edx]
        __asm _emit 0xdc
        __asm _emit 0x02
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 54 F7 FF FF: call 0x4a02a5
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1A FB FF FF: call 0x4a0679
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1B 07 00 00: call 0x4a1282
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D BE 0A 00: call 0x54c9e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
