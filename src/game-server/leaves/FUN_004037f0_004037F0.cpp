// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004037F0 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_004037f0_004037F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        push edi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes 75 09: jne 0x403830
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 12: jmp 0x403842
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes 74 76: je 0x4038c9
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 4]
        imul ecx, dword ptr [eax + edx*4]
        add ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 204h
        mov edx, dword ptr [ebp - 4]
        mov edi, dword ptr [edx + 18h]
        add edi, ecx
        mov ecx, 81h
        lea esi, [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes 75 09: jne 0x4038a1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 12: jmp 0x4038b3
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + eax*4], ecx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4038cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 02: ret 0x208
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x02
    }
}
