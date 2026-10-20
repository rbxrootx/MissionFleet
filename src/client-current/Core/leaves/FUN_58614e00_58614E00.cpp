// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58614E00 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_58614e00_58614E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58614e9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 8], eax
        push 8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 FC E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 10 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 14h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5C 07 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 18h], ecx
        push 7
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B0 FC E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B1 10 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 24h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1B 07 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x58614f1e
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 28h], edx
        push 2ch
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 69 FC E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6A 10 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 34h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D4 06 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 38h], eax
        push 2bh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 28 FC E6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 29 10 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 44h], eax
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 93 06 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
