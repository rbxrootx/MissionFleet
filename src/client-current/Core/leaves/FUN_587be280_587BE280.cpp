// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE280 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_587be280_587BE280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 0B: je 0x587be2a3
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 74 4A: je 0x587be2e8
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x587be32d
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 2
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587be2e4
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 CF 23 CE FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x23
        __asm _emit 0xce
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x587be2e4
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 3
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x587be333
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 3
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587be329
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 8A 23 CE FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x23
        __asm _emit 0xce
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x587be329
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 3
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
        ; Exact mapped bytes EB 06: jmp 0x587be333
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}
