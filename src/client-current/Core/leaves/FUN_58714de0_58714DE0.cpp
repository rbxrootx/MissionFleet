// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58714DE0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58714de0_58714DE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x58714e11
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 8], edx
        push 0
        push 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        nop
        ; Exact mapped bytes EB 20: jmp 0x58714e31
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
