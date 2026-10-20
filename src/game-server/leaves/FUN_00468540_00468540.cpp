// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468540 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_00468540_00468540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        push edi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 75 09: jne 0x468583
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 0C: jmp 0x46858f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 74 31: je 0x4685d4
        __asm _emit 0x74
        __asm _emit 0x31
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 1b0h
        mov eax, dword ptr [ebp - 8]
        mov edi, dword ptr [eax + 14h]
        add edi, edx
        mov ecx, 6ch
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], edx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4685d6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
