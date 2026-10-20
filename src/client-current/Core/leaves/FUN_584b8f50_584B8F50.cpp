// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8F50 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_584b8f50_584B8F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 04: jne 0x584b8f66
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3C: jmp 0x584b8fa2
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0B: jmp 0x584b8f7c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 C7 FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x584b8fa0
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 05 00 00: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x584b8f9e
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x584b8fa2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D1: jmp 0x584b8f71
        __asm _emit 0xeb
        __asm _emit 0xd1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
