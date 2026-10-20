// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050100E .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_0050100e_0050100E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0
        ; Exact mapped bytes E8 15 FD FF FF: call 0x500d36
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x501073
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 C1 F8 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 35: jne 0x501073
        __asm _emit 0x75
        __asm _emit 0x35
        push 5c6ec8h
        push 5c6ef0h
        ; Exact mapped bytes E8 C8 EB FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x50106d
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a4h
        push 5c6db0h
        ; Exact mapped bytes E8 98 39 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50106d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x501050
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
