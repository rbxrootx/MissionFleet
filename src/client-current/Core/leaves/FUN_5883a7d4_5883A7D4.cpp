// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A7D4 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5883a7d4_5883A7D4() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 87 08 00 00: call 0x5883b064
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        lea ecx, [esi + 10h]
        ; Exact mapped bytes 66 C7 46 0C 00 00: mov word ptr [esi + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5883a7f4
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 FF FF FF: call 0x5883a6f9
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
