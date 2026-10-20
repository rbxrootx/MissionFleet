// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044FEA5 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0044fea5_0044FEA5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x44fed4
        __asm _emit 0x75
        __asm _emit 0x14
        push 47bh
        push 67702ch
        ; Exact mapped bytes E8 71 8E 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44fed4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x44feaf
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        push 8
        push 0fffffdfah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x44ff12
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 8
        push 0fffffdfbh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        add esp, 10h
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
