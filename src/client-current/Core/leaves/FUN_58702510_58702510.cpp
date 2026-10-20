// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58702510 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_58702510_58702510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E1 39 D8 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x39
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 184h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 8
        ; Exact mapped bytes 74 58: je 0x587025b0
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 9
        ; Exact mapped bytes 74 49: je 0x587025b0
        __asm _emit 0x74
        __asm _emit 0x49
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 25 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x25
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 34 98 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 24 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x24
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
