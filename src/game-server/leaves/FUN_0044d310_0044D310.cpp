// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D310 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0044d310_0044D310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 88 00 00 00: call 0x44d3b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dl, byte ptr [eax]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A1 00 00 00: call 0x44d3e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 94 B4 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
