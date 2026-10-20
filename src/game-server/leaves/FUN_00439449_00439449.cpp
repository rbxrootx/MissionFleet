// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439449 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_00439449_00439449() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40ch
        push esi
        push edi
        lea edi, [ebp - 40ch]
        mov ecx, 103h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 408h], eax
        mov esi, esp
        mov ecx, dword ptr [ebp - 408h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 C4 28 5E 00: call dword ptr [0x5e28c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 F3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 408h], 0
        mov esi, esp
        push 0
        lea ecx, [ebp - 40ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes 8B 0D 44 2F 5D 00: mov ecx, dword ptr [0x5d2f44]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 19 F3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        add esp, 40ch
        cmp ebp, esp
        ; Exact mapped bytes E8 07 F3 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
