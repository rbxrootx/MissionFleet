// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545155 .. +0x50 bytes.
extern "C" __declspec(naked) void _RemoveAll_CTypeLibCacheMap__UAEXPAX_Z_00545155() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BB E6 FE FF: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 30: je 0x54519f
        __asm _emit 0x74
        __asm _emit 0x30
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A4 65 FA FF: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 12: je 0x54519d
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 6F 82 FA FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB CA: jmp 0x545169
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
