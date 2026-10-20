// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461A32 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00461a32_00461A32() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x461a52
        __asm _emit 0x75
        __asm _emit 0x11
        push 67h
        push 67ca48h
        ; Exact mapped bytes E8 F3 72 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x461a52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x461a38
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 07: jne 0x461a68
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 80004001h
        ; Exact mapped bytes EB 28: jmp 0x461a90
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 04 01 00 00: call dword ptr [eax + 0x104]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
