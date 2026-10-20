// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB830 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_004ab830_004AB830() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4ab83e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 74: jmp 0x4ab8b2
        __asm _emit 0xeb
        __asm _emit 0x74
        push 1
        push 20h
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        push eax
        ; Exact mapped bytes E8 92 FF FF FF: call 0x4ab7e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4ab859
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 59: jmp 0x4ab8b2
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        push ecx
        ; Exact mapped bytes E8 4B A3 00 00: call 0x4b5bb0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x4ab886
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        sub edx, 20h
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8F A3 00 00: call 0x4b5c10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 2C: jmp 0x4ab8b2
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 5C ED 5D 00: mov ecx, dword ptr [0x5ded5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x4ab89d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 15: jmp 0x4ab8b2
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        sub edx, 20h
        push edx
        push 0
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A8 22 5E 00: call dword ptr [0x5e22a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
