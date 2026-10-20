// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885608E .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_5885608e_5885608E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        mov ebx, ecx
        test esi, esi
        ; Exact mapped bytes 74 59: je 0x588560f7
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 4]
        cmp dword ptr [eax + 8], edx
        ; Exact mapped bytes 75 12: jne 0x588560ba
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 04: je 0x588560b5
        __asm _emit 0x74
        __asm _emit 0x04
        add dword ptr [eax], esi
        ; Exact mapped bytes EB 42: jmp 0x588560f7
        __asm _emit 0xeb
        __asm _emit 0x42
        or dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes EB 3D: jmp 0x588560f7
        __asm _emit 0xeb
        __asm _emit 0x3d
        sub edx, dword ptr [eax + 8]
        push edi
        cmp edx, esi
        mov edi, esi
        cmovb edi, edx
        push edi
        push dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 C0 67 FF FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        add esp, 0ch
        add dword ptr [eax], edi
        mov eax, dword ptr [ebx]
        add dword ptr [eax + 8], edi
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 04: je 0x588560eb
        __asm _emit 0x74
        __asm _emit 0x04
        add dword ptr [eax], esi
        ; Exact mapped bytes EB 0B: jmp 0x588560f6
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp edi, esi
        ; Exact mapped bytes 74 05: je 0x588560f4
        __asm _emit 0x74
        __asm _emit 0x05
        or dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x588560f6
        __asm _emit 0xeb
        __asm _emit 0x02
        add dword ptr [eax], edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
