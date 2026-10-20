// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050109A .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0050109a_0050109A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0
        ; Exact mapped bytes E8 89 FC FF FF: call 0x500d36
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x5010ff
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B C1 F8 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 35: jne 0x5010ff
        __asm _emit 0x75
        __asm _emit 0x35
        push 5c6ef4h
        push 5c6f20h
        ; Exact mapped bytes E8 3C EB FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5010f9
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b6h
        push 5c6db0h
        ; Exact mapped bytes E8 0C 39 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5010f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5010dc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
