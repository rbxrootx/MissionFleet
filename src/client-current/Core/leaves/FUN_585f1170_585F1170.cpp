// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F1170 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_585f1170_585F1170() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 29: je 0x585f11b8
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 46 EA FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0F: jne 0x585f11ab
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0B: jmp 0x585f11b6
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 68 E9 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D1: jmp 0x585f1189
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
