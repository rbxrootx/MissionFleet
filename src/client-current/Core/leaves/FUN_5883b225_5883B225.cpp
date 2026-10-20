// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B225 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_5883b225_5883B225() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ebx, ecx
        push edi
        mov edi, esi
        cmp byte ptr [esi + 0dh], 0
        ; Exact mapped bytes 75 29: jne 0x5883b261
        __asm _emit 0x75
        __asm _emit 0x29
        push dword ptr [edi + 8]
        mov ecx, ebx
        ; Exact mapped bytes E8 E3 FF FF FF: call 0x5883b225
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [edi]
        lea ecx, [esi + 10h]
        ; Exact mapped bytes E8 74 C2 C8 FF: call 0x584c74c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xff
        push 40h
        push 1
        push esi
        ; Exact mapped bytes E8 56 F0 FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esi, edi
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 74 D7: je 0x5883b238
        __asm _emit 0x74
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
