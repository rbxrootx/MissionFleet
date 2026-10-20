// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3100 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_584a3100_584A3100() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 50 FE FF: call 0x584881e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x584a311a
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 27 4F FE FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 00 00 00: call 0x584a3130
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
