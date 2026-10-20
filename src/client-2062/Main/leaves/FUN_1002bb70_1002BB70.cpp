// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BB70 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_1002bb70_1002BB70() {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 8]
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr [esp + 8], ecx
        ; Exact mapped bytes 74 3E: je 0x1002bbbe
        __asm _emit 0x74
        __asm _emit 0x3e
        push ebx
        push edi
        mov eax, dword ptr [esi + 8]
        lea edi, [esi + 8]
        mov ebx, esi
        mov dword ptr [eax + 0a8h], ebp
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov esi, dword ptr [esi]
        cmp ebx, ebp
        ; Exact mapped bytes 74 17: je 0x1002bbb4
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1002bbab
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        push ebx
        ; Exact mapped bytes E8 D3 0B 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        cmp esi, ebp
        ; Exact mapped bytes 75 CA: jne 0x1002bb82
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop ebx
        mov dword ptr [ecx + 0ch], ebp
        mov dword ptr [ecx + 10h], ebp
        mov dword ptr [ecx + 8], ebp
        mov dword ptr [ecx + 4], ebp
        pop esi
        pop ebp
        pop ecx
        ret
    }
}
