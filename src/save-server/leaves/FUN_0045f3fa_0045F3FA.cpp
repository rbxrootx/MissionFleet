// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F3FA .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_0045f3fa_0045F3FA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        mov dword ptr [ebp - 124h], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 18h], 0
        push 0dh
        ; Exact mapped bytes E8 4E 39 0E 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 80029c4ah
        mov eax, dword ptr [ebp - 124h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 04 00 00: call 0x45f926
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x45f472
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 16 01 00 00: jmp 0x45f588
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 03 00 00: call 0x45f7f5
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x45f549
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        test eax, eax
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x45f539
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 C1 25 0D 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x25
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 120h]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 0C: jne 0x45f4de
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB 3F: jmp 0x45f51d
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A3 6A 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], esp
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        ; Exact mapped bytes E8 D9 E0 FE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        ; Exact mapped bytes FF 15 10 BB 68 00: call dword ptr [0x68bb10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x45f539
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 03 00 00: call 0x45f86e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 39: je 0x45f588
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 04 00 00: call 0x45f9ee
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dh
        ; Exact mapped bytes E8 1D 39 0E 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        lea esp, [ebp - 12ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
