// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F3A7 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_0044f3a7_0044F3A7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 10h
        push 0
        mov eax, dword ptr [ebp - 8]
        add eax, 74h
        push eax
        ; Exact mapped bytes E8 FD 64 01 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 74h], 10h
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push 640ce0h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7C 3F: jl 0x44f434
        __asm _emit 0x7c
        __asm _emit 0x3f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x44f40f
        __asm _emit 0x75
        __asm _emit 0x14
        push 33bh
        push 67702ch
        ; Exact mapped bytes E8 36 99 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x99
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44f40f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x44f3f5
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 74h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
