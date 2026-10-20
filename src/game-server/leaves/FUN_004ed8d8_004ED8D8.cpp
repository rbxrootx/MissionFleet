// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED8D8 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_004ed8d8_004ED8D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 08 36 04 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 43: je 0x4ed932
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x4ed932
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 65 D2 00 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ed930
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5c4be0h
        ; Exact mapped bytes E8 E8 22 FE FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 34: jmp 0x4ed966
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7F 36 04 00: call 0x530fba
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 22: je 0x4ed966
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C9 FB FF FF: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 BD B6 FB FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
