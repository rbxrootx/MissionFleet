// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CEB0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_5857ceb0_5857CEB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1F: jne 0x5857cedc
        __asm _emit 0x75
        __asm _emit 0x1f
        push 0
        push 839h
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0
        push 80010f10h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 FA 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfa
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1F: jmp 0x5857cefb
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 0
        push 839h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 80010f14h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 FA 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
