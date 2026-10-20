// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E5BF0 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_586e5bf0_586E5BF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4e0h], 0
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x586e5cda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4e0h]
        ; Exact mapped bytes E8 A8 0D DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        sub edx, eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, edx
        cdq
        idiv dword ptr [ecx + 578h]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4e0h]
        ; Exact mapped bytes E8 76 64 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, eax
        mov esi, dword ptr [ebp - 4]
        mov eax, ecx
        cdq
        idiv dword ptr [esi + 57ch]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 4d8h]
        add eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 0d8h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 4dch]
        add eax, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 0dch], eax
        mov edx, dword ptr [ebp - 0ch]
        imul edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp - 8]
        add edx, eax
        mov ecx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 7D 11: jge 0x586e5cb8
        __asm _emit 0x7d
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [edx + 4e8h], al
        ; Exact mapped bytes EB 0D: jmp 0x586e5cc5
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 4e8h], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 568h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 568h], eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
