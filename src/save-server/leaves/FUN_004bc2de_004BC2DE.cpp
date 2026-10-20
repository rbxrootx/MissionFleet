// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC2DE .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_004bc2de_004BC2DE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 83h
        push 674470h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 63 DF 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4bc319
        __asm _emit 0x75
        __asm _emit 0x14
        push 84h
        push 674470h
        ; Exact mapped bytes E8 2C CA 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xca
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc319
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4bc2fd
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 8]
        add eax, dword ptr [ecx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 FC FF FF: call 0x4bc007
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A4 8F FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8f
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
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
