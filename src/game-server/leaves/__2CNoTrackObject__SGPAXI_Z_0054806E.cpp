// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054806E .. +0x27 bytes.
extern "C" __declspec(naked) void __2CNoTrackObject__SGPAXI_Z_0054806E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 40h
        ; Exact mapped bytes FF 15 40 23 5E 00: call dword ptr [0x5e2340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x54808c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 20 7D F8 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7d
        __asm _emit 0xf8
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
