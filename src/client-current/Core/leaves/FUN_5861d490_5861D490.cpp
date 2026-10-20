// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861D490 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_5861d490_5861D490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 9B EB FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D 37 04 00: call 0x58660c00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 BD E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 73 AD 04 00: call 0x58668240
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 B8 E9 FF: call 0x584b8cf0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
