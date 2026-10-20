// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BDA3C .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004bda3c_004BDA3C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 83h
        push 674560h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 05 C8 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4bda77
        __asm _emit 0x75
        __asm _emit 0x14
        push 84h
        push 674560h
        ; Exact mapped bytes E8 CE B2 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bda77
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4bda5b
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
        ; Exact mapped bytes E8 AA FC FF FF: call 0x4bd747
        __asm _emit 0xe8
        __asm _emit 0xaa
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
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        lea eax, [ecx + edx*4]
        push eax
        ; Exact mapped bytes E8 40 78 FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x78
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
