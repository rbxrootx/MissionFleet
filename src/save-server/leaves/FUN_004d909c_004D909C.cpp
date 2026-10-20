// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D909C .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004d909c_004D909C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 200h
        ; Exact mapped bytes 74 0C: je 0x4d90bd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0a0h
        ; Exact mapped bytes 75 61: jne 0x4d911e
        __asm _emit 0x75
        __asm _emit 0x61
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [edx + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 60h
        ; Exact mapped bytes E8 8F 8E 05 00: call 0x531f62
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4d90e9
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 75 04: jne 0x4d90e9
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5D: jmp 0x4d9146
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [edx + 14h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 81 8D 05 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 68h], ecx
        mov eax, 1
        ; Exact mapped bytes EB 28: jmp 0x4d9146
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0fh
        ; Exact mapped bytes 74 15: je 0x4d913c
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 118h
        ; Exact mapped bytes 74 09: je 0x4d913c
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x4d9143
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
