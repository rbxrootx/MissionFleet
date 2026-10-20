// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567C4F .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_00567c4f_00567C4F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x567c6a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 73 5E: jae 0x567cce
        __asm _emit 0x73
        __asm _emit 0x5e
        push 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*4 + 5891a8h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax*4 + 5891a8h]
        push ecx
        push 0
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x567ccc
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [ebp - 1ch], 100h
        ; Exact mapped bytes 74 09: je 0x567caa
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 1ch], 104h
        ; Exact mapped bytes 75 1B: jne 0x567cc5
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 14h]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x567cc5
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 9C: jmp 0x567c61
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x567cd0
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 93: jmp 0x567c61
        __asm _emit 0xeb
        __asm _emit 0x93
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
