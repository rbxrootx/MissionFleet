// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EA79C .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004ea79c_004EA79C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 0A 01 00: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 77 14: ja 0x4ea7cb
        __asm _emit 0x77
        __asm _emit 0x14
        push 166h
        push 5c5d28h
        ; Exact mapped bytes E8 3A A2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea7cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ea7ae
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x4ea7f7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ea7f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 167h
        push 5c5d28h
        ; Exact mapped bytes E8 0E A2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea7f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4ea7d1
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
