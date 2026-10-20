// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C3930 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_100c3930_100C3930() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push 0ah
        mov ecx, dword ptr [esi + 68h]
        mov dword ptr [esi + 7ch], eax
        ; Exact mapped bytes E8 DC BD 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 0C: mov ax, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 6ch]
        xor eax, 0aah
        add eax, 0c8h
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 BB BD 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 0
        ; Exact mapped bytes E8 B1 BD 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
