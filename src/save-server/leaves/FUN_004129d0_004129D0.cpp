// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004129D0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004129d0_004129D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58af3ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 20: je 0x412a31
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        sar eax, 2
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 40 ED FE FF: call 0x401771
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 98 E7 FE FF: call 0x4011db
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 96 23 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
