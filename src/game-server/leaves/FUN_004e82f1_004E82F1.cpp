// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E82F1 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_004e82f1_004E82F1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 0d5h
        push 5cfeb0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 50 2E 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e832d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d6h
        push 5cfeb0h
        ; Exact mapped bytes E8 D8 C6 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e832d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e8310
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 13 7B FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e835b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d7h
        push 5cfeb0h
        ; Exact mapped bytes E8 AA C6 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e835b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4e8333
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 0E: je 0x4e8396
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 0A: jmp 0x4e83a0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E4 FB FF FF: call 0x4e7f90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
