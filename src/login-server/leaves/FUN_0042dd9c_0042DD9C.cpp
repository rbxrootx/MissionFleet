// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DD9C .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_0042dd9c_0042DD9C() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        lea eax, [edi + ebx]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x42ddd4
        __asm _emit 0x74
        __asm _emit 0x24
        push eax
        ; Exact mapped bytes E8 62 FC FF FF: call 0x42da18
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push dword ptr [esp + 18h]
        push dword ptr [esi]
        ; Exact mapped bytes E8 FE 0D FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push ebx
        push dword ptr [esp + 2ch]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 EF 0D FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
