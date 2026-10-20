// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9760 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_587c9760_587C9760() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 75 04: jne 0x587c9774
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7E: jmp 0x587c97f2
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x587c978a
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x587c978a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 68: jmp 0x587c97f2
        __asm _emit 0xeb
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 5A: je 0x587c97ed
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 74 26: je 0x587c97ed
        __asm _emit 0x74
        __asm _emit 0x26
        push -1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 0
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
