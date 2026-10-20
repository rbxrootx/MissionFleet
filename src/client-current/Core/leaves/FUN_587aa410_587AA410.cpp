// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA410 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_587aa410_587AA410() {
    __asm {
        push ebx
        push edi
        xor edi, edi
        mov ecx, 1
        mov ebx, 58965ec4h
        xor eax, eax
        ; Exact mapped bytes F0 0F B1 0B: lock cmpxchg dword ptr [ebx], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x587aa44e
        __asm _emit 0x74
        __asm _emit 0x26
        push esi
        ; Exact mapped bytes 8B 35 40 42 89 58: mov esi, dword ptr [0x58894240]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp edi, 20h
        ; Exact mapped bytes 73 04: jae 0x587aa439
        __asm _emit 0x73
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 02: jmp 0x587aa43b
        __asm _emit 0xeb
        __asm _emit 0x02
        push 1
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        inc edi
        mov ecx, 1
        xor eax, eax
        ; Exact mapped bytes F0 0F B1 0B: lock cmpxchg dword ptr [ebx], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x587aa430
        __asm _emit 0x75
        __asm _emit 0xe3
        pop esi
        pop edi
        pop ebx
        ret
    }
}
