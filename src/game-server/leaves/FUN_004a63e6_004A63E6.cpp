// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A63E6 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_004a63e6_004A63E6() {
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
        push 5d0270h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 57 4D 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4a6423
        __asm _emit 0x75
        __asm _emit 0x14
        push 270h
        push 5d0270h
        ; Exact mapped bytes E8 E2 E5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a6423
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a6409
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
