// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E660 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5857e660_5857E660() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], 40000h
        ; Exact mapped bytes 75 1E: jne 0x5857e68e
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 800100a1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 E3 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe3
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x5857e6b3
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp + 10h], 20000h
        ; Exact mapped bytes 75 1C: jne 0x5857e6b3
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 800100a2h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE E2 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe2
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
