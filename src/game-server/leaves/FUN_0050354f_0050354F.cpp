// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050354F .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_0050354f_0050354F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B D7 FF FF: call 0x500cac
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 25: je 0x50358f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50358f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c7h
        push 5c6db0h
        ; Exact mapped bytes E8 76 14 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50358f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CC: jne 0x503561
        __asm _emit 0x75
        __asm _emit 0xcc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
