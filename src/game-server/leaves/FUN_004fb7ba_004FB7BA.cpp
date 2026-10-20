// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB7BA .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004fb7ba_004FB7BA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 11: je 0x4fb7e0
        __asm _emit 0x74
        __asm _emit 0x11
        push 62h
        push 5c76b8h
        ; Exact mapped bytes E8 25 92 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb7e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fb7c6
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4fb7f0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 45: jmp 0x4fb835
        __asm _emit 0xeb
        __asm _emit 0x45
        push 1
        ; Exact mapped bytes E8 99 FD FF FF: call 0x4fb590
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x4fb811
        __asm _emit 0x75
        __asm _emit 0x11
        push 66h
        push 5c76b8h
        ; Exact mapped bytes E8 F4 91 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fb811
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x4fb7fa
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 1A 00 00: call 0x4fd24a
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
