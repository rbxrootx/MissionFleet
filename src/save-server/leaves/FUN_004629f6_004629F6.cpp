// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004629F6 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_004629f6_004629F6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 34h
        mov dword ptr [ebp - 4], eax
        push 26fh
        push 67ca48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 47 78 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x462a33
        __asm _emit 0x75
        __asm _emit 0x14
        push 270h
        push 67ca48h
        ; Exact mapped bytes E8 12 63 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x462a33
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x462a19
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
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
