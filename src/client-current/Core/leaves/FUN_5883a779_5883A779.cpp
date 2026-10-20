// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A779 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_5883a779_5883A779() {
    __asm {
        push 10h
        mov eax, 5889296dh
        ; Exact mapped bytes E8 1C 7E FF FF: call 0x588325a1
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 DA 08 00 00: call 0x5883b064
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        xor ecx, ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 14h], esi
        ; Exact mapped bytes 66 89 4E 0C: mov word ptr [esi + 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x0c
        lea ecx, [esi + 10h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 1ch], ecx
        mov byte ptr [ebp - 4], 1
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x5883a7b1
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 FF FF FF: call 0x5883a6c6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E8 5D 7D FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
