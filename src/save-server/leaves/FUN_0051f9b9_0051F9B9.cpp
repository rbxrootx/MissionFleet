// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F9B9 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0051f9b9_0051F9B9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 11: je 0x51f9dd
        __asm _emit 0x74
        __asm _emit 0x11
        push 38h
        push 67bf50h
        ; Exact mapped bytes E8 68 93 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f9dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51f9c3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        ; Exact mapped bytes FF 15 C8 B9 68 00: call dword ptr [0x68b9c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 04: jne 0x51fa07
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0D: jmp 0x51fa14
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
