// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849C8D .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_58849c8d_58849C8D() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push dword ptr [esi + 0fa8h]
        lea eax, [esi + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 D3 26 00 00: call 0x5884c377
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 0fc4h]
        lea eax, [esi + 908h]
        push eax
        push esi
        ; Exact mapped bytes E8 C0 26 00 00: call 0x5884c377
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0fc8h]
        push eax
        push esi
        ; Exact mapped bytes E8 2F 00 00 00: call 0x58849cf3
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        push 12h
        pop edx
        movzx eax, byte ptr [edx + 588c1fa0h]
        ; Exact mapped bytes 66 83 BC 86 F6 0E 00 00 00: cmp word ptr [esi + eax*4 + 0xef6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x58849ce2
        __asm _emit 0x75
        __asm _emit 0x06
        dec edx
        cmp edx, 3
        ; Exact mapped bytes 7D E8: jge 0x58849cca
        __asm _emit 0x7d
        __asm _emit 0xe8
        imul ecx, edx, 3
        mov eax, edx
        add ecx, 11h
        add dword ptr [esi + 1af3ch], ecx
        pop esi
        pop ebp
        ret
    }
}
