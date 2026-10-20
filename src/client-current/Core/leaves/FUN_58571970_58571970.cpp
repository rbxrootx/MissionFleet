// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58571970 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_58571970_58571970() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 04 06 96 58: cmp eax, dword ptr [0x58960604]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 14: je 0x58571998
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 44h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 48h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
