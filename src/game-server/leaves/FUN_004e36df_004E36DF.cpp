// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E36DF .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004e36df_004E36DF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 90h
        push 5c7b08h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 64 7A 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4e3718
        __asm _emit 0x75
        __asm _emit 0x14
        push 91h
        push 5c7b08h
        ; Exact mapped bytes E8 ED 12 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e3718
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4e36fc
        __asm _emit 0x75
        __asm _emit 0xde
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 FC FF FF: call 0x4e3357
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 D4 58 FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
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
