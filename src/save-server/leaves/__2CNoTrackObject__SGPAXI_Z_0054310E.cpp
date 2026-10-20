// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054310E .. +0x27 bytes.
extern "C" __declspec(naked) void __2CNoTrackObject__SGPAXI_Z_0054310E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 40h
        ; Exact mapped bytes FF 15 64 B9 68 00: call dword ptr [0x68b964]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x54312c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 B0 FD F5 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xf5
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
