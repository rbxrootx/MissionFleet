// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B63C .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_0056b63c_0056B63C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 50h], 1
        ; Exact mapped bytes 74 0C: je 0x56b65d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 51 7E F9 FF: call 0x5034aa
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x7e
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x56b662
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x56b77d
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x56b695
        __asm _emit 0x75
        __asm _emit 0x14
        push 205h
        push 67d38ch
        ; Exact mapped bytes E8 B0 D6 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b695
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56b675
        __asm _emit 0x75
        __asm _emit 0xda
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d4h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d4h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x56b6e3
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 2D: je 0x56b6f2
        __asm _emit 0x74
        __asm _emit 0x2d
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d8h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x56b6f2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x56b77d
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 22 76 F6 FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 0A: je 0x56b718
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 50h], 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 22 7E F9 FF: call 0x503542
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x7e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 0C: je 0x56b734
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 40: jne 0x56b77d
        __asm _emit 0x75
        __asm _emit 0x40
        push 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d4h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d4h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0d8h], 0
        ; Exact mapped bytes 74 1A: je 0x56b77d
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d8h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
