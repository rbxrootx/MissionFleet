// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4E50 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_584e4e50_584E4E50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 03 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2D 03 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 11 03 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 02 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D9 02 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BD 02 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A1 02 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 85 02 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 69 02 2D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x2d
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
