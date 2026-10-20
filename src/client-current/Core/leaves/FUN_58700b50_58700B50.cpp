// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58700B50 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_58700b50_58700B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 87 E1 00 00 00: ja 0x58700c4a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 50 0C 70 58: jmp dword ptr [ecx*4 + 0x58700c50]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x70
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D7 51 D8 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x51
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 10h], eax
        push 1
        push 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 128h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x58700c4a
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 14h], ecx
        push 4
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9C 51 D8 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x51
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        ; Exact mapped bytes EB 64: jmp 0x58700c4a
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b0h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        ; Exact mapped bytes EB 42: jmp 0x58700c4a
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1b4h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        ; Exact mapped bytes EB 20: jmp 0x58700c4a
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1a0h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
