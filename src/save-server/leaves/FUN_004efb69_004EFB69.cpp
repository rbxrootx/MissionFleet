// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EFB69 .. +0x1BE bytes.
extern "C" __declspec(naked) void FUN_004efb69_004EFB69() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A4 DF FF FF: call 0x4edb22
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ecx + 48h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 677d88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 8C 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A8 5F FF FF: call 0x4e5b50
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 677d98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 8C 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 7E 5F FF FF: call 0x4e5b50
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [edx + 58h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 677da8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 8C 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 54 5F FF FF: call 0x4e5b50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 677db8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 8C 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 2A 5F FF FF: call 0x4e5b50
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 677dc8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 8C 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 56 8E 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 677dd8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3B 8E 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        push 677dech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 7
        ; Exact mapped bytes 0F 87 82 00 00 00: ja 0x4efd07
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 8D 27 FD 4E 00: jmp dword ptr [ecx*4 + 0x4efd27]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0x4e
        __asm _emit 0x00
        push 677dfch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 76: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x76
        push 677e04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 67: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x67
        push 677e14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x58
        push 677e1ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x49
        push 677e28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 677e34h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 677e44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 677e54h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4efd14
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 677e60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        push 677e6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 8B 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
