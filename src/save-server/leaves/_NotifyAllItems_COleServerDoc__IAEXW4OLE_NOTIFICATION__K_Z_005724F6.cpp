// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005724F6 .. +0x5A bytes.
extern "C" __declspec(naked) void _NotifyAllItems_COleServerDoc__IAEXW4OLE_NOTIFICATION__K_Z_005724F6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0c0h
        push 67cd14h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 4E 7D F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x7d
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 D4 FD FF: call 0x54f9a1
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x57254a
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 6C 00 00: call 0x57916a
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D9: jmp 0x572523
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
