// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489F3A .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_00489f3a_00489F3A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 E8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x48a039
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 CD FA FF: call 0x436ce0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcd
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x48a02b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 79 FB FF: call 0x4418e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub edx, eax
        mov eax, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [eax + 0c74h]
        ; Exact mapped bytes 76 39: jbe 0x489fe2
        __asm _emit 0x76
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0c7ch], 0
        ; Exact mapped bytes 74 0E: je 0x489fc3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 6D 01 00 00: call 0x48a130
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 4cch
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0b0h
        ; Exact mapped bytes E8 38 99 F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD D0 FF FF: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 49: jmp 0x48a02b
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 40: je 0x48a02b
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 ED 78 FB FF: call 0x4418e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0c74h]
        cdq
        sub eax, edx
        sar eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 76 21: jbe 0x48a02b
        __asm _emit 0x76
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8001000fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 07 D2 FF FF: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x489f77
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 9C E7 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
