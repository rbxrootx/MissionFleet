// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885560B .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_5885560b_5885560B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov edx, dword ptr [edi + 10h]
        lea eax, [edx + 4]
        mov dword ptr [edi + 10h], eax
        mov ebx, dword ptr [edx]
        mov dword ptr [ebp - 8], ebx
        test ebx, ebx
        ; Exact mapped bytes 74 3C: je 0x58855664
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebx + 4], 0
        ; Exact mapped bytes 74 36: je 0x58855664
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [edi + 28h]
        mov dl, byte ptr [edi + 2dh]
        mov eax, dword ptr [edi + 4]
        mov ebx, dword ptr [ebx + 4]
        push esi
        mov esi, dword ptr [edi]
        push ecx
        mov dword ptr [edi + 30h], ebx
        mov ebx, dword ptr [ebp - 8]
        push edx
        push eax
        push esi
        movzx ebx, word ptr [ebx]
        ; Exact mapped bytes E8 C8 C6 FF FF: call 0x58851d17
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test al, al
        mov eax, ebx
        pop esi
        push 34h
        pop ecx
        ; Exact mapped bytes 74 15: je 0x58855671
        __asm _emit 0x74
        __asm _emit 0x15
        mov byte ptr [edi + 38h], 1
        shr eax, 1
        ; Exact mapped bytes EB 11: jmp 0x58855675
        __asm _emit 0xeb
        __asm _emit 0x11
        push 6
        pop eax
        push 34h
        mov dword ptr [edi + 30h], 588c32d8h
        pop ecx
        mov byte ptr [edi + 38h], 0
        mov dword ptr [edi + ecx], eax
        mov al, 1
        pop edi
        pop ebx
        leave
        ret
    }
}
