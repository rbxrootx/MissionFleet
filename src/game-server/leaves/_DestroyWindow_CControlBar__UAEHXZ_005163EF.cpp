// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005163EF .. +0x42 bytes.
extern "C" __declspec(naked) void _DestroyWindow_CControlBar__UAEHXZ_005163EF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 24: je 0x516425
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 52 7D 01 00: call 0x52e15b
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x516425
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 7C 01 00: call 0x52e0e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        ; Exact mapped bytes EB 08: jmp 0x51642d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 C9 FD FF: call 0x4f2df2
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
