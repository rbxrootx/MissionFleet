// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567781 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_00567781_00567781() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a8h
        mov dword ptr [ebp - 18h], eax
        push 2f8h
        push 5d0c78h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 BB 39 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x39
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], 0
        push 58e998h
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 B8 4F F3 FF: call 0x49c790
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5677e9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 8000ffffh
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x567890
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x5677fe
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 35: jmp 0x567833
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [eax + eax + 2]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A4 1F F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 80 4F F3 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3D: je 0x56788b
        __asm _emit 0x74
        __asm _emit 0x3d
        push 306h
        push 5d0c78h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 FF 38 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 21: je 0x56788b
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x567890
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 800401edh
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
