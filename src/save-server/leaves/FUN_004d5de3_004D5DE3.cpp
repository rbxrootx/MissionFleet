// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5DE3 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004d5de3_004D5DE3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d5e0f
        __asm _emit 0x75
        __asm _emit 0x11
        push 56h
        push 672048h
        ; Exact mapped bytes E8 36 2F 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5e0f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d5ded
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4d5e2c
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 672048h
        ; Exact mapped bytes E8 19 2F 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5e2c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4d5e15
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 18: jne 0x4d5e53
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 19: jmp 0x4d5e6c
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
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
