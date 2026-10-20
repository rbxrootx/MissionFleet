// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005310CD .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_005310cd_005310CD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 50 ED F9 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5310fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a5h
        push 5820d4h
        ; Exact mapped bytes E8 0B 39 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5310fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x5310d7
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 91 C0 F5 FF: call 0x48d1a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
