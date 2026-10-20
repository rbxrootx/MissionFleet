// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415F80 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_00415f80_00415F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 18h
        mov dword ptr [ebp - 0ch], 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 51 B3 FE FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x415ffd
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c78h]
        ; Exact mapped bytes E8 50 B2 FE FF: call 0x401235
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 A7 B8 FE FF: call 0x40189d
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x415fff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 E4 ED 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
