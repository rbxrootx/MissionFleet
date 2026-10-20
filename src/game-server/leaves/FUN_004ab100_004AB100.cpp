// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB100 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_004ab100_004AB100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x4ab145
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 B6 02 00 00: call 0x4ab3d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4ab13f
        __asm _emit 0x75
        __asm _emit 0x21
        push 58bc14h
        push 0
        push 47ch
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 FA 59 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab13f
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x4ab115
        __asm _emit 0x75
        __asm _emit 0xd0
        push 9
        ; Exact mapped bytes E8 A4 A0 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D8 06 00 00: call 0x4ab830
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4ab180
        __asm _emit 0x75
        __asm _emit 0x21
        push 58bd18h
        push 0
        push 485h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 B9 59 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab180
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x4ab14f
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 43: je 0x4ab1e2
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 3A: je 0x4ab1e2
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 2A: je 0x4ab1e2
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 21: je 0x4ab1e2
        __asm _emit 0x74
        __asm _emit 0x21
        push 58beb0h
        push 0
        push 48bh
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 57 59 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab1e2
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 A7: jne 0x4ab18f
        __asm _emit 0x75
        __asm _emit 0xa7
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 14h], 2
        ; Exact mapped bytes 75 0D: jne 0x4ab1fe
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 07: jne 0x4ab1fe
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 2
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 32: je 0x4ab239
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 21: je 0x4ab233
        __asm _emit 0x74
        __asm _emit 0x21
        push 58bdf8h
        push 0
        push 492h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 06 59 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab233
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CE: jne 0x4ab207
        __asm _emit 0x75
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 4], eax
        push 9
        ; Exact mapped bytes E8 47 A0 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
