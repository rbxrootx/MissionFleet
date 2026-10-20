// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875CDA0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5875cda0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 7E 0E: jle 0x5875cdbd
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5875cdbd
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x5875cdbf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5875cdf2
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 7E 0E: jle 0x5875cde6
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5875cde6
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x5875cde8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 8]
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        pop esi
        ret
    }
}
