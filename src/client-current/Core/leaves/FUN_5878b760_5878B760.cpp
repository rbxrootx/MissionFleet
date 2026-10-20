// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B760 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_5878b760_5878B760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D 42 D1 FF: call 0x5849f9d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x42
        __asm _emit 0xd1
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 37 BB CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbb
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 3E 00 00 00: call 0x5878b7d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
