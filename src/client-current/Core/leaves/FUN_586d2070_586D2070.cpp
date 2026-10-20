// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D2070 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_586d2070_586D2070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        push 588b21e0h
        push 588b21e4h
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 89 F2 17 00: call 0x58851315
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf2
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 77: jne 0x586d210f
        __asm _emit 0x75
        __asm _emit 0x77
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586d20aa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 53: jge 0x586d2103
        __asm _emit 0x7d
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 1
        push 3ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        push edx
        ; Exact mapped bytes E8 B6 48 18 00: call 0x58856981
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 6ch]
        ; Exact mapped bytes E8 23 E4 DF FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 80 A6 E1 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa6
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9E: jmp 0x586d20a1
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 75 F3 17 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
