// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461097 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_00461097_00461097() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 7B: je 0x461125
        __asm _emit 0x74
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 72 11: jb 0x4610c9
        __asm _emit 0x72
        __asm _emit 0x11
        push 22h
        push 67c9d4h
        ; Exact mapped bytes E8 7C 7C 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4610c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4610aa
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 24: je 0x4610f9
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [edx + eax*8 + 4]
        or al, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [ecx + edx*8 + 4], eax
        ; Exact mapped bytes EB 22: jmp 0x46111b
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [edx + eax*8 + 4]
        and al, 0fdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [ecx + edx*8 + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 1
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
