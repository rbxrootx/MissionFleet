// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B4120 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_584b4120_584B4120() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2
        mov eax, 1
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ecx + eax + 18ah]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ecx + eax + 18ah]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D AF FF FF: call 0x584af0b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b416b
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 3F: jmp 0x584b41aa
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 2
        mov edx, 1
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        movzx eax, byte ptr [eax + edx + 18ah]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 B1 FF FF: call 0x584af320
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b4195
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 15: jmp 0x584b41aa
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 CD FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x584b41a8
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b41aa
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
