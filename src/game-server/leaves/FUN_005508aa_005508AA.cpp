// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005508AA .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_005508aa_005508AA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1d2h
        push 5cf710h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9C A8 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 36: je 0x550903
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 1C: je 0x5508fd
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5508d8
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 A4 CD F9 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
