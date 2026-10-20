// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851CC40 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_5851cc40_5851CC40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 7E 11: jle 0x5851cc6d
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 98h]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 07: jmp 0x5851cc74
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 50h], 0
        ; Exact mapped bytes 74 20: je 0x5851cca1
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 50h]
        ; Exact mapped bytes E8 40 93 FA FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7E 0C: jle 0x5851cca1
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 50h]
        ; Exact mapped bytes EB 02: jmp 0x5851cca3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
