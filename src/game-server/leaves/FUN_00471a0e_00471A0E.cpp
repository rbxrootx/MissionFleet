// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471A0E .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00471a0e_00471A0E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 62 29 F9 FF: call 0x40438d
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 AB 6D 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
