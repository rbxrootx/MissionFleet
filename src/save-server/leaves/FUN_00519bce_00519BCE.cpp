// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519BCE .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_00519bce_00519BCE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 7F 06: jg 0x519be6
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 7D 14: jge 0x519bfa
        __asm _emit 0x7d
        __asm _emit 0x14
        push 150h
        push 67598ch
        ; Exact mapped bytes E8 4B F1 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519bfa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x519bda
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 74 06: je 0x519c0c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 05: jne 0x519c11
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 51: jmp 0x519c62
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 5
        add ecx, 638740h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 85 86 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 18: jge 0x519c47
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 5
        add ecx, 638740h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 8
        ; Exact mapped bytes E8 74 86 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x519c5f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
