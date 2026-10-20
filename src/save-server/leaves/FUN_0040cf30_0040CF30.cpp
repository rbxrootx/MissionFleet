// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CF30 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_0040cf30_0040CF30() {
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
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B2 42 FF FF: call 0x401203
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B1 4A FF FF: call 0x401a0f
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 1D 45 FF FF: call 0x401483
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 8], al
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E3 48 FF FF: call 0x401861
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 62 7E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
