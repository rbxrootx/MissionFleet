// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B8D0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_0051b8d0_0051B8D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 47 FE FF: call 0x5000c6
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 09: jne 0x51b8f4
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 2D: je 0x51b921
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 4D 45 FB FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51b921
        __asm _emit 0x75
        __asm _emit 0x14
        push 16ch
        push 5cb0ach
        ; Exact mapped bytes E8 E4 90 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b921
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BB: jne 0x51b8e2
        __asm _emit 0x75
        __asm _emit 0xbb
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 1ch]
        cmp eax, dword ptr [edx + 18h]
        ; Exact mapped bytes 76 14: jbe 0x51b949
        __asm _emit 0x76
        __asm _emit 0x14
        push 16dh
        push 5cb0ach
        ; Exact mapped bytes E8 BC 90 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b949
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51b927
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
