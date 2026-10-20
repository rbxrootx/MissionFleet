// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859E0D0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_5859e0d0_5859E0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5859e0eb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 7D 71: jge 0x5859e162
        __asm _emit 0x7d
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 0a06h]
        sub edx, 1
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 42: je 0x5859e145
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x5859e145
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 510h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx]
        shl eax, 7
        cdq
        mov ecx, 19h
        idiv ecx
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE 73 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x73
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5859e160
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 510h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E1 73 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x73
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 80: jmp 0x5859e0e2
        __asm _emit 0xeb
        __asm _emit 0x80
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
