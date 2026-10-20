// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885567E .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_5885567e_5885567E() {
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
        ; Exact mapped bytes 74 3D: je 0x588556d8
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebx + 4], 0
        ; Exact mapped bytes 74 37: je 0x588556d8
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [edi + 28h]
        movzx edx, word ptr [edi + 2eh]
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
        ; Exact mapped bytes E8 85 C6 FF FF: call 0x58851d48
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test al, al
        mov eax, ebx
        pop esi
        push 34h
        pop ecx
        ; Exact mapped bytes 74 15: je 0x588556e5
        __asm _emit 0x74
        __asm _emit 0x15
        mov byte ptr [edi + 38h], 1
        shr eax, 1
        ; Exact mapped bytes EB 11: jmp 0x588556e9
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
