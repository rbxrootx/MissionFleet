// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005332FE .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_005332fe_005332FE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 88 B6 68 00: call dword ptr [0x68b688]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53333b
        __asm _emit 0x75
        __asm _emit 0x14
        push 18eh
        push 636640h
        ; Exact mapped bytes E8 0A 5A FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53333b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x53330a
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 E8 FF FF: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
