// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748C80 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58748c80() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 1C: je 0x58748ca7
        __asm _emit 0x74
        __asm _emit 0x1c
        add dword ptr [esi + 28h], -20h
        ; Exact mapped bytes 79 16: jns 0x58748ca7
        __asm _emit 0x79
        __asm _emit 0x16
        ; Exact mapped bytes E8 8A 9F 1B 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 D3 9F 1B 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
    }
}
