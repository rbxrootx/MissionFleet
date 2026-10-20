// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EA570 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_587ea570() {
    __asm {
        sub esp, 8
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 4], ecx
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 100ch]
        mov al, byte ptr [edx + 4]
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        and al, 1fh
        cmp al, 9
        ; Exact mapped bytes 75 0E: jne 0x587ea5a2
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 0a0h]
        mov eax, dword ptr [edx + 11ch]
        ; Exact mapped bytes EB 0C: jmp 0x587ea5ae
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ecx + 9ch]
        mov eax, dword ptr [edx + 0f4h]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], eax
        xor ebp, ebp
        mov ebx, 1390h
        mov edi, 0d0h
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [ecx + edi - 38h], 0
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [edi + eax], 0
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        mov esi, dword ptr [ebx + edx]
        test esi, esi
        ; Exact mapped bytes 74 1D: je 0x587ea60e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [esi + 0ch]
        cmp ebp, dword ptr [esp + 10h]
        ; Exact mapped bytes 75 04: jne 0x587ea5fe
        __asm _emit 0x75
        __asm _emit 0x04
        push 1
        ; Exact mapped bytes EB 02: jmp 0x587ea600
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        push 0
        ; Exact mapped bytes E8 A9 0D F5 FF: call 0x5873b3b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 75 E3: jne 0x587ea5f1
        __asm _emit 0x75
        __asm _emit 0xe3
        add edi, 4
        inc ebp
        add ebx, 10h
        cmp edi, 0f0h
        ; Exact mapped bytes 7C A5: jl 0x587ea5c2
        __asm _emit 0x7c
        __asm _emit 0xa5
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
