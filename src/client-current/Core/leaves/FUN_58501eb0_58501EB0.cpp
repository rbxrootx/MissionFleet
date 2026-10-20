// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501EB0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_58501eb0_58501EB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ddd0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 60: je 0x58501f41
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 23 50 F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 11 50 F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 FF 4F F8 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 10h
        push edx
        ; Exact mapped bytes E8 8D 53 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 82 FB FF FF: call 0x58501ac0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 00 00 00: call 0x58501f60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
