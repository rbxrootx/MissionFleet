// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830719 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58830719_58830719() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push 0
        push 0
        ; Exact mapped bytes E8 C1 37 03 00: call 0x58863ee7
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        test eax, eax
        pop ecx
        pop ecx
        mov ecx, 58895250h
        cmovne ecx, eax
        push ecx
        lea ecx, [esi + 24h]
        ; Exact mapped bytes E8 3F FE FF FF: call 0x5883057d
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5883074f
        __asm _emit 0x74
        __asm _emit 0x0a
        push eax
        push 0
        ; Exact mapped bytes E8 9A 37 03 00: call 0x58863ee7
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        mov ecx, 588be36ch
        cmovne ecx, eax
        push ecx
        lea ecx, [esi + 2ch]
        ; Exact mapped bytes E8 1B FE FF FF: call 0x5883057d
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        ret
    }
}
