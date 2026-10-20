// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525856 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_00525856_00525856() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 84 F0 FC FF: call 0x4f48f3
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x52587d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x525901
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 55: je 0x5258ff
        __asm _emit 0x74
        __asm _emit 0x55
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4F: jne 0x5258ff
        __asm _emit 0x75
        __asm _emit 0x4f
        push 0
        push 0
        push 87h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 2010h
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5258ff
        __asm _emit 0x74
        __asm _emit 0x33
        push -10h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0fh
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x5258f6
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 0C: je 0x5258f6
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 74 06: je 0x5258f6
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0bh
        ; Exact mapped bytes 75 09: jne 0x5258ff
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], edx
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
