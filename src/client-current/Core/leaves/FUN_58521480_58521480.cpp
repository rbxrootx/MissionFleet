// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521480 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_58521480_58521480() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x585214a0
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        or eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 09: jne 0x585214a0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 4
        ; Exact mapped bytes EB 07: jmp 0x585214a7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 1F: je 0x585214d5
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4ch]
        push ecx
        ; Exact mapped bytes E8 5C 97 33 00: call 0x5885ac2a
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x97
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x585214d9
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x585214ed
        __asm _emit 0xeb
        __asm _emit 0x14
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 EE FF FF: call 0x58520310
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
