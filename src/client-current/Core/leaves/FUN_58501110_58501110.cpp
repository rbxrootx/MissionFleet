// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501110 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58501110_58501110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 88 61 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 4F 61 F8 FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 88 FA FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 98 61 FC FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
