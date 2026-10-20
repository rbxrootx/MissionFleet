// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055B55B .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_0055b55b_0055B55B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 2a9h
        push 5cebe0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E8 FB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x55b5a0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x55b599
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 30: jmp 0x55b5c9
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, 1
        ; Exact mapped bytes EB 29: jmp 0x55b5c9
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55b5c1
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b2h
        push 5cebe0h
        ; Exact mapped bytes E8 44 94 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55b5c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x55b5a0
        __asm _emit 0x75
        __asm _emit 0xd9
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
