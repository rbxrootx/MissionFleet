// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006BFB0 .. +0x117 bytes.
extern "C" __declspec(naked) void FUN_1006bfb0_1006BFB0() {
    __asm {
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [eax + 30h]
        mov edi, dword ptr [esp + 0ch]
        push edi
        push 67h
        mov edx, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp edi, 3
        ; Exact mapped bytes 0F 87 DC 00 00 00: ja 0x1006c0ae
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 BD C8 C0 06 10: jmp dword ptr [edi*4 + 0x1006c0c8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x10
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 18h]
        add eax, 320h
        add ecx, 258h
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esi + 104e0h]
        mov dword ptr [esi + 20h], ecx
        mov edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [eax + 18h]
        add edx, 320h
        add ecx, 258h
        mov dword ptr [eax + 1ch], edx
        mov dword ptr [eax + 20h], ecx
        mov eax, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 14h]
        add eax, 300h
        add edx, 400h
        mov dword ptr [esi + 20h], eax
        mov eax, dword ptr [esi + 104e0h]
        mov dword ptr [esi + 1ch], edx
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 18h]
        add ecx, 400h
        add edx, 300h
        mov dword ptr [eax + 1ch], ecx
        ; Exact mapped bytes EB 69: jmp 0x1006c0ab
        __asm _emit 0xeb
        __asm _emit 0x69
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 18h]
        add eax, 500h
        add ecx, 400h
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esi + 104e0h]
        mov dword ptr [esi + 20h], ecx
        mov edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [eax + 18h]
        add edx, 500h
        add ecx, 400h
        mov dword ptr [eax + 1ch], edx
        mov dword ptr [eax + 20h], ecx
        ; Exact mapped bytes EB 35: jmp 0x1006c0ae
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 14h]
        add eax, 4b0h
        add edx, 640h
        mov dword ptr [esi + 20h], eax
        mov eax, dword ptr [esi + 104e0h]
        mov dword ptr [esi + 1ch], edx
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [eax + 18h]
        add ecx, 640h
        add edx, 4b0h
        mov dword ptr [eax + 1ch], ecx
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [esi + 20h]
        mov edx, dword ptr [esi + 18h]
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 FE 2C 09 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
