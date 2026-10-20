// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420BE0 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_00420be0_00420BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x420c0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 62 0A FE FF: call 0x40167c
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 39: jae 0x420c58
        __asm _emit 0x73
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 F8 05 FE FF: call 0x401226
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 23: je 0x420c56
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 E0 05 FE FF: call 0x401226
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 09 FE FF: call 0x401622
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 11: jmp 0x420c67
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes EB AE: jmp 0x420c06
        __asm _emit 0xeb
        __asm _emit 0xae
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 0C FE FF: call 0x401866
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 41 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x41
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
