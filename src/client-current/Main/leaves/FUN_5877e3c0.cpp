// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E3C0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_5877e3c0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        xor edx, edx
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [ecx + 60h], edx
        mov dword ptr [ecx + 58h], edx
        mov dword ptr [ecx + 5ch], edx
        mov dword ptr [ecx + 64h], 0ffffffffh
        mov dword ptr [ecx + 68h], 1
        mov dword ptr [ecx + 6ch], 1
        mov dword ptr [ecx + 70h], edx
        mov dword ptr [ecx + 54h], eax
        cmp eax, edx
        ; Exact mapped bytes 74 3F: je 0x5877e430
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 20h]
        mov dword ptr [ecx + 14h], edx
        mov edx, dword ptr [eax + 24h]
        mov dword ptr [ecx + 18h], edx
        mov edx, dword ptr [eax + 28h]
        mov dword ptr [ecx + 1ch], edx
        mov edx, dword ptr [eax + 2ch]
        mov dword ptr [ecx + 20h], edx
        movzx edx, word ptr [eax + 0ch]
        mov eax, 38e38e39h
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 74h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        mov dword ptr [ecx + 74h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
