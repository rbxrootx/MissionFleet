// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437AC7 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_00437ac7_00437AC7() {
    __asm {
        push esi
        push edi
        push dword ptr [esp + 18h]
        mov esi, ecx
        ; Exact mapped bytes E8 BD FF FF FF: call 0x437a91
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [esi + 60h]
        push 2ch
        push 0
        push edi
        mov dword ptr [esi], 43f538h
        ; Exact mapped bytes E8 F9 6F FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        add esp, 0ch
        cmp dword ptr [esp + 10h], 0
        mov dword ptr [edi], 2ch
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes 74 05: je 0x437b03
        __asm _emit 0x74
        __asm _emit 0x05
        or al, 8
        mov dword ptr [esi + 64h], eax
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi + 70h], 437a46h
        mov dword ptr [esi + 84h], eax
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
