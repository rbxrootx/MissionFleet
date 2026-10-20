// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691FF0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58691ff0_58691FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        ; Exact mapped bytes E8 A9 2A EA FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x58692024
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5F 2E EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2e
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5869204e
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        ; Exact mapped bytes E8 7E 2A EA FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 17: jne 0x5869204e
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 2E EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2e
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
