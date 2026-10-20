// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422DE0 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_00422de0_00422DE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 E5 FD FF: call 0x4013cf
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 64 E8 FD FF: call 0x40167c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        xor edx, edx
        div ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 26 E4 FD FF: call 0x401258
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 08: jmp 0x422e41
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2D: je 0x422e74
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        ; Exact mapped bytes E8 7F E2 FD FF: call 0x4010dc
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        ; Exact mapped bytes E8 7D E7 FD FF: call 0x4015e6
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x422e74
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB C5: jmp 0x422e39
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6C 1F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
