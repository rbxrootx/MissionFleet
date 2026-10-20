// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58620210 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_58620210_58620210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 5C E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 5B E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5b
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
        ; Exact mapped bytes 7E 1A: jle 0x5862025c
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c74h]
        mov dword ptr [ebp - 10h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 5B E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        movzx ecx, byte ptr [ebp + 8]
        cmp ecx, 1
        ; Exact mapped bytes 75 38: jne 0x5862029d
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 47 E6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x47
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
        ; Exact mapped bytes EB 47: jmp 0x586202e4
        __asm _emit 0xeb
        __asm _emit 0x47
        movzx edx, byte ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 75 3F: jne 0x586202e4
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 47 E6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x47
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c9ch], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
