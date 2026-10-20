// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426BF0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_00426bf0_00426BF0() {
    __asm {
        ; Exact mapped bytes FF 05 7C FF 44 00: inc dword ptr [0x44ff7c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push 1000h
        ; Exact mapped bytes E8 E4 87 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [esp + 4]
        test eax, eax
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes 74 0D: je 0x426c19
        __asm _emit 0x74
        __asm _emit 0x0d
        or dword ptr [ecx + 0ch], 8
        mov dword ptr [ecx + 18h], 1000h
        ; Exact mapped bytes EB 11: jmp 0x426c2a
        __asm _emit 0xeb
        __asm _emit 0x11
        or dword ptr [ecx + 0ch], 4
        lea eax, [ecx + 14h]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 18h], 2
        mov eax, dword ptr [ecx + 8]
        and dword ptr [ecx + 4], 0
        mov dword ptr [ecx], eax
        ret
    }
}
