// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC850 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_584ac850_584AC850() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 75 0C: jne 0x584ac86c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 1
        ; Exact mapped bytes EB 28: jmp 0x584ac894
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 7E 0C: jle 0x584ac881
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], 2
        ; Exact mapped bytes EB 13: jmp 0x584ac894
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 7D 0A: jge 0x584ac894
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], 4
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 9ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        imul eax, dword ptr [ecx*4 + 5894c930h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 9ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        imul eax, dword ptr [ecx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 0b0h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        sub eax, dword ptr [edx + 0b4h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        cdq
        ; Exact mapped bytes F7 3D 74 77 94 58: idiv dword ptr [0x58947774]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 60h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 80h]
        cdq
        ; Exact mapped bytes F7 3D 78 77 94 58: idiv dword ptr [0x58947778]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 64h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
