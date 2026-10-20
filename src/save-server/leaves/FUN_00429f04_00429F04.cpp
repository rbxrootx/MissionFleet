// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429F04 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00429f04_00429F04() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x429f33
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 BF AE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x429f35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B0 AE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
