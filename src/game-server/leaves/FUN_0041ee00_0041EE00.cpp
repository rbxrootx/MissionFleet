// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041EE00 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_0041ee00_0041EE00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 FF FF FF: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        neg eax
        sbb eax, eax
        inc eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B2 99 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
