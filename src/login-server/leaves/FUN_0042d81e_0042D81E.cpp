// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D81E .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0042d81e_0042D81E() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 4]
        test esi, esi
        push edi
        ; Exact mapped bytes 74 32: je 0x42d859
        __asm _emit 0x74
        __asm _emit 0x32
        mov edi, dword ptr [esp + 0ch]
        xor edx, edx
        mov eax, edi
        shr eax, 4
        div dword ptr [ecx + 8]
        mov eax, dword ptr [esi + edx*4]
        lea edx, [esi + edx*4]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x42d859
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [eax + 4], edi
        ; Exact mapped bytes 74 06: je 0x42d84a
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, eax
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB F1: jmp 0x42d83b
        __asm _emit 0xeb
        __asm _emit 0xf1
        mov esi, dword ptr [eax]
        push eax
        mov dword ptr [edx], esi
        ; Exact mapped bytes E8 DA FE FF FF: call 0x42d72e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x42d85b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
