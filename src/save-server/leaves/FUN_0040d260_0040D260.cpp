// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D260 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_0040d260_0040D260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 69 45 FF FF: call 0x4017ee
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 5C: jle 0x40d2ed
        __asm _emit 0x7e
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        sar edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 1C 3E FF FF: call 0x4010c8
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 4C 41 FF FF: call 0x40140b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x40d2e5
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 06: jmp 0x40d2eb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 9E: jmp 0x40d28b
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 7A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
