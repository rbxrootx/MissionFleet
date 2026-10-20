// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C393 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0052c393_0052C393() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 2B: je 0x52c3d4
        __asm _emit 0x74
        __asm _emit 0x2b
        push 585e68h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 D4 EC FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52c3d4
        __asm _emit 0x75
        __asm _emit 0x14
        push 48ch
        push 5c8fcch
        ; Exact mapped bytes E8 31 86 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c3d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C3: jne 0x52c39d
        __asm _emit 0x75
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 98h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
