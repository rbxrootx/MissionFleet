// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589718A1 .. +0x3E bytes.
extern "C" __declspec(naked) void facet_Register() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D AC 85 A2 58 00: cmp dword ptr [0x58a285ac], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x589718ba
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5897186ch
        ; Exact mapped bytes E8 86 FE FF FF: call 0x5897173f
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 8
        ; Exact mapped bytes E8 8D B3 00 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x589718d6
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D AC 85 A2 58: mov ecx, dword ptr [0x58a285ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 02: jmp 0x589718d8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 AC 85 A2 58: mov dword ptr [0x58a285ac], eax
        __asm _emit 0xa3
        __asm _emit 0xac
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        pop ebp
        ret
    }
}
