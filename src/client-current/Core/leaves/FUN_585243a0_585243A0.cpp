// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585243A0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_585243a0_585243A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 06 F6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 15 F6 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x15
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58524404
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 06 F6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 00 00 00: call 0x58524470
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        push 0f765h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
