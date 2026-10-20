// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC36B .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004bc36b_004BC36B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 90h
        push 674470h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D8 DE 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4bc3a4
        __asm _emit 0x75
        __asm _emit 0x14
        push 91h
        push 674470h
        ; Exact mapped bytes E8 A1 C9 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc3a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4bc388
        __asm _emit 0x75
        __asm _emit 0xde
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C FC FF FF: call 0x4bc007
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 2B 8F FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8f
        __asm _emit 0xfa
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
