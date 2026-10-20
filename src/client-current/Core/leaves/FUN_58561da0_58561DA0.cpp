// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58561DA0 .. +0x204 bytes.
extern "C" __declspec(naked) void FUN_58561da0_58561DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a94f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 A6 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0F 3A F3 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 40h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 FA A5 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 2B F2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, word ptr [eax + 7eh]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 A5 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 0A 00 00: call 0x585628a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov dword ptr [edx + 48h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 7D 09: jge 0x58561e80
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58561e89
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 48h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C A5 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 02 00 00: call 0x58562110
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 82 A5 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 2B F2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 0d6h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 5D A5 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 09 00 00: call 0x58562880
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 64h
        sub edx, dword ptr [eax]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 34h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 19h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 0B 00 00: call 0x58562a90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 E6 A4 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa4
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 01 00 00: call 0x58562130
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, eax, 64h
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 44h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 A4 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa4
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 31 F4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x31
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 C2 1F 00: call 0x5875e1b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x1f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 09 00 00: call 0x585628c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
