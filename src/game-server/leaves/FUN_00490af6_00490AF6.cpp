// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00490AF6 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_00490af6_00490AF6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 07 0D 00: call 0x561234
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x490b14
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x490b4b
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x490b30
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b2h
        push 5ca644h
        ; Exact mapped bytes E8 D5 3E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x490b30
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x490b14
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, 1
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
