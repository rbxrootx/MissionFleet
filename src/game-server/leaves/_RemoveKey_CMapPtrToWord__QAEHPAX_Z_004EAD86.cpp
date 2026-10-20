// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAD86 .. +0x99 bytes.
extern "C" __declspec(naked) void _RemoveKey_CMapPtrToWord__QAEHPAX_Z_004EAD86() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0dch
        push 5c7d14h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 BE 03 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 04: jne 0x4eadaf
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6A: jmp 0x4eae19
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 25 03 00 00: call 0x4eb0e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        div dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [ecx + edx*4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 08: jmp 0x4eade1
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 30: je 0x4eae17
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 1D: jne 0x4eae0f
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CA FD FF FF: call 0x4eabd2
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 0A: jmp 0x4eae19
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB C2: jmp 0x4eadd9
        __asm _emit 0xeb
        __asm _emit 0xc2
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
