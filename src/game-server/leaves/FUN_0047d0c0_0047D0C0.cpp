// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D0C0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0047d0c0_0047D0C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 99 FF FF FF: call 0x47d080
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 E4 B6 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
