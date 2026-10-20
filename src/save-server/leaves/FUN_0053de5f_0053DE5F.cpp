// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053DE5F .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_0053de5f_0053DE5F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 38 6A 68 00 00: cmp dword ptr [0x686a38], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x53de94
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 0F: jne 0x53de8a
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 38 6A 68 00: mov edx, dword ptr [0x686a38]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + 84h], edx
        ; Exact mapped bytes C7 05 38 6A 68 00 00 00 00 00: mov dword ptr [0x686a38], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 1B: je 0x53debb
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes EB 0A: jmp 0x53dec5
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 DC 22 67 00 00 00 00 00: mov dword ptr [0x6722dc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
