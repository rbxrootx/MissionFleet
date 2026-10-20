// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8C80 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_584b8c80_584B8C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4A: je 0x584b8ce2
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 CA FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x584b8cda
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x584b8ccc
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b8cd3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB B0: jmp 0x584b8c92
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov esp, ebp
        pop ebp
        ret
    }
}
