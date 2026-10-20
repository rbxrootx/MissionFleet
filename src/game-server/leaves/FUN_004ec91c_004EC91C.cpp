// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC91C .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_004ec91c_004EC91C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0c3h
        push 5c7e38h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 28 E8 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C FF FF FF: call 0x4ec8a4
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4ec955
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x4ec969
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E2 10 00 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
