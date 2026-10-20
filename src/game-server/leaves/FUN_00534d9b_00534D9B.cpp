// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534D9B .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00534d9b_00534D9B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 7C E8 5D 00 00: cmp dword ptr [0x5de87c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x534db0
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 25: jmp 0x534dd5
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x534dc5
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5c7738h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 FD FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x534dd2
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5c7740h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 FD FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
