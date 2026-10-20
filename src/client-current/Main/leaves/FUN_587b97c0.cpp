// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B97C0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587b97c0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push esi
        push edi
        mov edi, dword ptr [esp + 20h]
        mov esi, ecx
        lea eax, [edi - 30h]
        push eax
        lea ecx, [ebx + 30h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 45 A2 58: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 95 FE FF: call 0x587a2d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x587b97ec
        __asm _emit 0x74
        __asm _emit 0x08
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        movzx edx, word ptr [esp + 10h]
        movzx eax, word ptr [esp + 14h]
        push 0
        push edi
        push ebx
        shl edx, 10h
        push 0
        or edx, eax
        push edx
        push 80020a00h
        mov ecx, esi
        ; Exact mapped bytes E8 62 74 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x74
        __asm _emit 0x1b
        __asm _emit 0x00
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
