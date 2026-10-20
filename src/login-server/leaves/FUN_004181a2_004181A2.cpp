// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004181A2 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_004181a2_004181A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ecx + 2ch]
        push esi
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 29: je 0x4181e0
        __asm _emit 0x74
        __asm _emit 0x29
        lea esi, [ecx + 20h]
        lea eax, [ebp - 8]
        mov ecx, esi
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 93 56 01 00: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 70 1E 00 00: call 0x41a045
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 0D: je 0x4181e7
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 DA: jne 0x4181ba
        __asm _emit 0x75
        __asm _emit 0xda
        xor eax, eax
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB F6: jmp 0x4181e2
        __asm _emit 0xeb
        __asm _emit 0xf6
    }
}
