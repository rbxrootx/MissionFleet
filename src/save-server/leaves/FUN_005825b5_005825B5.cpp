// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005825B5 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_005825b5_005825B5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 11: jne 0x5825d8
        __asm _emit 0x75
        __asm _emit 0x11
        push 36h
        push 6788ach
        ; Exact mapped bytes E8 6D 67 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5825d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x5825bf
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 10: je 0x582600
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 1
        mov eax, dword ptr [ebp - 4]
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
