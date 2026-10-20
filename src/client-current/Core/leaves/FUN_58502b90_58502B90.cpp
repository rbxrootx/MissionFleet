// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502B90 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58502b90_58502B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 06 FA FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 06 FA FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 52 F8 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x52
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 18 EF FF FF: call 0x58501ae0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 02 EF FF FF: call 0x58501ae0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
