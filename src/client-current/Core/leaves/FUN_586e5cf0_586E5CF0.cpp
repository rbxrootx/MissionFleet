// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E5CF0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_586e5cf0_586E5CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58ch]
        ; Exact mapped bytes E8 29 FA DA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0xda
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x586e5d25
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58ch]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3E 7E DE FF: call 0x584cdb60
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586e5d4f
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58ch]
        ; Exact mapped bytes E8 FD F9 DA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf9
        __asm _emit 0xda
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 17: jne 0x586e5d4f
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58ch]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 12 7E DE FF: call 0x584cdb60
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
