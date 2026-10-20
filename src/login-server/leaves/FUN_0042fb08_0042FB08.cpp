// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FB08 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_0042fb08_0042FB08() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 75 04: jne 0x42fb15
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        push ebx
        push edi
        push 0
        ; Exact mapped bytes E8 48 F7 FF FF: call 0x42f266
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 1ch]
        lea ecx, [eax + 4]
        ; Exact mapped bytes E8 50 DC FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 38h]
        mov edi, eax
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x42fb3d
        __asm _emit 0x75
        __asm _emit 0x0b
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 AC C4 43 00: call dword ptr [0x43c4ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x42fb42
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        test edi, edi
        mov ebx, eax
        ; Exact mapped bytes 75 07: jne 0x42fb4f
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 07 F8 FF FF: call 0x42f356
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ebx
        pop edi
        pop ebx
        pop esi
        ret
    }
}
