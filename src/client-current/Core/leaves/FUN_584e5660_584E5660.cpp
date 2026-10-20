// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5660 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_584e5660_584E5660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 64h
        mov dword ptr [ebp - 10h], 101h
        mov dword ptr [ebp - 14h], 19fh
        mov dword ptr [ebp - 8], 400h
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 0ah
        cdq
        idiv dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 80h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [edx + 78h]
        cdq
        and edx, 3ffh
        add eax, edx
        sar eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 80h]
        mov edx, 300h
        sub edx, eax
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 48 9D FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 30 9D FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 18 9D FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 00 9D FB FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 2ch]
        sub edx, 40h
        push edx
        mov eax, dword ptr [ebp - 30h]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CE FE 2C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 00 00 00: call 0x584e5770
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
