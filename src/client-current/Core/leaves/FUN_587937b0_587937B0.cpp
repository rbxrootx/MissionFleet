// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587937B0 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_587937b0_587937B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 B5 D2 FF: call 0x584bed90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8D 99 FF FF: call 0x5878d170
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587937f6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 3F 4A CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 83 12 01 00 00: jae 0x5879391c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F1 41 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x41
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 DA 71 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 0ah]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 74 02: je 0x58793834
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB B9: jmp 0x587937ed
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 15: je 0x58793855
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 39: je 0x5879387f
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x587938f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x58793917
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A6 41 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x41
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A7 44 FF FF: call 0x58787d20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x58793917
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7C 41 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x41
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 65 71 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 0bh]
        cmp edx, 0ch
        ; Exact mapped bytes 7E 27: jle 0x587938cb
        __asm _emit 0x7e
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 57 41 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x41
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 58 44 FF FF: call 0x58787d20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x587938f0
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 30 41 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x41
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 31 44 FF FF: call 0x58787d20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x58793917
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 09 41 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0A 44 FF FF: call 0x58787d20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D1 FE FF FF: jmp 0x587937ed
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
