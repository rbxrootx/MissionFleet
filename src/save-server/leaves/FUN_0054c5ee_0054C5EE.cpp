// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C5EE .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_0054c5ee_0054C5EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54c60e
        __asm _emit 0x75
        __asm _emit 0x14
        push 27fh
        push 679318h
        ; Exact mapped bytes E8 37 C7 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c60e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54c5f4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 45: jne 0x54c65f
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 38: je 0x54c65f
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], 1
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], 0ffffffffh
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 10h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
