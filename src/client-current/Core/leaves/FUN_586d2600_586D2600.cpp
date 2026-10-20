// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D2600 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_586d2600_586D2600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586d261b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 4C: jge 0x586d266d
        __asm _emit 0x7d
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 6ch]
        ; Exact mapped bytes E8 20 F0 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x586d266b
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 6ch]
        ; Exact mapped bytes E8 0D F0 DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 100h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 18 1B 0E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB A5: jmp 0x586d2612
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B 00 00 00: call 0x586d2680
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
