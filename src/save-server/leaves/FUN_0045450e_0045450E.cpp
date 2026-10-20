// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045450E .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_0045450e_0045450E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x454525
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7C: jmp 0x4545a1
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 14: jne 0x45455c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bd1h
        push 67702ch
        ; Exact mapped bytes E8 E9 47 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45455c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x454539
        __asm _emit 0x75
        __asm _emit 0xd7
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 88h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ch]
        mov eax, dword ptr [edx + 88h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ecx + 88h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
