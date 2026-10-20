// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C9320 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_585c9320_585C9320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C D6 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd6
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD 29 EC FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x29
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 2B EC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2b
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x585c9350
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x585c9371
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 29ch], 0
        ; Exact mapped bytes 74 11: je 0x585c9371
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 29ch], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
