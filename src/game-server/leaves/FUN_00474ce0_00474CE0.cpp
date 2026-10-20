// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474CE0 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00474ce0_00474CE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 DF 19 00 00: call 0x4766f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], 581cb8h
        mov eax, dword ptr [ebp - 0ch]
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 B9 3A 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
