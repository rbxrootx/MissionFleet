// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BBF20 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_587bbf20_587BBF20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 75 04: jne 0x587bbf34
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 45: jmp 0x587bbf79
        __asm _emit 0xeb
        __asm _emit 0x45
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x587bbf4a
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x587bbf4a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2F: jmp 0x587bbf79
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 48h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 34h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
