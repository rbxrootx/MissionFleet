// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868A00 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_58868a00() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        mov ebx, ecx
        test esi, esi
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x58868b0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        movzx ecx, word ptr [eax + 4]
        movzx edx, word ptr [eax + 2]
        movzx eax, word ptr [eax]
        push ebp
        movzx ebp, word ptr [esi + 5ch]
        push edi
        push ecx
        push edx
        push eax
        mov ecx, esi
        xor ebp, 0aah
        ; Exact mapped bytes E8 0B 41 F1 FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0db4h]
        mov ecx, dword ptr [edx + 0b4h]
        push 1
        ; Exact mapped bytes E8 12 30 00 00: call 0x5886ba60
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 0d78h]
        push eax
        ; Exact mapped bytes E8 20 6B F7 FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6b
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, 50h
        lea edi, [ebx + 0cch]
        mov ecx, 60h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        ; Exact mapped bytes E8 99 F6 FF FF: call 0x58868110
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        movzx edx, word ptr [ecx + 4]
        pop edi
        cmp ebp, edx
        pop ebp
        ; Exact mapped bytes 0F 8D 83 00 00 00: jge 0x58868b0c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 34h
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 17: jle 0x58868ab2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x58868ab2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes EB 02: jmp 0x58868ab4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 D0 EE 09 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xee
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 17: jle 0x58868ae4
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x58868ae4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes EB 02: jmp 0x58868ae6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0
        push 0
        push 0
        push 0c8h
        ; Exact mapped bytes E8 F1 2F F0 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A 1A F0 FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1a
        __asm _emit 0xf0
        __asm _emit 0xff
        inc dword ptr [ebx + 2cch]
        ; Exact mapped bytes 66 83 4B 24 02: or word ptr [ebx + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4b
        __asm _emit 0x24
        __asm _emit 0x02
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
