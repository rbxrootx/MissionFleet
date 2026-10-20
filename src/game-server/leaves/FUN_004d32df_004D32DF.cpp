// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D32DF .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_004d32df_004D32DF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4d32f2
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x4d3381
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x4d3314
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x4d331b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4d332b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 56: jmp 0x4d3381
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        add eax, edx
        push eax
        ; Exact mapped bytes FF 15 08 21 5E 00: call dword ptr [0x5e2108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x4d337e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
