// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E114 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_0051e114_0051E114() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 0A: jne 0x51e131
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 16 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 79: jmp 0x51e1aa
        __asm _emit 0xeb
        __asm _emit 0x79
        lea ecx, [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A DB 00 00: call 0x52bc57
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F1 E3 00 00: call 0x52c533
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 20: je 0x51e167
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], 0
        push 0
        push 0
        push 85h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 D4 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 43: jmp 0x51e1aa
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 FA FF FF: call 0x51dc0b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        cmp eax, 3
        sete dl
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes 74 20: je 0x51e1aa
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        cmp dword ptr [ecx + 0c0h], 0
        sete dl
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c0h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 00 00 00: call 0x51e21d
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
