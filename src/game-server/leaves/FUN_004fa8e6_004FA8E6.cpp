// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA8E6 .. +0x244 bytes.
extern "C" __declspec(naked) void FUN_004fa8e6_004FA8E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0F 80 04 00: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 50h]
        push edx
        push 5c6210h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C A2 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE A4 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        push 5c6224h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C3 A4 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 5c6238h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1B A4 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 5c624ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8D A4 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 5c625ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B1 A3 03 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 30h]
        push eax
        push 5c626ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CA A3 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 EE FF FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 1B: jne 0x4fa9c2
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 5c6284h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D9 A3 03 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c6294h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        push 5c62a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E1 A2 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 38h]
        push eax
        push 5c62b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C6 A2 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 5c62c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 A1 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AB A2 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        push 5c62cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B9 A3 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 44h]
        push eax
        push 5c62d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD A2 03 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        mov eax, dword ptr [ecx + 48h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 21 AF 03 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 5c62e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 23 61 00 00: call 0x500bb2
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c62ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 5c62f0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3D A3 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 54h]
        push edx
        push 5c6304h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 22 A3 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 5c6318h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B6 60 00 00: call 0x500bb2
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 5c632ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B A0 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B4 A1 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c633ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 9F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
