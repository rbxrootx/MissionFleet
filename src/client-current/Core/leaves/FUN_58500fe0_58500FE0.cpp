// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500FE0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58500fe0_58500FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 BE 62 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 AC 62 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 9D 62 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp - 0ch]
        push edx
        movzx eax, byte ptr [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 14 00 00 00: call 0x58501040
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
