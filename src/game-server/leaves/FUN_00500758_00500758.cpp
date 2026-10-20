// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500758 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_00500758_00500758() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 0F 03 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 0F 03 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 EA: mov word ptr [ebp - 0x16], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xea
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 0F 03 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 0F 03 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 0F 03 00: call 0x531758
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 0F 03 00: call 0x531770
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 C7 45 F6 00 00: mov word ptr [ebp - 0xa], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 D0 22 5E 00: call dword ptr [0x5e22d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5007cc
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 04 B1 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 D4 22 5E 00: call dword ptr [0x5e22d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5007ec
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E4 B0 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
