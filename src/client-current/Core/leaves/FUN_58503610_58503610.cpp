// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58503610 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_58503610_58503610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 48 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 99 FF FF FF: call 0x585035c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 8
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 DF 62 FA FF: call 0x584a9920
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E8 39 3C F8 FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 69 3D F8 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
