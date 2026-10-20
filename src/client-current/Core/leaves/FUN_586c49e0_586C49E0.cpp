// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C49E0 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_586c49e0_586C49E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a4h
        ; Exact mapped bytes E8 F9 36 DC FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x36
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c4a0a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 24: jae 0x586c4a36
        __asm _emit 0x73
        __asm _emit 0x24
        imul edx, dword ptr [ebp - 8], 22h
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 0a4h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D 43 00 00: call 0x586c8d60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CB: jmp 0x586c4a01
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 4]
        add ecx, 98h
        ; Exact mapped bytes E8 3C 43 00 00: call 0x586c8d80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x586c4acf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c4a5e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a4h
        ; Exact mapped bytes E8 14 43 00 00: call 0x586c8d80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 2F: jae 0x586c4aa0
        __asm _emit 0x73
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        add eax, 98h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a4h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3C 82 FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C3 42 00 00: call 0x586c8d60
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B5: jmp 0x586c4a55
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 6ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 3A 00 00: call 0x586c8580
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 0F 00 00: call 0x586c5a20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 09 00 00: call 0x586c5470
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0F: jmp 0x586c4ade
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        add ecx, 98h
        ; Exact mapped bytes E8 13 36 DC FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x36
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
