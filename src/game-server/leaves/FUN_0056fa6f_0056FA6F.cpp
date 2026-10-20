// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056FA6F .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_0056fa6f_0056FA6F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e4h
        mov dword ptr [ebp - 4], eax
        push 0b21h
        push 5d053ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 CF B6 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x56fae6
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 3E: jne 0x56fae4
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes E8 E6 A7 FA FF: call 0x51a29a
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x56fabf
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8000ffffh
        ; Exact mapped bytes EB 43: jmp 0x56fb02
        __asm _emit 0xeb
        __asm _emit 0x43
        push 0
        push 0e145h
        push 111h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c0h]
        ; Exact mapped bytes E8 54 C1 FC FF: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x56fae4
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8000ffffh
        ; Exact mapped bytes EB 1E: jmp 0x56fb02
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes EB 1A: jmp 0x56fb00
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 F8 00 00 00: call dword ptr [edx + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
