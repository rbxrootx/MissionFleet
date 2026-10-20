// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CC60 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0040cc60_0040CC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        cmp dword ptr [ebp + 0ch], 80h
        ; Exact mapped bytes 76 0E: jbe 0x40cc8f
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 74 45 FF FF: call 0x4011fe
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x40cc9f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D4 74 02 00: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        pop ebx
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 44 81 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
