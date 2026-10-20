// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D1BC .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5884d1bc_5884D1BC() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        cld
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [esi + 8]
        xor ecx, esi
        ; Exact mapped bytes E8 82 3E FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push esi
        push dword ptr [esi + 14h]
        push dword ptr [esi + 0ch]
        push 0
        push dword ptr [ebp + 10h]
        push dword ptr [esi + 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 2E 00 00: call 0x58850013
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        pop esi
        pop ebp
        ret
    }
}
