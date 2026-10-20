// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413DD0 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_00413dd0_00413DD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 12 D4 FE FF: call 0x401203
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 05 D4 FE FF: call 0x401203
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 67 D3 FE FF: call 0x401172
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E8 B0 D2 FE FF: call 0x4010c3
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 8], al
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E8 D7 FE FF: call 0x401613
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 B5 0F 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
