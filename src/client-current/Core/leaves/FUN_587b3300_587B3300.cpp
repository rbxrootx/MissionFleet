// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B3300 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_587b3300_587B3300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push -1
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 3D 12 00 00: call 0x587b4550
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 26 00 00 00: call 0x587b3360
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FF DC 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
