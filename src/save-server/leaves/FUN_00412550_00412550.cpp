// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412550 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_00412550_00412550() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58aec8h
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
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 EE FE FF: call 0x401429
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 C9 F4 FE FF: call 0x401a69
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 2C EE FE FF: call 0x4013de
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xee
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
        ; Exact mapped bytes E8 27 28 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
