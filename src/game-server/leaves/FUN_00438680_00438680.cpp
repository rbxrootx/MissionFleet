// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438680 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00438680_00438680() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 415h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 64 0B 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 35 01 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
