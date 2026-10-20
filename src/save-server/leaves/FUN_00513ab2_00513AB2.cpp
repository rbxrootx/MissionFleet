// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513AB2 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_00513ab2_00513AB2() {
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
        ; Exact mapped bytes 74 2B: je 0x513af3
        __asm _emit 0x74
        __asm _emit 0x2b
        push 636f20h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 B5 66 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x513af3
        __asm _emit 0x75
        __asm _emit 0x14
        push 490h
        push 673dc0h
        ; Exact mapped bytes E8 52 52 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513af3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C3: jne 0x513abc
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
