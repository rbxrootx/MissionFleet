// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CEE8 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_0042cee8_0042CEE8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x42cfde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 F4 FF FF: call 0x42c320
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x42cfde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 18 00 00: call 0x42e770
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x42cf5c
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 18 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c28h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 18 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x42cf4d
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 18 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 65 18 00 00: call 0x42e7b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x42cf5a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c2ch], 0
        ; Exact mapped bytes EB 4F: jmp 0x42cfab
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 18 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 18 00 00: call 0x42e770
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5C 18 00 00: call 0x42e7d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 18 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x42cf9a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 17 00 00: call 0x42e770
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 17 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 18 18 00 00: call 0x42e7b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x42cfab
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 17 00 00: call 0x42e770
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c2ch], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B 17 00 00: call 0x42e710
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 17 00 00: call 0x42e7b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 18 00 00: call 0x42e7d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bb0h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bb0h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 469h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes E8 45 E6 0F 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe6
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 ED 7D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7d
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
