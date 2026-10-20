// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873C50 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58873c50() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi]
        push edi
        mov ebx, ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 29 04 08 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        lea edi, [eax + 50h]
        mov ecx, 60h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        ; Exact mapped bytes E8 78 F4 FF FF: call 0x588730f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
