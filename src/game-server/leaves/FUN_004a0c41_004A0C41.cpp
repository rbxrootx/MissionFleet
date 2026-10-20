// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0C41 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_004a0c41_004A0C41() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 3D C0 0A 00: call 0x54cc8f
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D5 BE 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x4a0c6c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C8 BE 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x4a0c87
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 CE C0 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D C0 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 6A: jmp 0x4a0cf1
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A0 BE 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x4a0ca1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 93 BE 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x4a0cbc
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 99 C0 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 C0 0A 00: call 0x54ccdf
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 35: jmp 0x4a0cf1
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 9D F5 FF FF: call 0x4a0268
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 5D E8: fstp qword ptr [ebp - 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 8B F5 FF FF: call 0x4a0268
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DC 6D E8: fsubr qword ptr [ebp - 0x18]
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 BF 0A 00: call 0x54ccb7
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbf
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
