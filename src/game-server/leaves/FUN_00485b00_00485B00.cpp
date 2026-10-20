// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485B00 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00485b00_00485B00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 3feh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 90 06 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B5 2C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
