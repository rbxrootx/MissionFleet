// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEDB6 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_004cedb6_004CEDB6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 90 E9 01 00: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F BE 55 08: movsx edx, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp edx, ecx
        ; Exact mapped bytes 75 11: jne 0x4cedee
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 9A E2 FB FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E1: jmp 0x4cedcf
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 3F: je 0x4cee37
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 20 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [edx]
        mov edx, dword ptr [eax + 4]
        sub edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 6A DA FD FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 20 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
