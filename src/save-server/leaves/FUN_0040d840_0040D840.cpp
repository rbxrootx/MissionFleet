// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D840 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0040d840_0040D840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 42 FF FF: call 0x401ae1
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x40d878
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 31 E8 0B 00: call 0x4cc0a9
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 68 75 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
