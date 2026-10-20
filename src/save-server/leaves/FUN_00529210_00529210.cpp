// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529210 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00529210_00529210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        lea eax, [ebp - 20h]
        push eax
        push 6
        ; Exact mapped bytes D9 45 08: fld dword ptr [ebp + 8]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x08
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 03 52 F4 FF: call 0x46e430
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0F F6 FF FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
