// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430AE2 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00430ae2_00430AE2() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ecx + 38h], 0
        push esi
        ; Exact mapped bytes 74 3B: je 0x430b27
        __asm _emit 0x74
        __asm _emit 0x3b
        push dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        lea eax, [esi + 2000h]
        push eax
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp esi, 132h
        ; Exact mapped bytes 72 0C: jb 0x430b19
        __asm _emit 0x72
        __asm _emit 0x0c
        cmp esi, 138h
        ; Exact mapped bytes 77 04: ja 0x430b19
        __asm _emit 0x77
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x430b38
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x430b22
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], eax
        push 1
        pop eax
        ; Exact mapped bytes EB 11: jmp 0x430b38
        __asm _emit 0xeb
        __asm _emit 0x11
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 00 00 00: call 0x430b3d
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
