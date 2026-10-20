// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519AB6 .. +0x1F5 bytes.
extern "C" __declspec(naked) void FUN_00519ab6_00519AB6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 74 D8 FF FF: call 0x51733f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push 5c8cc0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 B0 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 B1 01 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        push 5c8cd4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E B0 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C7 B1 01 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 5c8cech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 B0 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AC B1 01 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 90h]
        mov eax, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 5c8d04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 AF 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 21 70 FE FF: call 0x500b70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        push 5c8d18h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 AF 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F1 6F FE FF: call 0x500b70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 83 01 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 09 01 00 00: jle 0x519c98
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 4], edx
        push 0
        push 0
        push 418h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x519bc1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 8D CB 00 00 00: jge 0x519c98
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E2 DA FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        push 5c8d3ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 5c8d28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 AF 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6D B1 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1A AF 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        push edx
        push 5c8d44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 AF 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4E B1 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 17h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffh
        shl ecx, 10h
        or eax, ecx
        push eax
        push 5c8d50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE AE 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BB B0 01 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 17h]
        and edx, 0ffh
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x519c6e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 20h]
        push eax
        push 5c8d5ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 AE 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FB B0 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x519c86
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 5c8d7ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C AE 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E1 B0 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c8da0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 AE 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 20 FF FF FF: jmp 0x519bb8
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5c8da4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 AE 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
