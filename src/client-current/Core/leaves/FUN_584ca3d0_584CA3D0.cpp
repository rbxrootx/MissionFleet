// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CA3D0 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_584ca3d0_584CA3D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 1
        ; Exact mapped bytes 7E 7B: jle 0x584ca45d
        __asm _emit 0x7e
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 78h], edx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 78h]
        cdq
        mov ecx, 19h
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 8], edx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 0D 2F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x2f
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 0D 2F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x584ca496
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 78h], 1
        ; Exact mapped bytes 75 30: jne 0x584ca496
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 1
        ; Exact mapped bytes 75 0D: jne 0x584ca48b
        __asm _emit 0x75
        __asm _emit 0x0d
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 08 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0B: jmp 0x584ca496
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B 08 00 00: call 0x584cacd0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
