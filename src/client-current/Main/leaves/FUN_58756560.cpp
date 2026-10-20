// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756560 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58756560() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [esi + 78h]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        cmp edx, 0e10h
        ; Exact mapped bytes 7D 66: jge 0x587565e3
        __asm _emit 0x7d
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 26 F5 08 00: call 0x587e5ab0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3b4h]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], 0
        mov ecx, 40000000h
        mov dword ptr [eax + 8ch], ecx
        mov dword ptr [esi + 3b8h], ecx
        mov ecx, dword ptr [esi + 3b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        lea ecx, [esi + 0b0h]
        mov edx, 20h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x587565d0
        __asm _emit 0x75
        __asm _emit 0xed
        pop esi
        ret
    }
}
