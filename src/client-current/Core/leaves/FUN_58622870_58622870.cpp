// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58622870 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_58622870_58622870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 A0 0C 00 00: movsx ecx, word ptr [eax + 0xca0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 77 5D: ja 0x586228e9
        __asm _emit 0x77
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 F0 28 62 58: jmp dword ptr [edx*4 + 0x586228f0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0x28
        __asm _emit 0x62
        __asm _emit 0x58
        push 190h
        push 12ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 45 E9 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        push 190h
        push 12ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 2D 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x586228e9
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1f4h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 45 E9 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 1f4h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 2D 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2d
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
