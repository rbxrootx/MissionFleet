// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AABD .. +0x93 bytes.
extern "C" __declspec(naked) void __AfxParseOption__YGHPADPBD_Z_0054AABD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 6E: je 0x54ab48
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2dh
        ; Exact mapped bytes 74 0B: je 0x54aaf0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2fh
        ; Exact mapped bytes 75 4D: jne 0x54ab3d
        __asm _emit 0x75
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 FC 25 F4 FF: call 0x48d100
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x54ab3d
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 1]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5D 1D F6 FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x1d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes EB 0D: jmp 0x54ab4a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 88: jmp 0x54aad0
        __asm _emit 0xeb
        __asm _emit 0x88
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
