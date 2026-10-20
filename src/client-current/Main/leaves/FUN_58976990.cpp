// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976990 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_58976990() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        xor edi, edi
        mov ebp, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 10h]
        shl ebp, 7
        mov ebx, ebp
        mov dword ptr [esp + 18h], ebp
        imul ebx, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 7E 79: jle 0x58976a2a
        __asm _emit 0x7e
        __asm _emit 0x79
        ; Exact mapped bytes EB 04: jmp 0x589769b7
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi + 14h]
        sub eax, edi
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x589769c2
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, ecx
        mov edx, dword ptr [esi + 18h]
        mov ecx, edi
        add ecx, edx
        mov edx, dword ptr [esi + 1ch]
        sub edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 7C 02: jl 0x589769d4
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, edx
        mov edx, dword ptr [esi + 4]
        sub edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 7C 02: jl 0x589769df
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 47: jle 0x58976a2a
        __asm _emit 0x7e
        __asm _emit 0x47
        imul eax, ebp
        mov ebp, eax
        mov al, byte ptr [esp + 1ch]
        test al, al
        ; Exact mapped bytes 74 16: je 0x58976a06
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi]
        push ebp
        push ebx
        lea edx, [esi + 28h]
        mov ecx, dword ptr [eax + edi*4]
        mov eax, dword ptr [esp + 1ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 56 2C: call dword ptr [esi + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x2c
        ; Exact mapped bytes EB 13: jmp 0x58976a19
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [esi]
        push ebp
        lea eax, [esi + 28h]
        push ebx
        mov edx, dword ptr [ecx + edi*4]
        mov ecx, dword ptr [esp + 1ch]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 10h]
        add edi, edx
        add esp, 14h
        add ebx, ebp
        cmp edi, eax
        ; Exact mapped bytes 7C 89: jl 0x589769b3
        __asm _emit 0x7c
        __asm _emit 0x89
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
