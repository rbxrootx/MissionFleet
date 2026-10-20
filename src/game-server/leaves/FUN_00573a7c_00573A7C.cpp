// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573A7C .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_00573a7c_00573A7C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C1 C3 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x573aad
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b7h
        push 5cbcc4h
        ; Exact mapped bytes E8 58 0F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573aad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x573a88
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FA D3 FB FF: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 C0 24 5E 00: call dword ptr [0x5e24c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x573aef
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 BD C2 F5 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B8 D3 FB FF: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x573b31
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c5h
        push 5cbcc4h
        ; Exact mapped bytes E8 D4 0E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573b31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x573b15
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
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
