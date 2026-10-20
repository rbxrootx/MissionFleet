// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A53B .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_0056a53b_0056A53B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 0F 85 26 01 00 00: jne 0x56a67d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0b0h], 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b8h]
        and al, 0f3h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0b8h], eax
        push 2eh
        push 67d38ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0bch]
        push eax
        ; Exact mapped bytes E8 D2 FC F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0bch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0bch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x56a670
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F E2 F6 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 20h]
        cmp edx, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x56a670
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 32h
        push 67d38ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 84 FC F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        push 63d0d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 FB F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56a5fe
        __asm _emit 0x75
        __asm _emit 0x11
        push 33h
        push 67d38ch
        ; Exact mapped bytes E8 47 E7 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a5fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x56a5dc
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0bch]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes 75 22: jne 0x56a63a
        __asm _emit 0x75
        __asm _emit 0x22
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0bch]
        mov ecx, dword ptr [eax + 0d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 34 01 00 00: call dword ptr [eax + 0x134]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0bch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0e0h]
        ; Exact mapped bytes 75 22: jne 0x56a670
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0bch]
        mov eax, dword ptr [edx + 0d8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 34 01 00 00: call dword ptr [edx + 0x134]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0b0h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
