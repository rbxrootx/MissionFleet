// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00540663 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00540663_00540663() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov ecx, 686d24h
        ; Exact mapped bytes E8 6A 02 00 00: call 0x5408e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 0B: je 0x54068d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0D: jmp 0x54069a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, 686d20h
        ; Exact mapped bytes E8 69 02 00 00: call 0x540900
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x5406b4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 6740c8h
        ; Exact mapped bytes E8 91 86 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5406b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54069a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
