// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855B7E0 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_5855b7e0_5855B7E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 0C: jne 0x5855b834
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax + 9ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x5855b83e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A C8 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc8
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5855b869
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 0ah]
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 74 25: je 0x5855b89a
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C3 C1 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc1
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 58 FF FF FF: call 0x5855b7e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 E9 C1 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C6: jmp 0x5855b860
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
