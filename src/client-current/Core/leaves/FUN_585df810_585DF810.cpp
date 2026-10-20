// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585DF810 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_585df810_585DF810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10d9ch], 0
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x585df8d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10d9ch], 64h
        ; Exact mapped bytes 75 7E: jne 0x585df8b3
        __asm _emit 0x75
        __asm _emit 0x7e
        push 5
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 25 19 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x25
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 69: jne 0x585df8b3
        __asm _emit 0x75
        __asm _emit 0x69
        push 2ah
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 52 EA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x585df8b3
        __asm _emit 0x75
        __asm _emit 0x48
        push 2ah
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 52 EA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 C5 1D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc5
        __asm _emit 0x1d
        __asm _emit 0x00
        push 2ah
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 51 EA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x51
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d9ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10d9ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10d98h]
        ; Exact mapped bytes E8 AA FF EB FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x585df8f0
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d98h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F1 65 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x65
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
