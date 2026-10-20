// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE8B0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_585ee8b0_585EE8B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 106a4h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 70 44 F1 FF: call 0x58502d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x44
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585ee8e2
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 0F 16 FD FF: call 0x585bfef0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 106a4h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 45 F1 FF: call 0x58502e70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x45
        __asm _emit 0xf1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1E 3D EB FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3d
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x585ee942
        __asm _emit 0x74
        __asm _emit 0x39
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1F 37 F1 FF: call 0x58502030
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x37
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 29: je 0x585ee940
        __asm _emit 0x74
        __asm _emit 0x29
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 11 37 F1 FF: call 0x58502030
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x37
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 1D 27 24 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x27
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F7 36 F1 FF: call 0x58502030
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x36
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [eax + 0ch], 0
        ; Exact mapped bytes EB 91: jmp 0x585ee8d3
        __asm _emit 0xeb
        __asm _emit 0x91
        mov ecx, dword ptr [ebp - 8]
        add ecx, 106a4h
        ; Exact mapped bytes E8 F0 FE FF FF: call 0x585ee840
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
