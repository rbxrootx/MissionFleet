// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571952 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00571952_00571952() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 3ah
        push 67c7a0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F7 88 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0D: jne 0x57197c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        and edx, dword ptr [ecx + 34h]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x57198d
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        mov eax, 40101h
        ; Exact mapped bytes EB 20: jmp 0x5719ad
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        and edx, dword ptr [ecx + 38h]
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x5719ab
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 30h]
        neg eax
        sbb eax, eax
        add eax, 40101h
        ; Exact mapped bytes EB 02: jmp 0x5719ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
