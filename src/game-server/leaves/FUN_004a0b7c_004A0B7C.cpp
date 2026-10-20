// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0B7C .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_004a0b7c_004A0B7C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 2B BE 0A 00: call 0x54c9b8
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9A BF 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x4a0ba7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 91 C1 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc1
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x4a0bc2
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 8F BF 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 BE 0A 00: call 0x54c9e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 79: jmp 0x4a0c3b
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 BF 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x4a0bdc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5C C1 0A 00: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc1
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x4a0bf7
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 5A BF 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE BD 0A 00: call 0x54c9e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 44: jmp 0x4a0c3b
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 62 F6 FF FF: call 0x4a0268
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DC 22: fsub qword ptr [edx]
        __asm _emit 0xdc
        __asm _emit 0x22
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 8F F6 FF FF: call 0x4a02a5
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 55 FA FF FF: call 0x4a0679
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 56 06 00 00: call 0x4a1282
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 BD 0A 00: call 0x54c9e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbd
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
