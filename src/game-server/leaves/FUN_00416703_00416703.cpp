// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416703 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_00416703_00416703() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 10h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 24h
        push eax
        ; Exact mapped bytes E8 4F 2C 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B2 20 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
