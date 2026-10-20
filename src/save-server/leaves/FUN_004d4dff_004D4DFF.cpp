// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4DFF .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004d4dff_004D4DFF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4e2e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d58h
        push 671a64h
        ; Exact mapped bytes E8 17 3F 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4e2e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d4e09
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 100h
        ; Exact mapped bytes 72 0C: jb 0x4d4e4c
        __asm _emit 0x72
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 108h
        ; Exact mapped bytes 76 1C: jbe 0x4d4e68
        __asm _emit 0x76
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 200h
        ; Exact mapped bytes 72 0C: jb 0x4d4e64
        __asm _emit 0x72
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 209h
        ; Exact mapped bytes 76 04: jbe 0x4d4e68
        __asm _emit 0x76
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x4d4e74
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 13 00 00: call 0x4d620a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
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
