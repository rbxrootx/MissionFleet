// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58794FD0 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_58794fd0_58794FD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 30 01 00 00: jne 0x58795113
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5879509d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 80 F9 CE FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xce
        __asm _emit 0xff
        cmp eax, 14h
        ; Exact mapped bytes 7F 29: jg 0x5879502e
        __asm _emit 0x7f
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 70 F9 CE FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf9
        __asm _emit 0xce
        __asm _emit 0xff
        cmp eax, 14h
        ; Exact mapped bytes 7F 19: jg 0x5879502e
        __asm _emit 0x7f
        __asm _emit 0x19
        ; Exact mapped bytes E8 86 11 FF FF: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 11h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 0E FF FF: call 0x58785e30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x58795115
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA F9 CE FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xce
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 14h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 0ee48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        ; Exact mapped bytes EB 76: jmp 0x58795113
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0a0h]
        ; Exact mapped bytes 75 68: jne 0x58795113
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D F9 CE FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xce
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 24h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 30h], ecx
        push 0ah
        push 0ee48h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
