// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0FE0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_584a0fe0_584A0FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 BE 62 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 AC 62 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        movzx eax, byte ptr [eax]
        movzx ecx, al
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BA FD FF FF: call 0x584a0dd0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
