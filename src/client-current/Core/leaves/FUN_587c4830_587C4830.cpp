// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4830 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_587c4830_587C4830() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 3B: je 0x587c4890
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 42 7C: cvtsi2ss xmm0, dword ptr [edx + 0x7c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x42
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 0F 2A 48 78: cvtsi2ss xmm1, dword ptr [eax + 0x78]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x48
        __asm _emit 0x78
        ; Exact mapped bytes F3 0F 5E C1: divss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 5A C0: cvtss2sd xmm0, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push 588be460h
        push 80h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        ; Exact mapped bytes E8 65 C5 CE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc5
        __asm _emit 0xce
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 20: jmp 0x587c48b0
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        push 588be458h
        push 80h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        push eax
        ; Exact mapped bytes E8 43 C5 CE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc5
        __asm _emit 0xce
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
