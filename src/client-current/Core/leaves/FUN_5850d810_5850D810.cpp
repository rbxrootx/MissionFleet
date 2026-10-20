// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850D810 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_5850d810_5850D810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        push 3c8h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 E4 F5 33 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf5
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5850d8c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DF 5D F9 FF: call 0x584a3630
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5850d863
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2E 48 FF FF: call 0x58502090
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F8 5E F9 FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 9F 4D F9 FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 34: je 0x5850d8bc
        __asm _emit 0x74
        __asm _emit 0x34
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 70 4E F9 FF: call 0x584a2700
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x5850d8ba
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], eax
        push 3c8h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 84 37 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 98: jmp 0x5850d854
        __asm _emit 0xeb
        __asm _emit 0x98
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 A9 5D F9 FF: call 0x584a3670
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 34: mov word ptr [edx + 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x34
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 36: mov word ptr [ecx + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x36
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 38: mov word ptr [eax + 0x38], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x38
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 3A: mov word ptr [edx + 0x3a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x3a
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 3C: mov word ptr [ecx + 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x3c
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 3E: mov word ptr [eax + 0x3e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x3e
        mov esp, ebp
        pop ebp
        ret
    }
}
