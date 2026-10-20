// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A1A0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5850a1a0_5850A1A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 09: je 0x5850a1c7
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x5850a1ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 4
        mov eax, dword ptr [ebp - 10h]
        or eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2E 00 00 00: call 0x5850a210
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
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
