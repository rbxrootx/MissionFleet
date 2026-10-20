// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569AD5 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_00569ad5_00569AD5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 09 00 00: call 0x56a409
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 19: jne 0x569b0b
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 11: jne 0x569b0b
        __asm _emit 0x75
        __asm _emit 0x11
        push 55h
        push 67c668h
        ; Exact mapped bytes E8 3A F2 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569b0b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x569ae9
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1C: je 0x569b36
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x569b11
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 02: jne 0x569b46
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 42: jmp 0x569b88
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1A: jne 0x569b82
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 11: jne 0x569b82
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 67c668h
        ; Exact mapped bytes E8 C3 F1 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569b82
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x569b62
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
