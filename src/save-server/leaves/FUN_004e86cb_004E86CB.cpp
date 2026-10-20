// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E86CB .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_004e86cb_004E86CB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF D5 FF FF: call 0x4e5c8c
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 25: je 0x4e870b
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e870b
        __asm _emit 0x75
        __asm _emit 0x14
        push 3e5h
        push 6733e0h
        ; Exact mapped bytes E8 3A 06 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e870b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CC: jne 0x4e86dd
        __asm _emit 0x75
        __asm _emit 0xcc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
