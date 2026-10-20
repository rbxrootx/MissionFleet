// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056573C .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_0056573c_0056573C() {
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
        ; Exact mapped bytes 74 0C: je 0x56575d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 4B FB FF: call 0x51a29a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x565762
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x56587d
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
        ; Exact mapped bytes 75 14: jne 0x565795
        __asm _emit 0x75
        __asm _emit 0x14
        push 205h
        push 5d0bb4h
        ; Exact mapped bytes E8 70 F2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x565795
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x565775
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
        ; Exact mapped bytes 75 2A: jne 0x5657e3
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 2D: je 0x5657f2
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
        ; Exact mapped bytes 74 0F: je 0x5657f2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x56587d
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 F5 F8 FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 0A: je 0x565818
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 50h], 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 12 4B FB FF: call 0x51a332
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 0C: je 0x565834
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 40: jne 0x56587d
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
        ; Exact mapped bytes 74 1A: je 0x56587d
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
