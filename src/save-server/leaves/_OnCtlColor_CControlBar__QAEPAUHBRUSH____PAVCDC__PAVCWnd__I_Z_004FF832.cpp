// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF832 .. +0x5E bytes.
extern "C" __declspec(naked) void _OnCtlColor_CControlBar__QAEPAUHBRUSH____PAVCDC__PAVCWnd__I_Z_004FF832() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1B 42 FD FF: call 0x4d3a62
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4ff850
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 3A: jmp 0x4ff88a
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D E4 6D 68 00: mov ecx, dword ptr [0x686de4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 D4 6D 68 00: mov edx, dword ptr [0x686dd4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 42 BD 02 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 CC 4A FD FF: call 0x4d4343
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4ff885
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F FF FC FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x4ff88a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes A1 D4 6D 68 00: mov eax, dword ptr [0x686dd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
