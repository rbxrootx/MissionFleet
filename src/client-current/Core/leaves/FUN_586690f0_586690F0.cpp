// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586690F0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_586690f0_586690F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 0B: jmp 0x58669116
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D C6 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 39: je 0x58669155
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C C1 F6 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 28: jne 0x58669153
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D C1 F6 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 18: jne 0x58669153
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD FC FD FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x58669153
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB B6: jmp 0x5866910b
        __asm _emit 0xeb
        __asm _emit 0xb6
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 1C: jne 0x58669177
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 90 E0 E6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 208h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FA FB E6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfb
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
