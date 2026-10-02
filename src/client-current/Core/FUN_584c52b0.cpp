// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C52B0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_584c52b0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 2C FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E3 1F FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov cl, byte ptr [ebp - 3]
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp - 0ch]
        push edx
        movzx eax, byte ptr [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 3D FE FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        xor edx, edx
        mov byte ptr [ebp - 2], dl
        lea eax, [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CE 2A FC FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 08 00 00: call 0x584c5b20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
