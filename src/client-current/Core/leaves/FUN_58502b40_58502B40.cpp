// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502B40 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58502b40_58502B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F 52 F8 FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x52
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 72 EF FF FF: call 0x58501ae0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 5C EF FF FF: call 0x58501ae0
        __asm _emit 0xe8
        __asm _emit 0x5c
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
