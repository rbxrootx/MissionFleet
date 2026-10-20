// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D5A0 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_5876d5a0_5876D5A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 38: je 0x5876d5e7
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 83 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 74 23: je 0x5876d5e2
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 10h], edx
        push 0abd9f8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FF 8A D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x5876d683
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5eech], 40000h
        ; Exact mapped bytes 75 40: jne 0x5876d636
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ee8h], 0
        ; Exact mapped bytes 74 09: je 0x5876d620
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 32ff32h
        ; Exact mapped bytes EB 07: jmp 0x5876d627
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffh
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AD 8A D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4D: jmp 0x5876d683
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5eech], 50000h
        ; Exact mapped bytes 75 3E: jne 0x5876d683
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10c0h], 0
        ; Exact mapped bytes 74 09: je 0x5876d66f
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ff9b00h
        ; Exact mapped bytes EB 07: jmp 0x5876d676
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5E 8A D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5f18h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
