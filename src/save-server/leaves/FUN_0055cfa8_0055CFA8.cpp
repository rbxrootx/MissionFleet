// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CFA8 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_0055cfa8_0055CFA8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x55cfce
        __asm _emit 0x75
        __asm _emit 0x14
        push 80h
        push 67b3b8h
        ; Exact mapped bytes E8 77 BD FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cfce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x55cfb1
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x55cff4
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 0ch
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 75 29 FF FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x55d044
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 98 FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x55d02e
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 05: jne 0x55d02e
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 18: jmp 0x55d046
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 0B: je 0x55d042
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 75 05: jne 0x55d042
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x55d046
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B0: jmp 0x55cff4
        __asm _emit 0xeb
        __asm _emit 0xb0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
