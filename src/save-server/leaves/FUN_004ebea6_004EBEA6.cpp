// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBEA6 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_004ebea6_004EBEA6() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4ebec3
        __asm _emit 0x75
        __asm _emit 0x11
        push 6dh
        push 675a74h
        ; Exact mapped bytes E8 82 CE 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ebec3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4ebeac
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 15: je 0x4ebee6
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 30 B6 68 00: call dword ptr [0x68b630]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 0
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
