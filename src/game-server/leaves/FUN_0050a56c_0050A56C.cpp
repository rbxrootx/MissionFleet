// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A56C .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_0050a56c_0050A56C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 10: je 0x50a589
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 AF B5 FE FF: call 0x4f5b32
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x50a589
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x50a5c4
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        cmp dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 74 02: je 0x50a59d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 27: jmp 0x50a5c4
        __asm _emit 0xeb
        __asm _emit 0x27
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffh
        or ch, 0ffh
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
