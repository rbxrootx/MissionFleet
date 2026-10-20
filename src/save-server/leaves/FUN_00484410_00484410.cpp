// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484410 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00484410_00484410() {
    __asm {
        push esi
        push edi
        mov esi, dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes E8 D4 FF FF FF: call 0x4843f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 2C: jne 0x484451
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [esp + 10h]
        cmp eax, 6
        ; Exact mapped bytes 75 08: jne 0x484436
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 3D 30 9B 68 00: mov edi, dword ptr [0x689b30]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x484440
        __asm _emit 0xeb
        __asm _emit 0x0a
        lea eax, [eax + eax*2]
        mov edi, dword ptr [eax*8 + 689aa4h]
        push edi
        xor eax, eax
        ; Exact mapped bytes 66 A1 4E 90 68 00: mov ax, word ptr [0x68904e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 1C BF 68 00: call dword ptr [0x68bf1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
