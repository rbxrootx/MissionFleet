// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D773F .. +0x62 bytes.
extern "C" __declspec(naked) void _OnFinalRelease_CCmdTarget__UAEXXZ_004D773F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        push 0dh
        ; Exact mapped bytes E8 2B B6 06 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4d776b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 8F 06 00: call 0x5406db
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        push 0dh
        ; Exact mapped bytes E8 3A B7 06 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x4d7796
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4d779d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
