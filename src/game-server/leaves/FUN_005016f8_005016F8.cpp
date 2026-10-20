// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005016F8 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_005016f8_005016F8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x501721
        __asm _emit 0x75
        __asm _emit 0x14
        push 147h
        push 5c6db0h
        ; Exact mapped bytes E8 E4 32 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501721
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x501704
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 14: je 0x501750
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 74 20 5E 00: call dword ptr [0x5e2074]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 14: je 0x50176d
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 74 20 5E 00: call dword ptr [0x5e2074]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
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
