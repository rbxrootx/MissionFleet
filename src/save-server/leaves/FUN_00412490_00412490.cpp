// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412490 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00412490_00412490() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ae92h
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
        sub esp, 58h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 64h]
        mov ecx, 16h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 86 F0 FE FF: call 0x401550
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        push 64h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 EF FE FF: call 0x401406
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 79 F3 FE FF: call 0x401875
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        add esp, 64h
        cmp ebp, esp
        ; Exact mapped bytes E8 D3 28 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
