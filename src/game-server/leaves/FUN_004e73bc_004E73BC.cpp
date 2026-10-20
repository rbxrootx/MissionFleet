// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E73BC .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004e73bc_004E73BC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0a8h
        push 5c8f3ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 85 3D 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e73f5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aah
        push 5c8f3ch
        ; Exact mapped bytes E8 10 D6 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e73f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e73db
        __asm _emit 0x75
        __asm _emit 0xe0
        push 585c90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 3C 01 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7420
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abh
        push 5c8f3ch
        ; Exact mapped bytes E8 E5 D5 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7420
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e73fb
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ach
        push 5c8f3ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 27 3D 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E B8 04 00: call 0x532c9f
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4e7463
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A B9 04 00: call 0x532d60
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 FE FF FF: call 0x4e72e7
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E1: jmp 0x4e7444
        __asm _emit 0xeb
        __asm _emit 0xe1
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
