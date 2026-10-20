// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE590 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_587be590_587BE590() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes FF 15 F4 44 89 58: call dword ptr [0x588944f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        and ecx, 0fffffffdh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 4
        ; Exact mapped bytes 75 56: jne 0x587be60b
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 3
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 31: je 0x587be605
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 B1 20 CE FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x20
        __asm _emit 0xce
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x587be605
        __asm _emit 0x74
        __asm _emit 0x1f
        push 10001h
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 30h]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        ; Exact mapped bytes EB 67: jmp 0x587be670
        __asm _emit 0xeb
        __asm _emit 0x67
        ; Exact mapped bytes EB 65: jmp 0x587be670
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 6
        ; Exact mapped bytes 75 56: jne 0x587be66a
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 58h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 2
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 31: je 0x587be664
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 52 20 CE FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x20
        __asm _emit 0xce
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x587be664
        __asm _emit 0x74
        __asm _emit 0x1f
        push 10000h
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 30h]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x587be670
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x587be670
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
    }
}
