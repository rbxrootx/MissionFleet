// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00540375 .. +0x50 bytes.
extern "C" __declspec(naked) void _RemoveAll_CTypeLibCacheMap__UAEXPAX_Z_00540375() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 64 72 FE FF: call 0x5275ea
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 30: je 0x5403bf
        __asm _emit 0x74
        __asm _emit 0x30
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C4 78 F8 FF: call 0x4c7c67
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 12: je 0x5403bd
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 EF C0 F8 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB CA: jmp 0x540389
        __asm _emit 0xeb
        __asm _emit 0xca
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
