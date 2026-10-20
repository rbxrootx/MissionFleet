// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF3B5 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_004cf3b5_004CF3B5() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4cf3d2
        __asm _emit 0x75
        __asm _emit 0x11
        push 65h
        push 671a64h
        ; Exact mapped bytes E8 73 99 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf3d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4cf3bb
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x4cf3ef
        __asm _emit 0x75
        __asm _emit 0x11
        push 66h
        push 671a64h
        ; Exact mapped bytes E8 56 99 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf3ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4cf3d8
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E C7 05 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 6E 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
