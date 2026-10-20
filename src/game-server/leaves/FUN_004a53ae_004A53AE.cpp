// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A53AE .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004a53ae_004A53AE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x4a53d2
        __asm _emit 0x75
        __asm _emit 0x11
        push 5bh
        push 5d0270h
        ; Exact mapped bytes E8 33 F6 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a53d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a53b8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20h]
        ; Exact mapped bytes E8 26 AF 0C 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x4a541b
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x4a5401
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 5d0270h
        ; Exact mapped bytes E8 04 F6 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5401
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a53e7
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
