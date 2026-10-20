// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E44D0 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_584e44d0_584E44D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 0ch], 1
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 40: je 0x584e4537
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x584e4514
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 7E 1B: jle 0x584e4535
        __asm _emit 0x7e
        __asm _emit 0x1b
        imul eax, dword ptr [ebp - 0ch], 0ah
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 0ch], 64h
        ; Exact mapped bytes 7C 07: jl 0x584e4535
        __asm _emit 0x7c
        __asm _emit 0x07
        imul ecx, dword ptr [ebp - 10h], 64h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB BA: jmp 0x584e44f1
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, dword ptr [ebp + 8]
        cdq
        idiv dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*4 + 5895689ch]
        imul eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
