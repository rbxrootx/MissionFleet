// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853FF70 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_5853ff70_5853FF70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 29 C1 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc1
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2c8h], 0
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 250h]
        cmp eax, edx
        ; Exact mapped bytes 75 77: jne 0x58540022
        __asm _emit 0x75
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 1]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 251h]
        cmp ecx, eax
        ; Exact mapped bytes 75 62: jne 0x58540022
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 2]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 252h]
        cmp edx, ecx
        ; Exact mapped bytes 75 4D: jne 0x58540022
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 25ch]
        xor ecx, 55h
        cmp edx, ecx
        ; Exact mapped bytes 74 29: je 0x58540012
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2e0h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2dch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F E8 03 00: call 0x5857e870
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 59: jmp 0x5854007b
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 7E 38: jle 0x58540062
        __asm _emit 0x7e
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2dch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E E8 03 00: call 0x5857e870
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 19: jmp 0x5854007b
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 89 71 F9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 5
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F6 8C F9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
