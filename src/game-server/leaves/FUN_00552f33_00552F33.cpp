// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552F33 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_00552f33_00552F33() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0b0h
        push 5cfa08h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 10 82 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x552f6d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b1h
        push 5cfa08h
        ; Exact mapped bytes E8 98 1A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552f6d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552f50
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 44h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x552f84
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x553039
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 44h], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx + 42h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x552fcb
        __asm _emit 0x74
        __asm _emit 0x18
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 94 29 5E 00: call dword ptr [0x5e2994]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 42h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 4E 00 00: call 0x557e80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 5A: je 0x553032
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 4E 00 00: call 0x557e80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x552ff5
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 4E 00 00: call 0x557e80
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 0E: jne 0x553010
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 1
        ; Exact mapped bytes 74 19: je 0x553032
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        push 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 44h], 0
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
