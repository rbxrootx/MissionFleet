// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048DBD1 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_0048dbd1_0048DBD1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x48dbf7
        __asm _emit 0x75
        __asm _emit 0x14
        push 9bh
        push 5c636ch
        ; Exact mapped bytes E8 0E 6E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48dbf7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x48dbdd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 6C 00 00 00: call 0x48dc72
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor edx, edx
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        lea eax, [edx*4 + 4]
        push eax
        ; Exact mapped bytes E8 F5 C5 01 00: call 0x4aa210
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 04: jne 0x48dc31
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 38: jmp 0x48dc69
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x48dc60
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x48dc66
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
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
