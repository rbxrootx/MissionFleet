// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0EED .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004d0eed_004D0EED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes E8 7D F2 06 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9D A6 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4d0f24
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 0
        push 401h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 A7 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x4d0f5b
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x4d0f5b
        __asm _emit 0x74
        __asm _emit 0x1f
        push 1
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7C 10: jl 0x4d0f5b
        __asm _emit 0x7c
        __asm _emit 0x10
        push -1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
