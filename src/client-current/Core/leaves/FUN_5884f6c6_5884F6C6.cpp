// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F6C6 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5884f6c6_5884F6C6() {
    __asm {
        ; Exact mapped bytes 83 3D F0 72 90 58 FF: cmp dword ptr [0x589072f0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 03: jne 0x5884f6d2
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        push esi
        push edi
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 F0 72 90 58: push dword ptr [0x589072f0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes E8 9C 13 00 00: call 0x58850a83
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push esi
        mov edi, eax
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        cmp edi, -1
        cmove edi, eax
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
