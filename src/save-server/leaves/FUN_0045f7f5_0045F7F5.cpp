// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F7F5 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0045f7f5_0045F7F5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 52: je 0x45f85a
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 47: jne 0x45f85a
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x45f830
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a9h
        push 6792e4h
        ; Exact mapped bytes E8 15 95 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45f830
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x45f813
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x45f865
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
