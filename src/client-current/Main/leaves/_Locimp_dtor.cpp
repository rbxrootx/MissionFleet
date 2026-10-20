// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897180C .. +0x60 bytes.
extern "C" __declspec(naked) void _Locimp_dtor() {
    __asm {
        push 4
        mov eax, 5898acceh
        ; Exact mapped bytes E8 28 BD 00 00: call 0x5897d540
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DE FE FF FF: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        mov esi, dword ptr [edi + 0ch]
        ; Exact mapped bytes EB 1F: jmp 0x5897184d
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [edi + 8]
        dec esi
        lea eax, [eax + esi*4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 13: je 0x5897184d
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 DF 2E E5 FF: call 0x587c4720
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x5897184d
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test esi, esi
        ; Exact mapped bytes 77 DD: ja 0x5897182e
        __asm _emit 0x77
        __asm _emit 0xdd
        push dword ptr [edi + 8]
        ; Exact mapped bytes E8 3D B7 00 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        pop ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C2 FE FF FF: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 08 BD 00 00: call 0x5897d573
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
