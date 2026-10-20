// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861EE50 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5861ee50_5861EE50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 42: jne 0x5861eea1
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0c84h]
        ; Exact mapped bytes 75 0B: jne 0x5861ee78
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 12 00 00: call 0x58620120
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x5861eea1
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0c88h]
        ; Exact mapped bytes 75 1B: jne 0x5861eea1
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F A4 E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 99 04 00: call 0x58668860
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
