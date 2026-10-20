// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E2133 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_004e2133_004E2133() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0c5h
        push 5c7a18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 0E 90 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e216c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0c6h
        push 5c7a18h
        ; Exact mapped bytes E8 99 28 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e216c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e2152
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x4e218c
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0c7h
        push 5c7a18h
        ; Exact mapped bytes E8 79 28 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e218c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e2172
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 13: jl 0x4e21b0
        __asm _emit 0x7c
        __asm _emit 0x13
        push -1
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 FA FF FF: call 0x4e1c17
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5D: jmp 0x4e220d
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4A FA FF FF: call 0x4e1c17
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 9E A6 FC FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 66 71 FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4e222f
        __asm _emit 0x7e
        __asm _emit 0x14
        push 0deh
        push 5c7a18h
        ; Exact mapped bytes E8 D6 27 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e222f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4e220d
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x4e225f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ecx + edx], al
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB D6: jmp 0x4e2235
        __asm _emit 0xeb
        __asm _emit 0xd6
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
