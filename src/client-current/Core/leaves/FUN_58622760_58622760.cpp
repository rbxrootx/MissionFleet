// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58622760 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_58622760_58622760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 37 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x37
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 36 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x36
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 98 0C 00 00: movsx eax, word ptr [edx + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 1A: jle 0x586227ac
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c74h]
        mov dword ptr [ebp - 10h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 36 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x36
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        movzx ecx, byte ptr [ebp + 8]
        cmp ecx, 1
        ; Exact mapped bytes 75 4F: jne 0x58622804
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 22 E6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x22
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 14h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c9ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c74h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DF 35 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x35
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5D: jmp 0x58622861
        __asm _emit 0xeb
        __asm _emit 0x5d
        movzx ecx, byte ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 55: jne 0x58622861
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 22 E6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x22
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c9ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c74h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 80 35 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x35
        __asm _emit 0xe6
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
