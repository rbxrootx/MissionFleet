// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9F99 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004f9f99_004F9F99() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 200h
        ; Exact mapped bytes 74 0C: je 0x4f9fba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0a0h
        ; Exact mapped bytes 75 61: jne 0x4fa01b
        __asm _emit 0x75
        __asm _emit 0x61
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [edx + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 60h
        ; Exact mapped bytes E8 9F BA 03 00: call 0x535a6f
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4f9fe6
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 75 04: jne 0x4f9fe6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5D: jmp 0x4fa043
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [edx + 14h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 91 B9 03 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb9
        __asm _emit 0x03
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
        ; Exact mapped bytes EB 28: jmp 0x4fa043
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0fh
        ; Exact mapped bytes 74 15: je 0x4fa039
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 118h
        ; Exact mapped bytes 74 09: je 0x4fa039
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x4fa040
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
