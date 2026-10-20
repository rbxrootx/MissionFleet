// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BBAD0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_587bbad0_587BBAD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x587bbaeb
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 02: jne 0x587bbaeb
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4E: jmp 0x587bbb39
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 1E: je 0x587bbb12
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 1E: je 0x587bbb39
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
