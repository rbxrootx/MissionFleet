// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535490 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00535490_00535490() {
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
        ; Exact mapped bytes E8 E3 C9 F7 FF: call 0x4b1e90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5F F6 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5f
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
