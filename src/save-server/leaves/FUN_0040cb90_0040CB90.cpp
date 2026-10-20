// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CB90 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0040cb90_0040CB90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        cmp dword ptr [ebp + 8], 80h
        ; Exact mapped bytes 76 11: jbe 0x40cbc2
        __asm _emit 0x76
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 77 4A FF FF: call 0x401631
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x40cbd1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F5 73 02 00: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 0F 82 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
